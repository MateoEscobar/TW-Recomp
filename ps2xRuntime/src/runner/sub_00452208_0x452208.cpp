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

// Function: sub_00452208
// Address: 0x452208 - 0x452328
void sub_00452208_0x452208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452208_0x452208");
#endif

    switch (ctx->pc) {
        case 0x452230u: goto label_452230;
        case 0x452244u: goto label_452244;
        case 0x452258u: goto label_452258;
        case 0x45226cu: goto label_45226c;
        case 0x452284u: goto label_452284;
        case 0x45229cu: goto label_45229c;
        case 0x4522a4u: goto label_4522a4;
        case 0x4522c0u: goto label_4522c0;
        case 0x4522d8u: goto label_4522d8;
        case 0x4522e4u: goto label_4522e4;
        case 0x4522f4u: goto label_4522f4;
        default: break;
    }

    ctx->pc = 0x452208u;

    // 0x452208: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x452208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x45220c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x45220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x452210: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x452210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x452214: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x452214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452218: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x452218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x45221c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x45221cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x452220: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x452220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x452224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452228: 0xc1146f6  jal         func_451BD8
    ctx->pc = 0x452228u;
    SET_GPR_U32(ctx, 31, 0x452230u);
    ctx->pc = 0x45222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452228u;
    // 0x45222c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x451BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451BD8u, 0x452228u, 0x452230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452230u;
label_452230:
    // 0x452230: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x452230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452234: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x452234u;
    {
        const bool branch_taken_0x452234 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x452238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452234u;
        // 0x452238: 0xae930004  sw          $s3, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452234) {
            ctx->pc = 0x452300u;
            goto label_452300;
        }
    }
    ctx->pc = 0x45223Cu;
    // 0x45223c: 0xc1295ce  jal         func_4A5738
    ctx->pc = 0x45223Cu;
    SET_GPR_U32(ctx, 31, 0x452244u);
    ctx->pc = 0x4A5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5738u, 0x45223Cu, 0x452244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452244u;
label_452244:
    // 0x452244: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x452244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452248: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x452248u;
    {
        const bool branch_taken_0x452248 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x45224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452248u;
        // 0x45224c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452248) {
            ctx->pc = 0x4522F8u;
            goto label_4522f8;
        }
    }
    ctx->pc = 0x452250u;
    // 0x452250: 0xc129ae6  jal         func_4A6B98
    ctx->pc = 0x452250u;
    SET_GPR_U32(ctx, 31, 0x452258u);
    ctx->pc = 0x452254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452250u;
    // 0x452254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6B98u, 0x452250u, 0x452258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452258u;
label_452258:
    // 0x452258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x452258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45225c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x45225Cu;
    {
        const bool branch_taken_0x45225c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45225c) {
            ctx->pc = 0x4522ECu;
            goto label_4522ec;
        }
    }
    ctx->pc = 0x452264u;
    // 0x452264: 0xc11dad8  jal         func_476B60
    ctx->pc = 0x452264u;
    SET_GPR_U32(ctx, 31, 0x45226Cu);
    ctx->pc = 0x476B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476B60u, 0x452264u, 0x45226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45226Cu;
label_45226c:
    // 0x45226c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45226cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x452270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x452274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452278: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x452278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45227c: 0xc129b4a  jal         func_4A6D28
    ctx->pc = 0x45227Cu;
    SET_GPR_U32(ctx, 31, 0x452284u);
    ctx->pc = 0x452280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45227Cu;
    // 0x452280: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D28u, 0x45227Cu, 0x452284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452284u;
label_452284:
    // 0x452284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x452284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452288: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x452288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x45228c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45228cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x452290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452294: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x452294u;
    SET_GPR_U32(ctx, 31, 0x45229Cu);
    ctx->pc = 0x452298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452294u;
    // 0x452298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x452294u, 0x45229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45229Cu;
label_45229c:
    // 0x45229c: 0xc12995a  jal         func_4A6568
    ctx->pc = 0x45229Cu;
    SET_GPR_U32(ctx, 31, 0x4522A4u);
    ctx->pc = 0x4522A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45229Cu;
    // 0x4522a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6568u, 0x45229Cu, 0x4522A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4522A4u;
label_4522a4:
    // 0x4522a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4522a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4522a8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4522A8u;
    {
        const bool branch_taken_0x4522a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4522ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4522A8u;
        // 0x4522ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4522a8) {
            ctx->pc = 0x4522ECu;
            goto label_4522ec;
        }
    }
    ctx->pc = 0x4522B0u;
    // 0x4522b0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4522b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4522b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4522b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4522b8: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x4522B8u;
    SET_GPR_U32(ctx, 31, 0x4522C0u);
    ctx->pc = 0x4522BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4522B8u;
    // 0x4522bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x4522B8u, 0x4522C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4522C0u;
label_4522c0:
    // 0x4522c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4522c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4522c4: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x4522c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x4522c8: 0x24c61e60  addiu       $a2, $a2, 0x1E60
    ctx->pc = 0x4522c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7776));
    // 0x4522cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4522ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4522d0: 0xc11dadc  jal         func_476B70
    ctx->pc = 0x4522D0u;
    SET_GPR_U32(ctx, 31, 0x4522D8u);
    ctx->pc = 0x4522D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4522D0u;
    // 0x4522d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476B70u, 0x4522D0u, 0x4522D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4522D8u;
label_4522d8:
    // 0x4522d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4522d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4522dc: 0xc11daf2  jal         func_476BC8
    ctx->pc = 0x4522DCu;
    SET_GPR_U32(ctx, 31, 0x4522E4u);
    ctx->pc = 0x4522E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4522DCu;
    // 0x4522e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476BC8u, 0x4522DCu, 0x4522E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4522E4u;
label_4522e4:
    // 0x4522e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4522E4u;
    {
        const bool branch_taken_0x4522e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4522E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4522E4u;
        // 0x4522e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4522e4) {
            ctx->pc = 0x4522F8u;
            goto label_4522f8;
        }
    }
    ctx->pc = 0x4522ECu;
label_4522ec:
    // 0x4522ec: 0xc1295f2  jal         func_4A57C8
    ctx->pc = 0x4522ECu;
    SET_GPR_U32(ctx, 31, 0x4522F4u);
    ctx->pc = 0x4522F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4522ECu;
    // 0x4522f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x4522ECu, 0x4522F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4522F4u;
label_4522f4:
    // 0x4522f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4522f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4522f8:
    // 0x4522f8: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x4522f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x4522fc: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x4522fcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_452300:
    // 0x452300: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x452300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452304: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x452304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452308: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x452308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45230c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x45230cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x452310: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x452310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452314: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x452314u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45231c: 0x3e00008  jr          $ra
    ctx->pc = 0x45231Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45231Cu;
        // 0x452320: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45231Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452324u;
    // 0x452324: 0x0  nop
    ctx->pc = 0x452324u;
    // NOP
    ctx->pc = 0x452328u;
}
