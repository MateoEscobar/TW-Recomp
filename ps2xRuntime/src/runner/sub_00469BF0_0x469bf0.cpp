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

// Function: sub_00469BF0
// Address: 0x469bf0 - 0x469cc0
void sub_00469BF0_0x469bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469BF0_0x469bf0");
#endif

    switch (ctx->pc) {
        case 0x469c30u: goto label_469c30;
        case 0x469c70u: goto label_469c70;
        case 0x469c9cu: goto label_469c9c;
        default: break;
    }

    ctx->pc = 0x469bf0u;

    // 0x469bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469bf4: 0xaf8588b8  sw          $a1, -0x7748($gp)
    ctx->pc = 0x469bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936760), GPR_U32(ctx, 5));
    // 0x469bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x469bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x469bfc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x469bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x469c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x469c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469c04: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x469c04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x469c08: 0x8c44e6b0  lw          $a0, -0x1950($v0)
    ctx->pc = 0x469c08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x52E6B0u));
    // 0x469c0c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x469c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x469c10: 0x8f8584c4  lw          $a1, -0x7B3C($gp)
    ctx->pc = 0x469c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935748)));
    // 0x469c14: 0x2508a320  addiu       $t0, $t0, -0x5CE0
    ctx->pc = 0x469c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943520));
    // 0x469c18: 0x8f8784c8  lw          $a3, -0x7B38($gp)
    ctx->pc = 0x469c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935752)));
    // 0x469c1c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x469c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x469c20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x469c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x469c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469c28: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x469C28u;
    SET_GPR_U32(ctx, 31, 0x469C30u);
    ctx->pc = 0x469C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469C28u;
    // 0x469c2c: 0x35290010  ori         $t1, $t1, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x469C28u, 0x469C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469C30u;
label_469c30:
    // 0x469c30: 0x8f8488b8  lw          $a0, -0x7748($gp)
    ctx->pc = 0x469c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x469c34: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x469c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x469c38: 0x2470ad18  addiu       $s0, $v1, -0x52E8
    ctx->pc = 0x469c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x469c3c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x469c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x469c40: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x469C40u;
    {
        const bool branch_taken_0x469c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469C40u;
        // 0x469c44: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469c40) {
            ctx->pc = 0x469CA8u;
            goto label_469ca8;
        }
    }
    ctx->pc = 0x469C48u;
    // 0x469c48: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x469c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x469c4c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x469c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x469c50: 0x8c44e6c8  lw          $a0, -0x1938($v0)
    ctx->pc = 0x469c50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x52E6C8u));
    // 0x469c54: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x469c54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x469c58: 0x8f8584cc  lw          $a1, -0x7B34($gp)
    ctx->pc = 0x469c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x469c5c: 0x2508a348  addiu       $t0, $t0, -0x5CB8
    ctx->pc = 0x469c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943560));
    // 0x469c60: 0x8f8784d0  lw          $a3, -0x7B30($gp)
    ctx->pc = 0x469c60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x469c64: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x469c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x469c68: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x469C68u;
    SET_GPR_U32(ctx, 31, 0x469C70u);
    ctx->pc = 0x469C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469C68u;
    // 0x469c6c: 0x35290014  ori         $t1, $t1, 0x14 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)20);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x469C68u, 0x469C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469C70u;
label_469c70:
    // 0x469c70: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x469c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x469c74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x469c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x469c78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x469C78u;
    {
        const bool branch_taken_0x469c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469C78u;
        // 0x469c7c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469c78) {
            ctx->pc = 0x469C94u;
            goto label_469c94;
        }
    }
    ctx->pc = 0x469C80u;
    // 0x469c80: 0x8f8388bc  lw          $v1, -0x7744($gp)
    ctx->pc = 0x469c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x469c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x469c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x469c88: 0xaf8388bc  sw          $v1, -0x7744($gp)
    ctx->pc = 0x469c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936764), GPR_U32(ctx, 3));
    // 0x469c8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x469C8Cu;
    {
        const bool branch_taken_0x469c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469C8Cu;
        // 0x469c90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469c8c) {
            ctx->pc = 0x469CACu;
            goto label_469cac;
        }
    }
    ctx->pc = 0x469C94u;
label_469c94:
    // 0x469c94: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x469C94u;
    SET_GPR_U32(ctx, 31, 0x469C9Cu);
    ctx->pc = 0x469C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469C94u;
    // 0x469c98: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x469C94u, 0x469C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469C9Cu;
label_469c9c:
    // 0x469c9c: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x469c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x469ca0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x469ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x469ca4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x469ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_469ca8:
    // 0x469ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x469ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469cac:
    // 0x469cac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x469cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x469cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x469CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469CB8u;
        // 0x469cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469CC0u;
}
