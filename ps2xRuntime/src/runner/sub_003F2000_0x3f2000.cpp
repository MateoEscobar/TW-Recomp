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

// Function: sub_003F2000
// Address: 0x3f2000 - 0x3f2070
void sub_003F2000_0x3f2000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2000_0x3f2000");
#endif

    switch (ctx->pc) {
        case 0x3f2020u: goto label_3f2020;
        case 0x3f2034u: goto label_3f2034;
        case 0x3f205cu: goto label_3f205c;
        default: break;
    }

    ctx->pc = 0x3f2000u;

    // 0x3f2000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2004: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f2004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3f2008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f200c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f200cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f2014: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f2014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2018: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F2018u;
    SET_GPR_U32(ctx, 31, 0x3F2020u);
    ctx->pc = 0x3F201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2018u;
    // 0x3f201c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F2018u, 0x3F2020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2020u;
label_3f2020:
    // 0x3f2020: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2020u;
    {
        const bool branch_taken_0x3f2020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2020) {
            ctx->pc = 0x3F2024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2020u;
            // 0x3f2024: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2044u;
            goto label_3f2044;
        }
    }
    ctx->pc = 0x3F2028u;
    // 0x3f2028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f202c: 0xc0fc5d8  jal         func_3F1760
    ctx->pc = 0x3F202Cu;
    SET_GPR_U32(ctx, 31, 0x3F2034u);
    ctx->pc = 0x3F2030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F202Cu;
    // 0x3f2030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1760u, 0x3F202Cu, 0x3F2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2034u;
label_3f2034:
    // 0x3f2034: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3f2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3f2038: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3f2038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3f203c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F203Cu;
    {
        const bool branch_taken_0x3f203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F203Cu;
        // 0x3f2040: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f203c) {
            ctx->pc = 0x3F205Cu;
            goto label_3f205c;
        }
    }
    ctx->pc = 0x3F2044u;
label_3f2044:
    // 0x3f2044: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3f2044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3f2048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f204c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f204cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2050: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f2050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f2054: 0xc0fc5ba  jal         func_3F16E8
    ctx->pc = 0x3F2054u;
    SET_GPR_U32(ctx, 31, 0x3F205Cu);
    ctx->pc = 0x3F2058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2054u;
    // 0x3f2058: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F16E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F16E8u, 0x3F2054u, 0x3F205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F205Cu;
label_3f205c:
    // 0x3f205c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f205cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f2060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f2060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2068: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2068u;
        // 0x3f206c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2070u;
}
