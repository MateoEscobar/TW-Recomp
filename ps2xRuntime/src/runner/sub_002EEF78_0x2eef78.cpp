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

// Function: sub_002EEF78
// Address: 0x2eef78 - 0x2ef048
void sub_002EEF78_0x2eef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEF78_0x2eef78");
#endif

    switch (ctx->pc) {
        case 0x2eef78u: goto label_2eef78;
        case 0x2eef7cu: goto label_2eef7c;
        case 0x2eef80u: goto label_2eef80;
        case 0x2eef84u: goto label_2eef84;
        case 0x2eef88u: goto label_2eef88;
        case 0x2eef8cu: goto label_2eef8c;
        case 0x2eef90u: goto label_2eef90;
        case 0x2eef94u: goto label_2eef94;
        case 0x2eef98u: goto label_2eef98;
        case 0x2eef9cu: goto label_2eef9c;
        case 0x2eefa0u: goto label_2eefa0;
        case 0x2eefa4u: goto label_2eefa4;
        case 0x2eefa8u: goto label_2eefa8;
        case 0x2eefacu: goto label_2eefac;
        case 0x2eefb0u: goto label_2eefb0;
        case 0x2eefb4u: goto label_2eefb4;
        case 0x2eefb8u: goto label_2eefb8;
        case 0x2eefbcu: goto label_2eefbc;
        case 0x2eefc0u: goto label_2eefc0;
        case 0x2eefc4u: goto label_2eefc4;
        case 0x2eefc8u: goto label_2eefc8;
        case 0x2eefccu: goto label_2eefcc;
        case 0x2eefd0u: goto label_2eefd0;
        case 0x2eefd4u: goto label_2eefd4;
        case 0x2eefd8u: goto label_2eefd8;
        case 0x2eefdcu: goto label_2eefdc;
        case 0x2eefe0u: goto label_2eefe0;
        case 0x2eefe4u: goto label_2eefe4;
        case 0x2eefe8u: goto label_2eefe8;
        case 0x2eefecu: goto label_2eefec;
        case 0x2eeff0u: goto label_2eeff0;
        case 0x2eeff4u: goto label_2eeff4;
        case 0x2eeff8u: goto label_2eeff8;
        case 0x2eeffcu: goto label_2eeffc;
        case 0x2ef000u: goto label_2ef000;
        case 0x2ef004u: goto label_2ef004;
        case 0x2ef008u: goto label_2ef008;
        case 0x2ef00cu: goto label_2ef00c;
        case 0x2ef010u: goto label_2ef010;
        case 0x2ef014u: goto label_2ef014;
        case 0x2ef018u: goto label_2ef018;
        case 0x2ef01cu: goto label_2ef01c;
        case 0x2ef020u: goto label_2ef020;
        case 0x2ef024u: goto label_2ef024;
        case 0x2ef028u: goto label_2ef028;
        case 0x2ef02cu: goto label_2ef02c;
        case 0x2ef030u: goto label_2ef030;
        case 0x2ef034u: goto label_2ef034;
        case 0x2ef038u: goto label_2ef038;
        case 0x2ef03cu: goto label_2ef03c;
        case 0x2ef040u: goto label_2ef040;
        case 0x2ef044u: goto label_2ef044;
        default: break;
    }

    ctx->pc = 0x2eef78u;

label_2eef78:
    // 0x2eef78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2eef7c:
    // 0x2eef7c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2eef7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2eef80:
    // 0x2eef80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2eef80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2eef84:
    // 0x2eef84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eef84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eef88:
    // 0x2eef88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2eef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2eef8c:
    // 0x2eef8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eef8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eef90:
    // 0x2eef90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eef90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2eef94:
    // 0x2eef94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eef94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eef98:
    // 0x2eef98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2eef9c:
    // 0x2eef9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2eef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eefa0:
    // 0x2eefa0: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2eefa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2eefa4:
    // 0x2eefa4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2eefa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2eefa8:
    // 0x2eefa8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2eefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eefac:
    // 0x2eefac: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2eefacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2eefb0:
    // 0x2eefb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2eefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eefb4:
    // 0x2eefb4: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2eefb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2eefb8:
    // 0x2eefb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2eefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eefbc:
    // 0x2eefbc: 0xa040011e  sb          $zero, 0x11E($v0)
    ctx->pc = 0x2eefbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 0));
label_2eefc0:
    // 0x2eefc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eefc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eefc4:
    // 0x2eefc4: 0xc0a22c6  jal         func_288B18
label_2eefc8:
    if (ctx->pc == 0x2EEFC8u) {
        ctx->pc = 0x2EEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFC4u;
        // 0x2eefc8: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEFCCu;
        goto label_2eefcc;
    }
    ctx->pc = 0x2EEFC4u;
    SET_GPR_U32(ctx, 31, 0x2EEFCCu);
    ctx->pc = 0x2EEFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFC4u;
    // 0x2eefc8: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2EEFC4u, 0x2EEFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFCCu;
label_2eefcc:
    // 0x2eefcc: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2eefccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2eefd0:
    // 0x2eefd0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2eefd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_2eefd4:
    // 0x2eefd4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2eefd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eefd8:
    // 0x2eefd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2eefd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2eefdc:
    // 0x2eefdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eefdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2eefe0:
    // 0x2eefe0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2eefe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2eefe4:
    // 0x2eefe4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2eefe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2eefe8:
    // 0x2eefe8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eefe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eefec:
    // 0x2eefec: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2eefecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2eeff0:
    // 0x2eeff0: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x2eeff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_2eeff4:
    // 0x2eeff4: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x2eeff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_2eeff8:
    // 0x2eeff8: 0x60f809  jalr        $v1
label_2eeffc:
    if (ctx->pc == 0x2EEFFCu) {
        ctx->pc = 0x2EEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFF8u;
        // 0x2eeffc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF000u;
        goto label_2ef000;
    }
    ctx->pc = 0x2EEFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF000u);
        ctx->pc = 0x2EEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFF8u;
        // 0x2eeffc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEFF8u, 0x2EF000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF000u;
label_2ef000:
    // 0x2ef000: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ef000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef004:
    // 0x2ef004: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2ef004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ef008:
    // 0x2ef008: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2ef008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2ef00c:
    // 0x2ef00c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2ef010:
    if (ctx->pc == 0x2EF010u) {
        ctx->pc = 0x2EF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF00Cu;
        // 0x2ef010: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF014u;
        goto label_2ef014;
    }
    ctx->pc = 0x2EF00Cu;
    {
        const bool branch_taken_0x2ef00c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF00Cu;
        // 0x2ef010: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef00c) {
            ctx->pc = 0x2EF024u;
            goto label_2ef024;
        }
    }
    ctx->pc = 0x2EF014u;
label_2ef014:
    // 0x2ef014: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ef014u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2ef018:
    // 0x2ef018: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2ef018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2ef01c:
    // 0x2ef01c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ef01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ef020:
    // 0x2ef020: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2ef020u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2ef024:
    // 0x2ef024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef028:
    // 0x2ef028: 0x24c67a88  addiu       $a2, $a2, 0x7A88
    ctx->pc = 0x2ef028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31368));
label_2ef02c:
    // 0x2ef02c: 0xc0886a8  jal         func_221AA0
label_2ef030:
    if (ctx->pc == 0x2EF030u) {
        ctx->pc = 0x2EF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF02Cu;
        // 0x2ef030: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF034u;
        goto label_2ef034;
    }
    ctx->pc = 0x2EF02Cu;
    SET_GPR_U32(ctx, 31, 0x2EF034u);
    ctx->pc = 0x2EF030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF02Cu;
    // 0x2ef030: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2EF02Cu, 0x2EF034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF034u;
label_2ef034:
    // 0x2ef034: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ef034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef038:
    // 0x2ef038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef03c:
    // 0x2ef03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef040:
    // 0x2ef040: 0x3e00008  jr          $ra
label_2ef044:
    if (ctx->pc == 0x2EF044u) {
        ctx->pc = 0x2EF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF040u;
        // 0x2ef044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF048u;
        goto label_fallthrough_0x2ef040;
    }
    ctx->pc = 0x2EF040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF040u;
        // 0x2ef044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ef040:
    ctx->pc = 0x2EF048u;
}
