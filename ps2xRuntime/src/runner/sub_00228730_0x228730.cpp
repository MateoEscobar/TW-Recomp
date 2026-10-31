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

// Function: sub_00228730
// Address: 0x228730 - 0x2287e0
void sub_00228730_0x228730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228730_0x228730");
#endif

    switch (ctx->pc) {
        case 0x228760u: goto label_228760;
        case 0x22876cu: goto label_22876c;
        case 0x228790u: goto label_228790;
        default: break;
    }

    ctx->pc = 0x228730u;

    // 0x228730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x228730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x228734: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x228734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x228738: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x228738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22873c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22873cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x228740: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x228740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x228744: 0x14a20020  bne         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x228744u;
    {
        const bool branch_taken_0x228744 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x228748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228744u;
        // 0x228748: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228744) {
            ctx->pc = 0x2287C8u;
            goto label_2287c8;
        }
    }
    ctx->pc = 0x22874Cu;
    // 0x22874c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22874Cu;
    {
        const bool branch_taken_0x22874c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x228750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22874Cu;
        // 0x228750: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22874c) {
            ctx->pc = 0x2287C8u;
            goto label_2287c8;
        }
    }
    ctx->pc = 0x228754u;
    // 0x228754: 0x2411003b  addiu       $s1, $zero, 0x3B
    ctx->pc = 0x228754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x228758: 0x24500c80  addiu       $s0, $v0, 0xC80
    ctx->pc = 0x228758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x22875c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x22875cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_228760:
    // 0x228760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228764: 0xc0872de  jal         func_21CB78
    ctx->pc = 0x228764u;
    SET_GPR_U32(ctx, 31, 0x22876Cu);
    ctx->pc = 0x228768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228764u;
    // 0x228768: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CB78u, 0x228764u, 0x22876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22876Cu;
label_22876c:
    // 0x22876c: 0x0  nop
    ctx->pc = 0x22876cu;
    // NOP
    // 0x228770: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x228770u;
    {
        const bool branch_taken_0x228770 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x228774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228770u;
        // 0x228774: 0x261006d0  addiu       $s0, $s0, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228770) {
            ctx->pc = 0x228760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228760;
        }
    }
    ctx->pc = 0x228778u;
    // 0x228778: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x228778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22877c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x22877cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x228780: 0x2442a540  addiu       $v0, $v0, -0x5AC0
    ctx->pc = 0x228780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x228784: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x228784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x228788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x228788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22878c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_228790:
    // 0x228790: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x228790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x228794: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x228794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x228798: 0xac4300c4  sw          $v1, 0xC4($v0)
    ctx->pc = 0x228798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 3));
    // 0x22879c: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x22879cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
    // 0x2287a0: 0xac4300cc  sw          $v1, 0xCC($v0)
    ctx->pc = 0x2287a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 3));
    // 0x2287a4: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x2287a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x2287a8: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2287A8u;
    {
        const bool branch_taken_0x2287a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2287ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287A8u;
        // 0x2287ac: 0x24420180  addiu       $v0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287a8) {
            ctx->pc = 0x228790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228790;
        }
    }
    ctx->pc = 0x2287B0u;
    // 0x2287b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2287b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2287b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2287b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x2287b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2287b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2287bc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2287bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2287c0: 0xac62ff48  sw          $v0, -0xB8($v1)
    ctx->pc = 0x2287c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x65FF48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65FF48u, _value); } while (0);
    // 0x2287c4: 0xac82ff40  sw          $v0, -0xC0($a0)
    ctx->pc = 0x2287c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x65FF40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65FF40u, _value); } while (0);
label_2287c8:
    // 0x2287c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2287c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2287cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2287ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2287d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2287d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2287d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2287d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2287d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2287D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2287DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287D8u;
        // 0x2287dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2287E0u;
}
