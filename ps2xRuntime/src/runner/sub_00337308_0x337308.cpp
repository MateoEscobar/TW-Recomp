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

// Function: sub_00337308
// Address: 0x337308 - 0x3373b8
void sub_00337308_0x337308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337308_0x337308");
#endif

    switch (ctx->pc) {
        case 0x337340u: goto label_337340;
        case 0x337354u: goto label_337354;
        case 0x337368u: goto label_337368;
        case 0x33737cu: goto label_33737c;
        default: break;
    }

    ctx->pc = 0x337308u;

    // 0x337308: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x337308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33730c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x33730cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x337310: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x337310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x337314: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x337314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337318: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x337318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x33731c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33731cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337320: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x337320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x337324: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x337324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337328: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x337328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33732c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x33732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x337330: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x337330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x337334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x337338: 0xc0cdca8  jal         func_3372A0
    ctx->pc = 0x337338u;
    SET_GPR_U32(ctx, 31, 0x337340u);
    ctx->pc = 0x33733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337338u;
    // 0x33733c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3372A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3372A0u, 0x337338u, 0x337340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337340u;
label_337340:
    // 0x337340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x337340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337344: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x337344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337348: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x337348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33734c: 0xc0cdca8  jal         func_3372A0
    ctx->pc = 0x33734Cu;
    SET_GPR_U32(ctx, 31, 0x337354u);
    ctx->pc = 0x337350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33734Cu;
    // 0x337350: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3372A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3372A0u, 0x33734Cu, 0x337354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337354u;
label_337354:
    // 0x337354: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x337354u;
    {
        const bool branch_taken_0x337354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x337358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337354u;
        // 0x337358: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337354) {
            ctx->pc = 0x337388u;
            goto label_337388;
        }
    }
    ctx->pc = 0x33735Cu;
    // 0x33735c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33735cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337360: 0xc0cdca8  jal         func_3372A0
    ctx->pc = 0x337360u;
    SET_GPR_U32(ctx, 31, 0x337368u);
    ctx->pc = 0x337364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337360u;
    // 0x337364: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3372A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3372A0u, 0x337360u, 0x337368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337368u;
label_337368:
    // 0x337368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x337368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33736c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337370: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x337370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337374: 0xc0cdca8  jal         func_3372A0
    ctx->pc = 0x337374u;
    SET_GPR_U32(ctx, 31, 0x33737Cu);
    ctx->pc = 0x337378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337374u;
    // 0x337378: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3372A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3372A0u, 0x337374u, 0x33737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33737Cu;
label_33737c:
    // 0x33737c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x33737cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x337380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x337380u;
    {
        const bool branch_taken_0x337380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337380u;
        // 0x337384: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337380) {
            ctx->pc = 0x33738Cu;
            goto label_33738c;
        }
    }
    ctx->pc = 0x337388u;
label_337388:
    // 0x337388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33738c:
    // 0x33738c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x33738cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x337390: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x337390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x337394: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x337394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337398: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x337398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33739c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x33739cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3373a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3373a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3373a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3373A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3373A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373A4u;
        // 0x3373a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3373A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3373ACu;
    // 0x3373ac: 0x0  nop
    ctx->pc = 0x3373acu;
    // NOP
    // 0x3373b0: 0x0  nop
    ctx->pc = 0x3373b0u;
    // NOP
    // 0x3373b4: 0x0  nop
    ctx->pc = 0x3373b4u;
    // NOP
    ctx->pc = 0x3373b8u;
}
