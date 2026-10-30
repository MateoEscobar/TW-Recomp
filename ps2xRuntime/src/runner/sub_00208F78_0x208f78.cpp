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

// Function: sub_00208F78
// Address: 0x208f78 - 0x209068
void sub_00208F78_0x208f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208F78_0x208f78");
#endif

    switch (ctx->pc) {
        case 0x208f78u: goto label_208f78;
        case 0x208f7cu: goto label_208f7c;
        case 0x208f80u: goto label_208f80;
        case 0x208f84u: goto label_208f84;
        case 0x208f88u: goto label_208f88;
        case 0x208f8cu: goto label_208f8c;
        case 0x208f90u: goto label_208f90;
        case 0x208f94u: goto label_208f94;
        case 0x208f98u: goto label_208f98;
        case 0x208f9cu: goto label_208f9c;
        case 0x208fa0u: goto label_208fa0;
        case 0x208fa4u: goto label_208fa4;
        case 0x208fa8u: goto label_208fa8;
        case 0x208facu: goto label_208fac;
        case 0x208fb0u: goto label_208fb0;
        case 0x208fb4u: goto label_208fb4;
        case 0x208fb8u: goto label_208fb8;
        case 0x208fbcu: goto label_208fbc;
        case 0x208fc0u: goto label_208fc0;
        case 0x208fc4u: goto label_208fc4;
        case 0x208fc8u: goto label_208fc8;
        case 0x208fccu: goto label_208fcc;
        case 0x208fd0u: goto label_208fd0;
        case 0x208fd4u: goto label_208fd4;
        case 0x208fd8u: goto label_208fd8;
        case 0x208fdcu: goto label_208fdc;
        case 0x208fe0u: goto label_208fe0;
        case 0x208fe4u: goto label_208fe4;
        case 0x208fe8u: goto label_208fe8;
        case 0x208fecu: goto label_208fec;
        case 0x208ff0u: goto label_208ff0;
        case 0x208ff4u: goto label_208ff4;
        case 0x208ff8u: goto label_208ff8;
        case 0x208ffcu: goto label_208ffc;
        case 0x209000u: goto label_209000;
        case 0x209004u: goto label_209004;
        case 0x209008u: goto label_209008;
        case 0x20900cu: goto label_20900c;
        case 0x209010u: goto label_209010;
        case 0x209014u: goto label_209014;
        case 0x209018u: goto label_209018;
        case 0x20901cu: goto label_20901c;
        case 0x209020u: goto label_209020;
        case 0x209024u: goto label_209024;
        case 0x209028u: goto label_209028;
        case 0x20902cu: goto label_20902c;
        case 0x209030u: goto label_209030;
        case 0x209034u: goto label_209034;
        case 0x209038u: goto label_209038;
        case 0x20903cu: goto label_20903c;
        case 0x209040u: goto label_209040;
        case 0x209044u: goto label_209044;
        case 0x209048u: goto label_209048;
        case 0x20904cu: goto label_20904c;
        case 0x209050u: goto label_209050;
        case 0x209054u: goto label_209054;
        case 0x209058u: goto label_209058;
        case 0x20905cu: goto label_20905c;
        case 0x209060u: goto label_209060;
        case 0x209064u: goto label_209064;
        default: break;
    }

    ctx->pc = 0x208f78u;

label_208f78:
    // 0x208f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_208f7c:
    // 0x208f7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x208f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_208f80:
    // 0x208f80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_208f84:
    // 0x208f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208f88:
    // 0x208f88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x208f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208f8c:
    // 0x208f8c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x208f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_208f90:
    // 0x208f90: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x208f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_208f94:
    // 0x208f94: 0x40f809  jalr        $v0
label_208f98:
    if (ctx->pc == 0x208F98u) {
        ctx->pc = 0x208F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F94u;
        // 0x208f98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F9Cu;
        goto label_208f9c;
    }
    ctx->pc = 0x208F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208F9Cu);
        ctx->pc = 0x208F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F94u;
        // 0x208f98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208F94u, 0x208F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208F9Cu;
label_208f9c:
    // 0x208f9c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_208fa0:
    if (ctx->pc == 0x208FA0u) {
        ctx->pc = 0x208FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F9Cu;
        // 0x208fa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FA4u;
        goto label_208fa4;
    }
    ctx->pc = 0x208F9Cu;
    {
        const bool branch_taken_0x208f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f9c) {
            ctx->pc = 0x208FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208F9Cu;
            // 0x208fa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209058u;
            goto label_209058;
        }
    }
    ctx->pc = 0x208FA4u;
label_208fa4:
    // 0x208fa4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x208fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208fa8:
    // 0x208fa8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x208fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_208fac:
    // 0x208fac: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x208facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_208fb0:
    // 0x208fb0: 0x40f809  jalr        $v0
label_208fb4:
    if (ctx->pc == 0x208FB4u) {
        ctx->pc = 0x208FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FB0u;
        // 0x208fb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FB8u;
        goto label_208fb8;
    }
    ctx->pc = 0x208FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208FB8u);
        ctx->pc = 0x208FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FB0u;
        // 0x208fb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208FB0u, 0x208FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208FB8u;
label_208fb8:
    // 0x208fb8: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_208fbc:
    if (ctx->pc == 0x208FBCu) {
        ctx->pc = 0x208FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FB8u;
        // 0x208fbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FC0u;
        goto label_208fc0;
    }
    ctx->pc = 0x208FB8u;
    {
        const bool branch_taken_0x208fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208fb8) {
            ctx->pc = 0x208FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208FB8u;
            // 0x208fbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209058u;
            goto label_209058;
        }
    }
    ctx->pc = 0x208FC0u;
label_208fc0:
    // 0x208fc0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x208fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_208fc4:
    // 0x208fc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208fc8:
    // 0x208fc8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x208fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_208fcc:
    // 0x208fcc: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x208fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_208fd0:
    // 0x208fd0: 0xa0f809  jalr        $a1
label_208fd4:
    if (ctx->pc == 0x208FD4u) {
        ctx->pc = 0x208FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FD0u;
        // 0x208fd4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FD8u;
        goto label_208fd8;
    }
    ctx->pc = 0x208FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x208FD8u);
        ctx->pc = 0x208FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FD0u;
        // 0x208fd4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208FD0u, 0x208FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208FD8u;
label_208fd8:
    // 0x208fd8: 0x9203009c  lbu         $v1, 0x9C($s0)
    ctx->pc = 0x208fd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_208fdc:
    // 0x208fdc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x208fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_208fe0:
    // 0x208fe0: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x208fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_208fe4:
    // 0x208fe4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_208fe8:
    // 0x208fe8: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x208fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
label_208fec:
    // 0x208fec: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x208fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_208ff0:
    // 0x208ff0: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x208ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_208ff4:
    // 0x208ff4: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x208ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_208ff8:
    // 0x208ff8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x208ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_208ffc:
    // 0x208ffc: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x208ffcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_209000:
    // 0x209000: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x209000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_209004:
    // 0x209004: 0x60f809  jalr        $v1
label_209008:
    if (ctx->pc == 0x209008u) {
        ctx->pc = 0x209008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209004u;
        // 0x209008: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20900Cu;
        goto label_20900c;
    }
    ctx->pc = 0x209004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20900Cu);
        ctx->pc = 0x209008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209004u;
        // 0x209008: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209004u, 0x20900Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20900Cu;
label_20900c:
    // 0x20900c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20900cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_209010:
    // 0x209010: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209014:
    // 0x209014: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x209014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_209018:
    // 0x209018: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x209018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20901c:
    // 0x20901c: 0x60f809  jalr        $v1
label_209020:
    if (ctx->pc == 0x209020u) {
        ctx->pc = 0x209020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20901Cu;
        // 0x209020: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209024u;
        goto label_209024;
    }
    ctx->pc = 0x20901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209024u);
        ctx->pc = 0x209020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20901Cu;
        // 0x209020: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20901Cu, 0x209024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209024u;
label_209024:
    // 0x209024: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x209024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_209028:
    // 0x209028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20902c:
    // 0x20902c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x20902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_209030:
    // 0x209030: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_209034:
    // 0x209034: 0xc06844e  jal         func_1A1138
label_209038:
    if (ctx->pc == 0x209038u) {
        ctx->pc = 0x209038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209034u;
        // 0x209038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20903Cu;
        goto label_20903c;
    }
    ctx->pc = 0x209034u;
    SET_GPR_U32(ctx, 31, 0x20903Cu);
    ctx->pc = 0x209038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209034u;
    // 0x209038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x209034u, 0x20903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20903Cu;
label_20903c:
    // 0x20903c: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x20903cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_209040:
    // 0x209040: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209044:
    // 0x209044: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x209044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_209048:
    // 0x209048: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x209048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20904c:
    // 0x20904c: 0x60f809  jalr        $v1
label_209050:
    if (ctx->pc == 0x209050u) {
        ctx->pc = 0x209050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20904Cu;
        // 0x209050: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209054u;
        goto label_209054;
    }
    ctx->pc = 0x20904Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209054u);
        ctx->pc = 0x209050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20904Cu;
        // 0x209050: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20904Cu, 0x209054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209054u;
label_209054:
    // 0x209054: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x209054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209058:
    // 0x209058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20905c:
    // 0x20905c: 0x3e00008  jr          $ra
label_209060:
    if (ctx->pc == 0x209060u) {
        ctx->pc = 0x209060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20905Cu;
        // 0x209060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209064u;
        goto label_209064;
    }
    ctx->pc = 0x20905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20905Cu;
        // 0x209060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209064u;
label_209064:
    // 0x209064: 0x0  nop
    ctx->pc = 0x209064u;
    // NOP
    ctx->pc = 0x209068u;
}
