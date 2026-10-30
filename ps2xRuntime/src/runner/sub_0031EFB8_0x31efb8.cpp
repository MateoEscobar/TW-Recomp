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

// Function: sub_0031EFB8
// Address: 0x31efb8 - 0x31f268
void sub_0031EFB8_0x31efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EFB8_0x31efb8");
#endif

    switch (ctx->pc) {
        case 0x31f00cu: goto label_31f00c;
        case 0x31f024u: goto label_31f024;
        case 0x31f030u: goto label_31f030;
        case 0x31f058u: goto label_31f058;
        case 0x31f09cu: goto label_31f09c;
        case 0x31f0b4u: goto label_31f0b4;
        case 0x31f0c4u: goto label_31f0c4;
        case 0x31f0d8u: goto label_31f0d8;
        case 0x31f0e0u: goto label_31f0e0;
        case 0x31f10cu: goto label_31f10c;
        case 0x31f11cu: goto label_31f11c;
        case 0x31f144u: goto label_31f144;
        case 0x31f17cu: goto label_31f17c;
        case 0x31f190u: goto label_31f190;
        case 0x31f198u: goto label_31f198;
        case 0x31f1a0u: goto label_31f1a0;
        case 0x31f1b8u: goto label_31f1b8;
        case 0x31f1d8u: goto label_31f1d8;
        case 0x31f1f8u: goto label_31f1f8;
        default: break;
    }

    ctx->pc = 0x31efb8u;

    // 0x31efb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31efb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31efbc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31efc0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x31efc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31efc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efc8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x31efcc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x31efd0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x31efd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efd4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x31efd8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31efdc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x31efe0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31efe4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x31efe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x31efe8: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x31efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x31efec: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x31efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x31eff0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x31eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31eff4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31eff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31eff8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x31EFF8u;
    {
        const bool branch_taken_0x31eff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFF8u;
        // 0x31effc: 0x8e03b734  lw          $v1, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eff8) {
            ctx->pc = 0x31F07Cu;
            goto label_31f07c;
        }
    }
    ctx->pc = 0x31F000u;
    // 0x31f000: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31f000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31f004: 0xc05b1cc  jal         func_16C730
    ctx->pc = 0x31F004u;
    SET_GPR_U32(ctx, 31, 0x31F00Cu);
    ctx->pc = 0x31F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F004u;
    // 0x31f008: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C730u, 0x31F004u, 0x31F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F00Cu;
label_31f00c:
    // 0x31f00c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31F00Cu;
    {
        const bool branch_taken_0x31f00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F00Cu;
        // 0x31f010: 0x24440048  addiu       $a0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f00c) {
            ctx->pc = 0x31F068u;
            goto label_31f068;
        }
    }
    ctx->pc = 0x31F014u;
    // 0x31f014: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x31f014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31f018: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x31f018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x31f01c: 0xc136d6c  jal         func_4DB5B0
    ctx->pc = 0x31F01Cu;
    SET_GPR_U32(ctx, 31, 0x31F024u);
    ctx->pc = 0x31F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F01Cu;
    // 0x31f020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x31F01Cu, 0x31F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F024u;
label_31f024:
    // 0x31f024: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x31f024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x31f028: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31F028u;
    SET_GPR_U32(ctx, 31, 0x31F030u);
    ctx->pc = 0x31F02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F028u;
    // 0x31f02c: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31F028u, 0x31F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F030u;
label_31f030:
    // 0x31f030: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31F030u;
    {
        const bool branch_taken_0x31f030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F030u;
        // 0x31f034: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f030) {
            ctx->pc = 0x31F068u;
            goto label_31f068;
        }
    }
    ctx->pc = 0x31F038u;
    // 0x31f038: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x31f038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f03c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31f03cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f040: 0x0  nop
    ctx->pc = 0x31f040u;
    // NOP
    // 0x31f044: 0x4503007e  bc1tl       . + 4 + (0x7E << 2)
    ctx->pc = 0x31F044u;
    {
        const bool branch_taken_0x31f044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f044) {
            ctx->pc = 0x31F048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F044u;
            // 0x31f048: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F240u;
            goto label_31f240;
        }
    }
    ctx->pc = 0x31F04Cu;
    // 0x31f04c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31f050: 0xc0594a8  jal         func_1652A0
    ctx->pc = 0x31F050u;
    SET_GPR_U32(ctx, 31, 0x31F058u);
    ctx->pc = 0x31F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F050u;
    // 0x31f054: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1652A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1652A0u, 0x31F050u, 0x31F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F058u;
label_31f058:
    // 0x31f058: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F058u;
    {
        const bool branch_taken_0x31f058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F058u;
        // 0x31f05c: 0x8e03b734  lw          $v1, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f058) {
            ctx->pc = 0x31F06Cu;
            goto label_31f06c;
        }
    }
    ctx->pc = 0x31F060u;
    // 0x31f060: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x31F060u;
    {
        const bool branch_taken_0x31f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F060u;
        // 0x31f064: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f060) {
            ctx->pc = 0x31F240u;
            goto label_31f240;
        }
    }
    ctx->pc = 0x31F068u;
label_31f068:
    // 0x31f068: 0x8e03b734  lw          $v1, -0x48CC($s0)
    ctx->pc = 0x31f068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_31f06c:
    // 0x31f06c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x31f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x31f070: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x31f070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x31f074: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x31f074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x31f078: 0x8e03b734  lw          $v1, -0x48CC($s0)
    ctx->pc = 0x31f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_31f07c:
    // 0x31f07c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x31f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x31f080: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x31f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x31f084: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31f084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31f088: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x31F088u;
    {
        const bool branch_taken_0x31f088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F088u;
        // 0x31f08c: 0x246200fa  addiu       $v0, $v1, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f088) {
            ctx->pc = 0x31F23Cu;
            goto label_31f23c;
        }
    }
    ctx->pc = 0x31F090u;
    // 0x31f090: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31f090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31f094: 0xc05959e  jal         func_165678
    ctx->pc = 0x31F094u;
    SET_GPR_U32(ctx, 31, 0x31F09Cu);
    ctx->pc = 0x31F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F094u;
    // 0x31f098: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31F094u, 0x31F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F09Cu;
label_31f09c:
    // 0x31f09c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f0a0: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
    ctx->pc = 0x31F0A0u;
    {
        const bool branch_taken_0x31f0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0A0u;
        // 0x31f0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0a0) {
            ctx->pc = 0x31F240u;
            goto label_31f240;
        }
    }
    ctx->pc = 0x31F0A8u;
    // 0x31f0a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31f0ac: 0xc05b1cc  jal         func_16C730
    ctx->pc = 0x31F0ACu;
    SET_GPR_U32(ctx, 31, 0x31F0B4u);
    ctx->pc = 0x31F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F0ACu;
    // 0x31f0b0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C730u, 0x31F0ACu, 0x31F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F0B4u;
label_31f0b4:
    // 0x31f0b4: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x31F0B4u;
    {
        const bool branch_taken_0x31f0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f0b4) {
            ctx->pc = 0x31F0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F0B4u;
            // 0x31f0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F240u;
            goto label_31f240;
        }
    }
    ctx->pc = 0x31F0BCu;
    // 0x31f0bc: 0xc05959e  jal         func_165678
    ctx->pc = 0x31F0BCu;
    SET_GPR_U32(ctx, 31, 0x31F0C4u);
    ctx->pc = 0x31F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F0BCu;
    // 0x31f0c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31F0BCu, 0x31F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F0C4u;
label_31f0c4:
    // 0x31f0c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f0c8: 0x1220005d  beqz        $s1, . + 4 + (0x5D << 2)
    ctx->pc = 0x31F0C8u;
    {
        const bool branch_taken_0x31f0c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0C8u;
        // 0x31f0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0c8) {
            ctx->pc = 0x31F240u;
            goto label_31f240;
        }
    }
    ctx->pc = 0x31F0D0u;
    // 0x31f0d0: 0xc087502  jal         func_21D408
    ctx->pc = 0x31F0D0u;
    SET_GPR_U32(ctx, 31, 0x31F0D8u);
    ctx->pc = 0x31F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F0D0u;
    // 0x31f0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31F0D0u, 0x31F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F0D8u;
label_31f0d8:
    // 0x31f0d8: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x31F0D8u;
    SET_GPR_U32(ctx, 31, 0x31F0E0u);
    ctx->pc = 0x31F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F0D8u;
    // 0x31f0dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x31F0D8u, 0x31F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F0E0u;
label_31f0e0:
    // 0x31f0e0: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x31f0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x31f0e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x31f0e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x31f0e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31f0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f0ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31f0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f0f0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31f0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x31f0f4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x31f0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x31f0f8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x31f0f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x31f0fc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x31f0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x31f100: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x31f100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x31f104: 0xc0888fa  jal         func_2223E8
    ctx->pc = 0x31F104u;
    SET_GPR_U32(ctx, 31, 0x31F10Cu);
    ctx->pc = 0x31F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F104u;
    // 0x31f108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x31F104u, 0x31F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F10Cu;
label_31f10c:
    // 0x31f10c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x31F10Cu;
    {
        const bool branch_taken_0x31f10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f10c) {
            ctx->pc = 0x31F110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F10Cu;
            // 0x31f110: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F14Cu;
            goto label_31f14c;
        }
    }
    ctx->pc = 0x31F114u;
    // 0x31f114: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x31F114u;
    {
        const bool branch_taken_0x31f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F114u;
        // 0x31f118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f114) {
            ctx->pc = 0x31F240u;
            goto label_31f240;
        }
    }
    ctx->pc = 0x31F11Cu;
label_31f11c:
    // 0x31f11c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x31f11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x31f120: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31f120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x31f124: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31f124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f128: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31f12c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x31f12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31f130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31f130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f134: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x31f134u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x31f138: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31f138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f13c: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x31F13Cu;
    SET_GPR_U32(ctx, 31, 0x31F144u);
    ctx->pc = 0x31F140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F13Cu;
    // 0x31f140: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x31F13Cu, 0x31F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F144u;
label_31f144:
    // 0x31f144: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x31F144u;
    {
        const bool branch_taken_0x31f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F144u;
        // 0x31f148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f144) {
            ctx->pc = 0x31F240u;
            goto label_31f240;
        }
    }
    ctx->pc = 0x31F14Cu;
label_31f14c:
    // 0x31f14c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x31f150: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x31f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x31f154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31f154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f158: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31f158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x31f15c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31f15cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f160: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x31f160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31f164: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x31f164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x31f168: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x31f168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x31f16c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31f16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31f170: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31f170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31f174: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x31F174u;
    SET_GPR_U32(ctx, 31, 0x31F17Cu);
    ctx->pc = 0x31F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F174u;
    // 0x31f178: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x31F174u, 0x31F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F17Cu;
label_31f17c:
    // 0x31f17c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x31f17cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31f180: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31f184: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x31f184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31f188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f18c: 0x0  nop
    ctx->pc = 0x31f18cu;
    // NOP
label_31f190:
    // 0x31f190: 0xc137866  jal         func_4DE198
    ctx->pc = 0x31F190u;
    SET_GPR_U32(ctx, 31, 0x31F198u);
    ctx->pc = 0x31F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F190u;
    // 0x31f194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x31F190u, 0x31F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F198u;
label_31f198:
    // 0x31f198: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31F198u;
    SET_GPR_U32(ctx, 31, 0x31F1A0u);
    ctx->pc = 0x31F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F198u;
    // 0x31f19c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31F198u, 0x31F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1A0u;
label_31f1a0:
    // 0x31f1a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f1a4: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x31F1A4u;
    {
        const bool branch_taken_0x31f1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1A4u;
        // 0x31f1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1a4) {
            ctx->pc = 0x31F22Cu;
            goto label_31f22c;
        }
    }
    ctx->pc = 0x31F1ACu;
    // 0x31f1ac: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x31f1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x31f1b0: 0xc089998  jal         func_226660
    ctx->pc = 0x31F1B0u;
    SET_GPR_U32(ctx, 31, 0x31F1B8u);
    ctx->pc = 0x31F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1B0u;
    // 0x31f1b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x31F1B0u, 0x31F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1B8u;
label_31f1b8:
    // 0x31f1b8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x31F1B8u;
    {
        const bool branch_taken_0x31f1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f1b8) {
            ctx->pc = 0x31F1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F1B8u;
            // 0x31f1bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F230u;
            goto label_31f230;
        }
    }
    ctx->pc = 0x31F1C0u;
    // 0x31f1c0: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x31f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x31f1c4: 0x5454001a  bnel        $v0, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x31F1C4u;
    {
        const bool branch_taken_0x31f1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x31f1c4) {
            ctx->pc = 0x31F1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F1C4u;
            // 0x31f1c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F230u;
            goto label_31f230;
        }
    }
    ctx->pc = 0x31F1CCu;
    // 0x31f1cc: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x31f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x31f1d0: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x31F1D0u;
    SET_GPR_U32(ctx, 31, 0x31F1D8u);
    ctx->pc = 0x31F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1D0u;
    // 0x31f1d4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31F1D0u, 0x31F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1D8u;
label_31f1d8:
    // 0x31f1d8: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x31f1d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x31f1dc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31F1DCu;
    {
        const bool branch_taken_0x31f1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1DCu;
        // 0x31f1e0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1dc) {
            ctx->pc = 0x31F22Cu;
            goto label_31f22c;
        }
    }
    ctx->pc = 0x31F1E4u;
    // 0x31f1e4: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x31f1e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x31f1e8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x31f1ec: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x31f1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x31f1f0: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x31F1F0u;
    SET_GPR_U32(ctx, 31, 0x31F1F8u);
    ctx->pc = 0x31F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1F0u;
    // 0x31f1f4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x31F1F0u, 0x31F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1F8u;
label_31f1f8:
    // 0x31f1f8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x31f1f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f1fc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x31f1fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f200: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x31f200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x31f204: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x31f204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x31f208: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x31f208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x31f20c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x31f20cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x31f210: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x31f210u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x31f214: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31f214u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f218: 0x0  nop
    ctx->pc = 0x31f218u;
    // NOP
    // 0x31f21c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31f21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f220: 0x0  nop
    ctx->pc = 0x31f220u;
    // NOP
    // 0x31f224: 0x4501ffbd  bc1t        . + 4 + (-0x43 << 2)
    ctx->pc = 0x31F224u;
    {
        const bool branch_taken_0x31f224 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F224u;
        // 0x31f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f224) {
            ctx->pc = 0x31F11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f11c;
        }
    }
    ctx->pc = 0x31F22Cu;
label_31f22c:
    // 0x31f22c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31f22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31f230:
    // 0x31f230: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x31f230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31f234: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x31F234u;
    {
        const bool branch_taken_0x31f234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F234u;
        // 0x31f238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f234) {
            ctx->pc = 0x31F190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f190;
        }
    }
    ctx->pc = 0x31F23Cu;
label_31f23c:
    // 0x31f23c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f240:
    // 0x31f240: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31f240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31f244: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31f244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31f248: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31f248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f24c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31f24cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31f250: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31f250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31f254: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31f254u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31f258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31f258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f25c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x31f25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31f260: 0x3e00008  jr          $ra
    ctx->pc = 0x31F260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F260u;
        // 0x31f264: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F268u;
}
