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

// Function: sub_00463E90
// Address: 0x463e90 - 0x463f78
void sub_00463E90_0x463e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463E90_0x463e90");
#endif

    switch (ctx->pc) {
        case 0x463eb0u: goto label_463eb0;
        case 0x463ef8u: goto label_463ef8;
        case 0x463f24u: goto label_463f24;
        case 0x463f5cu: goto label_463f5c;
        default: break;
    }

    ctx->pc = 0x463e90u;

    // 0x463e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x463e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x463e94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x463e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x463e98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x463e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x463e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x463e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463ea0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x463ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x463ea4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x463ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x463ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x463eac: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x463eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_463eb0:
    // 0x463eb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463eb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x463eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x463eb8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x463eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x463ebc: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x463ebcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x463ec0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x463EC0u;
    {
        const bool branch_taken_0x463ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x463EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463EC0u;
        // 0x463ec4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463ec0) {
            ctx->pc = 0x463F38u;
            goto label_463f38;
        }
    }
    ctx->pc = 0x463EC8u;
    // 0x463ec8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x463ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x463ecc: 0x2442e840  addiu       $v0, $v0, -0x17C0
    ctx->pc = 0x463eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961216));
    // 0x463ed0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x463ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x463ed4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x463ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x463ed8: 0x800008  jr          $a0
    ctx->pc = 0x463ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x463EE0u: goto label_463ee0;
            case 0x463F00u: goto label_463f00;
            case 0x463F0Cu: goto label_463f0c;
            case 0x463F2Cu: goto label_463f2c;
            case 0x463F38u: goto label_463f38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463ED8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x463EE0u;
label_463ee0:
    // 0x463ee0: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x463ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x463ee4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x463ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x463ee8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x463EE8u;
    {
        const bool branch_taken_0x463ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x463ee8) {
            ctx->pc = 0x463EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x463EE8u;
            // 0x463eec: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x463F14u;
            goto label_463f14;
        }
    }
    ctx->pc = 0x463EF0u;
    // 0x463ef0: 0xc122364  jal         func_488D90
    ctx->pc = 0x463EF0u;
    SET_GPR_U32(ctx, 31, 0x463EF8u);
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x463EF0u, 0x463EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463EF8u;
label_463ef8:
    // 0x463ef8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x463EF8u;
    {
        const bool branch_taken_0x463ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463EF8u;
        // 0x463efc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463ef8) {
            ctx->pc = 0x463F14u;
            goto label_463f14;
        }
    }
    ctx->pc = 0x463F00u;
label_463f00:
    // 0x463f00: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x463f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x463f04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x463F04u;
    {
        const bool branch_taken_0x463f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463F04u;
        // 0x463f08: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463f04) {
            ctx->pc = 0x463F14u;
            goto label_463f14;
        }
    }
    ctx->pc = 0x463F0Cu;
label_463f0c:
    // 0x463f0c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x463f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x463f10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x463f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_463f14:
    // 0x463f14: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x463F14u;
    {
        const bool branch_taken_0x463f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x463F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463F14u;
        // 0x463f18: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463f14) {
            ctx->pc = 0x463F3Cu;
            goto label_463f3c;
        }
    }
    ctx->pc = 0x463F1Cu;
    // 0x463f1c: 0xc122364  jal         func_488D90
    ctx->pc = 0x463F1Cu;
    SET_GPR_U32(ctx, 31, 0x463F24u);
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x463F1Cu, 0x463F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463F24u;
label_463f24:
    // 0x463f24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x463F24u;
    {
        const bool branch_taken_0x463f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463F24u;
        // 0x463f28: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463f24) {
            ctx->pc = 0x463F3Cu;
            goto label_463f3c;
        }
    }
    ctx->pc = 0x463F2Cu;
label_463f2c:
    // 0x463f2c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x463f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x463f30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x463f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x463f34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x463f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_463f38:
    // 0x463f38: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x463f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_463f3c:
    // 0x463f3c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x463f3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x463f40: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x463f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x463f44: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x463F44u;
    {
        const bool branch_taken_0x463f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x463F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463F44u;
        // 0x463f48: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463f44) {
            ctx->pc = 0x463EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_463eb0;
        }
    }
    ctx->pc = 0x463F4Cu;
    // 0x463f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x463f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x463f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463f54: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x463F54u;
    SET_GPR_U32(ctx, 31, 0x463F5Cu);
    ctx->pc = 0x463F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x463F54u;
    // 0x463f58: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x463F54u, 0x463F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463F5Cu;
label_463f5c:
    // 0x463f5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x463f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463f60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x463f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x463f64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x463f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x463f68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x463f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x463f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x463f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x463f70: 0x3e00008  jr          $ra
    ctx->pc = 0x463F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463F70u;
        // 0x463f74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463F78u;
}
