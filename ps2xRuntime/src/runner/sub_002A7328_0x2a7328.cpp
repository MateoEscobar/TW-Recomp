#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A7328
// Address: 0x2a7328 - 0x2a73a8
void sub_002A7328_0x2a7328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7328_0x2a7328");
#endif

    switch (ctx->pc) {
        case 0x2a7358u: goto label_2a7358;
        case 0x2a7370u: goto label_2a7370;
        default: break;
    }

    ctx->pc = 0x2a7328u;

    // 0x2a7328: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a7328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a732c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a732cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a7330: 0x8c46bd30  lw          $a2, -0x42D0($v0)
    ctx->pc = 0x2a7330u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2a7334: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a7334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a7338: 0xa4809f40  sh          $zero, -0x60C0($a0)
    ctx->pc = 0x2a7338u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6E9F40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6E9F40u, _value); } while (0);
    // 0x2a733c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a733cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a7340: 0x246a9440  addiu       $t2, $v1, -0x6BC0
    ctx->pc = 0x2a7340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
    // 0x2a7344: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7348: 0x24499e40  addiu       $t1, $v0, -0x61C0
    ctx->pc = 0x2a7348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
    // 0x2a734c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2a734cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7350: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2a7350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a7354: 0x0  nop
    ctx->pc = 0x2a7354u;
    // NOP
label_2a7358:
    // 0x2a7358: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x2a7358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a735c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2a735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a7360: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x2a7360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2a7364: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2a7364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2a7368: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2a7368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a736c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a7370:
    // 0x2a7370: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2a7370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2a7374: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a7374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a7378: 0x0  nop
    ctx->pc = 0x2a7378u;
    // NOP
    // 0x2a737c: 0x0  nop
    ctx->pc = 0x2a737cu;
    // NOP
    // 0x2a7380: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A7380u;
    {
        const bool branch_taken_0x2a7380 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2A7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7380u;
        // 0x2a7384: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7380) {
            ctx->pc = 0x2A7370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7370;
        }
    }
    ctx->pc = 0x2A7388u;
    // 0x2a7388: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x2a7388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a738c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a7390: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2a7390u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a7394: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x2a7394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a7398: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2A7398u;
    {
        const bool branch_taken_0x2a7398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7398u;
        // 0x2a739c: 0xa4680000  sh          $t0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7398) {
            ctx->pc = 0x2A7358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7358;
        }
    }
    ctx->pc = 0x2A73A0u;
    // 0x2a73a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A73A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A73A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A73A8u;
}
