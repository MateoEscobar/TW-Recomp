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

// Function: sub_003614F8
// Address: 0x3614f8 - 0x3615d8
void sub_003614F8_0x3614f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003614F8_0x3614f8");
#endif

    switch (ctx->pc) {
        case 0x361528u: goto label_361528;
        case 0x361530u: goto label_361530;
        case 0x361544u: goto label_361544;
        case 0x36154cu: goto label_36154c;
        case 0x361560u: goto label_361560;
        case 0x361568u: goto label_361568;
        case 0x36157cu: goto label_36157c;
        case 0x361584u: goto label_361584;
        case 0x361598u: goto label_361598;
        case 0x3615b0u: goto label_3615b0;
        default: break;
    }

    ctx->pc = 0x3614f8u;

    // 0x3614f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3614f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3614fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3614fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361500: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x361500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x361504: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x361504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x361508: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x361508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36150c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36150cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361510: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x361510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x361514: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x361514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x361518: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x361518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36151c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361520: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361520u;
    SET_GPR_U32(ctx, 31, 0x361528u);
    ctx->pc = 0x361524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361520u;
    // 0x361524: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361520u, 0x361528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361528u;
label_361528:
    // 0x361528: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361528u;
    SET_GPR_U32(ctx, 31, 0x361530u);
    ctx->pc = 0x36152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361528u;
    // 0x36152c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361528u, 0x361530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361530u;
label_361530:
    // 0x361530: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361534: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361538: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36153c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36153Cu;
    SET_GPR_U32(ctx, 31, 0x361544u);
    ctx->pc = 0x361540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36153Cu;
    // 0x361540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36153Cu, 0x361544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361544u;
label_361544:
    // 0x361544: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361544u;
    SET_GPR_U32(ctx, 31, 0x36154Cu);
    ctx->pc = 0x361548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361544u;
    // 0x361548: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361544u, 0x36154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36154Cu;
label_36154c:
    // 0x36154c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36154cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361550: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x361550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361554: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361558: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361558u;
    SET_GPR_U32(ctx, 31, 0x361560u);
    ctx->pc = 0x36155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361558u;
    // 0x36155c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361558u, 0x361560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361560u;
label_361560:
    // 0x361560: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361560u;
    SET_GPR_U32(ctx, 31, 0x361568u);
    ctx->pc = 0x361564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361560u;
    // 0x361564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361560u, 0x361568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361568u;
label_361568:
    // 0x361568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36156c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36156cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361570: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x361570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x361574: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361574u;
    SET_GPR_U32(ctx, 31, 0x36157Cu);
    ctx->pc = 0x361578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361574u;
    // 0x361578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361574u, 0x36157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36157Cu;
label_36157c:
    // 0x36157c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36157Cu;
    SET_GPR_U32(ctx, 31, 0x361584u);
    ctx->pc = 0x361580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36157Cu;
    // 0x361580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36157Cu, 0x361584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361584u;
label_361584:
    // 0x361584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x361584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x361588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36158c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36158cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x361590: 0xc1024c6  jal         func_409318
    ctx->pc = 0x361590u;
    SET_GPR_U32(ctx, 31, 0x361598u);
    ctx->pc = 0x361594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361590u;
    // 0x361594: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x361590u, 0x361598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361598u;
label_361598:
    // 0x361598: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x361598u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36159c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36159cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3615a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3615a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3615a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3615a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3615a8: 0xc0b94c0  jal         func_2E5300
    ctx->pc = 0x3615A8u;
    SET_GPR_U32(ctx, 31, 0x3615B0u);
    ctx->pc = 0x3615ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3615A8u;
    // 0x3615ac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5300u, 0x3615A8u, 0x3615B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615B0u;
label_3615b0:
    // 0x3615b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3615b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3615b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3615b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3615b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3615b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3615bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3615bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3615c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3615c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3615c4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3615c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3615c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3615c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3615cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3615CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3615D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3615CCu;
        // 0x3615d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3615CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3615D4u;
    // 0x3615d4: 0x0  nop
    ctx->pc = 0x3615d4u;
    // NOP
    ctx->pc = 0x3615d8u;
}
