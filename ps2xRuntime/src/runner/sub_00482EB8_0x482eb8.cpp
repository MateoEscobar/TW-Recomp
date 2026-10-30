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

// Function: sub_00482EB8
// Address: 0x482eb8 - 0x482f18
void sub_00482EB8_0x482eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482EB8_0x482eb8");
#endif

    switch (ctx->pc) {
        case 0x482eb8u: goto label_482eb8;
        case 0x482ebcu: goto label_482ebc;
        case 0x482ec0u: goto label_482ec0;
        case 0x482ec4u: goto label_482ec4;
        case 0x482ec8u: goto label_482ec8;
        case 0x482eccu: goto label_482ecc;
        case 0x482ed0u: goto label_482ed0;
        case 0x482ed4u: goto label_482ed4;
        case 0x482ed8u: goto label_482ed8;
        case 0x482edcu: goto label_482edc;
        case 0x482ee0u: goto label_482ee0;
        case 0x482ee4u: goto label_482ee4;
        case 0x482ee8u: goto label_482ee8;
        case 0x482eecu: goto label_482eec;
        case 0x482ef0u: goto label_482ef0;
        case 0x482ef4u: goto label_482ef4;
        case 0x482ef8u: goto label_482ef8;
        case 0x482efcu: goto label_482efc;
        case 0x482f00u: goto label_482f00;
        case 0x482f04u: goto label_482f04;
        case 0x482f08u: goto label_482f08;
        case 0x482f0cu: goto label_482f0c;
        case 0x482f10u: goto label_482f10;
        case 0x482f14u: goto label_482f14;
        default: break;
    }

    ctx->pc = 0x482eb8u;

label_482eb8:
    // 0x482eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_482ebc:
    // 0x482ebc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x482ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_482ec0:
    // 0x482ec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_482ec4:
    // 0x482ec4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x482ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_482ec8:
    // 0x482ec8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x482ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_482ecc:
    // 0x482ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_482ed0:
    // 0x482ed0: 0xae11ad18  sw          $s1, -0x52E8($s0)
    ctx->pc = 0x482ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946072), GPR_U32(ctx, 17));
label_482ed4:
    // 0x482ed4: 0xc121c06  jal         func_487018
label_482ed8:
    if (ctx->pc == 0x482ED8u) {
        ctx->pc = 0x482ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482ED4u;
        // 0x482ed8: 0x2610ad18  addiu       $s0, $s0, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482EDCu;
        goto label_482edc;
    }
    ctx->pc = 0x482ED4u;
    SET_GPR_U32(ctx, 31, 0x482EDCu);
    ctx->pc = 0x482ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482ED4u;
    // 0x482ed8: 0x2610ad18  addiu       $s0, $s0, -0x52E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487018u, 0x482ED4u, 0x482EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482EDCu;
label_482edc:
    // 0x482edc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x482edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_482ee0:
    // 0x482ee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x482ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482ee4:
    // 0x482ee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x482ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_482ee8:
    // 0x482ee8: 0x40f809  jalr        $v0
label_482eec:
    if (ctx->pc == 0x482EECu) {
        ctx->pc = 0x482EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482EE8u;
        // 0x482eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482EF0u;
        goto label_482ef0;
    }
    ctx->pc = 0x482EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x482EF0u);
        ctx->pc = 0x482EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482EE8u;
        // 0x482eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482EE8u, 0x482EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x482EF0u;
label_482ef0:
    // 0x482ef0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_482ef4:
    if (ctx->pc == 0x482EF4u) {
        ctx->pc = 0x482EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482EF0u;
        // 0x482ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482EF8u;
        goto label_482ef8;
    }
    ctx->pc = 0x482EF0u;
    {
        const bool branch_taken_0x482ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x482EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482EF0u;
        // 0x482ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482ef0) {
            ctx->pc = 0x482F04u;
            goto label_482f04;
        }
    }
    ctx->pc = 0x482EF8u;
label_482ef8:
    // 0x482ef8: 0xc12947a  jal         func_4A51E8
label_482efc:
    if (ctx->pc == 0x482EFCu) {
        ctx->pc = 0x482EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482EF8u;
        // 0x482efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482F00u;
        goto label_482f00;
    }
    ctx->pc = 0x482EF8u;
    SET_GPR_U32(ctx, 31, 0x482F00u);
    ctx->pc = 0x482EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482EF8u;
    // 0x482efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A51E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A51E8u, 0x482EF8u, 0x482F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482F00u;
label_482f00:
    // 0x482f00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x482f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_482f04:
    // 0x482f04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x482f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_482f08:
    // 0x482f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_482f0c:
    // 0x482f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_482f10:
    // 0x482f10: 0x3e00008  jr          $ra
label_482f14:
    if (ctx->pc == 0x482F14u) {
        ctx->pc = 0x482F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482F10u;
        // 0x482f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482F18u;
        goto label_fallthrough_0x482f10;
    }
    ctx->pc = 0x482F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482F10u;
        // 0x482f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x482f10:
    ctx->pc = 0x482F18u;
}
