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

// Function: sub_003087C0
// Address: 0x3087c0 - 0x308850
void sub_003087C0_0x3087c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003087C0_0x3087c0");
#endif

    switch (ctx->pc) {
        case 0x3087c0u: goto label_3087c0;
        case 0x3087c4u: goto label_3087c4;
        case 0x3087c8u: goto label_3087c8;
        case 0x3087ccu: goto label_3087cc;
        case 0x3087d0u: goto label_3087d0;
        case 0x3087d4u: goto label_3087d4;
        case 0x3087d8u: goto label_3087d8;
        case 0x3087dcu: goto label_3087dc;
        case 0x3087e0u: goto label_3087e0;
        case 0x3087e4u: goto label_3087e4;
        case 0x3087e8u: goto label_3087e8;
        case 0x3087ecu: goto label_3087ec;
        case 0x3087f0u: goto label_3087f0;
        case 0x3087f4u: goto label_3087f4;
        case 0x3087f8u: goto label_3087f8;
        case 0x3087fcu: goto label_3087fc;
        case 0x308800u: goto label_308800;
        case 0x308804u: goto label_308804;
        case 0x308808u: goto label_308808;
        case 0x30880cu: goto label_30880c;
        case 0x308810u: goto label_308810;
        case 0x308814u: goto label_308814;
        case 0x308818u: goto label_308818;
        case 0x30881cu: goto label_30881c;
        case 0x308820u: goto label_308820;
        case 0x308824u: goto label_308824;
        case 0x308828u: goto label_308828;
        case 0x30882cu: goto label_30882c;
        case 0x308830u: goto label_308830;
        case 0x308834u: goto label_308834;
        case 0x308838u: goto label_308838;
        case 0x30883cu: goto label_30883c;
        case 0x308840u: goto label_308840;
        case 0x308844u: goto label_308844;
        case 0x308848u: goto label_308848;
        case 0x30884cu: goto label_30884c;
        default: break;
    }

    ctx->pc = 0x3087c0u;

label_3087c0:
    // 0x3087c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3087c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3087c4:
    // 0x3087c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3087c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3087c8:
    // 0x3087c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3087c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3087cc:
    // 0x3087cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3087ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3087d0:
    // 0x3087d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3087d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3087d4:
    // 0x3087d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3087d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3087d8:
    // 0x3087d8: 0xc08a61a  jal         func_229868
label_3087dc:
    if (ctx->pc == 0x3087DCu) {
        ctx->pc = 0x3087DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087D8u;
        // 0x3087dc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3087E0u;
        goto label_3087e0;
    }
    ctx->pc = 0x3087D8u;
    SET_GPR_U32(ctx, 31, 0x3087E0u);
    ctx->pc = 0x3087DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3087D8u;
    // 0x3087dc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3087D8u, 0x3087E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087E0u;
label_3087e0:
    // 0x3087e0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3087e4:
    if (ctx->pc == 0x3087E4u) {
        ctx->pc = 0x3087E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087E0u;
        // 0x3087e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3087E8u;
        goto label_3087e8;
    }
    ctx->pc = 0x3087E0u;
    {
        const bool branch_taken_0x3087e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3087E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087E0u;
        // 0x3087e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087e0) {
            ctx->pc = 0x30885Cu;
            return;
        }
    }
    ctx->pc = 0x3087E8u;
label_3087e8:
    // 0x3087e8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3087e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3087ec:
    // 0x3087ec: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x3087ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3087f0:
    // 0x3087f0: 0x2cc30016  sltiu       $v1, $a2, 0x16
    ctx->pc = 0x3087f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_3087f4:
    // 0x3087f4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_3087f8:
    if (ctx->pc == 0x3087F8u) {
        ctx->pc = 0x3087F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087F4u;
        // 0x3087f8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3087FCu;
        goto label_3087fc;
    }
    ctx->pc = 0x3087F4u;
    {
        const bool branch_taken_0x3087f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3087F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087F4u;
        // 0x3087f8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087f4) {
            ctx->pc = 0x308858u;
            return;
        }
    }
    ctx->pc = 0x3087FCu;
label_3087fc:
    // 0x3087fc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3087fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_308800:
    // 0x308800: 0x2442afb0  addiu       $v0, $v0, -0x5050
    ctx->pc = 0x308800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946736));
label_308804:
    // 0x308804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_308808:
    // 0x308808: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x308808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30880c:
    // 0x30880c: 0x800008  jr          $a0
label_308810:
    if (ctx->pc == 0x308810u) {
        ctx->pc = 0x308814u;
        goto label_308814;
    }
    ctx->pc = 0x30880Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308814u: goto label_308814;
            case 0x308820u: goto label_308820;
            case 0x308840u: goto label_308840;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30880Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x308814u;
label_308814:
    // 0x308814: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x308814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_308818:
    // 0x308818: 0x10000003  b           . + 4 + (0x3 << 2)
label_30881c:
    if (ctx->pc == 0x30881Cu) {
        ctx->pc = 0x30881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308818u;
        // 0x30881c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308820u;
        goto label_308820;
    }
    ctx->pc = 0x308818u;
    {
        const bool branch_taken_0x308818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308818u;
        // 0x30881c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308818) {
            ctx->pc = 0x308828u;
            goto label_308828;
        }
    }
    ctx->pc = 0x308820u;
label_308820:
    // 0x308820: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x308820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_308824:
    // 0x308824: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x308824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_308828:
    // 0x308828: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x308828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30882c:
    // 0x30882c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_308830:
    // 0x308830: 0x60f809  jalr        $v1
label_308834:
    if (ctx->pc == 0x308834u) {
        ctx->pc = 0x308834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308830u;
        // 0x308834: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308838u;
        goto label_308838;
    }
    ctx->pc = 0x308830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x308838u);
        ctx->pc = 0x308834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308830u;
        // 0x308834: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308830u, 0x308838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308838u;
label_308838:
    // 0x308838: 0x10000008  b           . + 4 + (0x8 << 2)
label_30883c:
    if (ctx->pc == 0x30883Cu) {
        ctx->pc = 0x30883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308838u;
        // 0x30883c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308840u;
        goto label_308840;
    }
    ctx->pc = 0x308838u;
    {
        const bool branch_taken_0x308838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308838u;
        // 0x30883c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308838) {
            ctx->pc = 0x30885Cu;
            return;
        }
    }
    ctx->pc = 0x308840u;
label_308840:
    // 0x308840: 0xc0c21a6  jal         func_308698
label_308844:
    if (ctx->pc == 0x308844u) {
        ctx->pc = 0x308844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308840u;
        // 0x308844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308848u;
        goto label_308848;
    }
    ctx->pc = 0x308840u;
    SET_GPR_U32(ctx, 31, 0x308848u);
    ctx->pc = 0x308844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308840u;
    // 0x308844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308698u, 0x308840u, 0x308848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308848u;
label_308848:
    // 0x308848: 0x10000004  b           . + 4 + (0x4 << 2)
label_30884c:
    if (ctx->pc == 0x30884Cu) {
        ctx->pc = 0x30884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308848u;
        // 0x30884c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308850u;
        goto label_fallthrough_0x308848;
    }
    ctx->pc = 0x308848u;
    {
        const bool branch_taken_0x308848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308848u;
        // 0x30884c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308848) {
            ctx->pc = 0x30885Cu;
            return;
        }
    }
label_fallthrough_0x308848:
    ctx->pc = 0x308850u;
}
