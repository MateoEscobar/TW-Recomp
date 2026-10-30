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

// Function: sub_001AE5A0
// Address: 0x1ae5a0 - 0x1ae638
void sub_001AE5A0_0x1ae5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE5A0_0x1ae5a0");
#endif

    switch (ctx->pc) {
        case 0x1ae5c0u: goto label_1ae5c0;
        case 0x1ae5d4u: goto label_1ae5d4;
        case 0x1ae608u: goto label_1ae608;
        default: break;
    }

    ctx->pc = 0x1ae5a0u;

    // 0x1ae5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae5a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ae5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ae5a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ae5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ae5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ae5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ae5b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae5bc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ae5bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae5c0:
    // 0x1ae5c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ae5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae5c4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE5C4u;
    {
        const bool branch_taken_0x1ae5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5C4u;
        // 0x1ae5c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5c4) {
            ctx->pc = 0x1AE5E4u;
            goto label_1ae5e4;
        }
    }
    ctx->pc = 0x1AE5CCu;
    // 0x1ae5cc: 0xc0517e8  jal         func_145FA0
    ctx->pc = 0x1AE5CCu;
    SET_GPR_U32(ctx, 31, 0x1AE5D4u);
    ctx->pc = 0x145FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145FA0u, 0x1AE5CCu, 0x1AE5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5D4u;
label_1ae5d4:
    // 0x1ae5d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ae5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae5d8: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x1ae5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae5dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae5e0: 0xa0720019  sb          $s2, 0x19($v1)
    ctx->pc = 0x1ae5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 25), (uint8_t)GPR_U32(ctx, 18));
label_1ae5e4:
    // 0x1ae5e4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1ae5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ae5e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1AE5E8u;
    {
        const bool branch_taken_0x1ae5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E8u;
        // 0x1ae5ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5e8) {
            ctx->pc = 0x1AE5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae5c0;
        }
    }
    ctx->pc = 0x1AE5F0u;
    // 0x1ae5f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1ae5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1ae5f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ae5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae5f8: 0x2443d810  addiu       $v1, $v0, -0x27F0
    ctx->pc = 0x1ae5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1ae5fc: 0x24650280  addiu       $a1, $v1, 0x280
    ctx->pc = 0x1ae5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x1ae600: 0xa4640042  sh          $a0, 0x42($v1)
    ctx->pc = 0x1ae600u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5DD852u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5DD852u, _value); } while (0);
    // 0x1ae604: 0x0  nop
    ctx->pc = 0x1ae604u;
    // NOP
label_1ae608:
    // 0x1ae608: 0xa4640044  sh          $a0, 0x44($v1)
    ctx->pc = 0x1ae608u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ae60c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1ae60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1ae610: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1ae610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ae614: 0x0  nop
    ctx->pc = 0x1ae614u;
    // NOP
    // 0x1ae618: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AE618u;
    {
        const bool branch_taken_0x1ae618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae618) {
            ctx->pc = 0x1AE61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE618u;
            // 0x1ae61c: 0xa4640042  sh          $a0, 0x42($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae608;
        }
    }
    ctx->pc = 0x1AE620u;
    // 0x1ae620: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ae620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae624: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ae624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae628: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ae628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae630: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE630u;
        // 0x1ae634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE638u;
}
