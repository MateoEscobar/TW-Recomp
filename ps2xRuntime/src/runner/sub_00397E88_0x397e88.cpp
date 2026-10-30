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

// Function: sub_00397E88
// Address: 0x397e88 - 0x397f28
void sub_00397E88_0x397e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397E88_0x397e88");
#endif

    switch (ctx->pc) {
        case 0x397ed4u: goto label_397ed4;
        case 0x397ef8u: goto label_397ef8;
        default: break;
    }

    ctx->pc = 0x397e88u;

    // 0x397e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x397e8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x397e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x397e90: 0x8c47489c  lw          $a3, 0x489C($v0)
    ctx->pc = 0x397e90u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x51489Cu));
    // 0x397e94: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x397e94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x397e98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x397e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x397e9c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x397e9cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x397ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397ea4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x397ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x397ea8: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x397ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x397eac: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x397eacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x397eb0: 0x94e656dc  lhu         $a2, 0x56DC($a3)
    ctx->pc = 0x397eb0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 22236)));
    // 0x397eb4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x397eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x397eb8: 0xac652c1c  sw          $a1, 0x2C1C($v1)
    ctx->pc = 0x397eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x512C1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x512C1Cu, _value); } while (0);
    // 0x397ebc: 0xc41818  mult        $v1, $a2, $a0
    ctx->pc = 0x397ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x397ec0: 0x244511d0  addiu       $a1, $v0, 0x11D0
    ctx->pc = 0x397ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4560));
    // 0x397ec4: 0xae062c20  sw          $a2, 0x2C20($s0)
    ctx->pc = 0x397ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11296), GPR_U32(ctx, 6));
    // 0x397ec8: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x397ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x397ecc: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x397ECCu;
    SET_GPR_U32(ctx, 31, 0x397ED4u);
    ctx->pc = 0x397ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397ECCu;
    // 0x397ed0: 0x248414e8  addiu       $a0, $a0, 0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x397ECCu, 0x397ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397ED4u;
label_397ed4:
    // 0x397ed4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x397ED4u;
    {
        const bool branch_taken_0x397ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397ED4u;
        // 0x397ed8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ed4) {
            ctx->pc = 0x397EE8u;
            goto label_397ee8;
        }
    }
    ctx->pc = 0x397EDCu;
    // 0x397edc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x397edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x397ee0: 0xae022c20  sw          $v0, 0x2C20($s0)
    ctx->pc = 0x397ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11296), GPR_U32(ctx, 2));
    // 0x397ee4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x397ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_397ee8:
    // 0x397ee8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x397ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x397eec: 0x244656f0  addiu       $a2, $v0, 0x56F0
    ctx->pc = 0x397eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
    // 0x397ef0: 0x24645780  addiu       $a0, $v1, 0x5780
    ctx->pc = 0x397ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 22400));
    // 0x397ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397ef8:
    // 0x397ef8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x397ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x397efc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x397efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x397f00: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x397f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x397f04: 0x2ca30023  sltiu       $v1, $a1, 0x23
    ctx->pc = 0x397f04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x397f08: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x397f08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x397f0c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x397f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x397f10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x397F10u;
    {
        const bool branch_taken_0x397f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x397F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F10u;
        // 0x397f14: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f10) {
            ctx->pc = 0x397EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397ef8;
        }
    }
    ctx->pc = 0x397F18u;
    // 0x397f18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x397f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397f20: 0x3e00008  jr          $ra
    ctx->pc = 0x397F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F20u;
        // 0x397f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397F28u;
}
