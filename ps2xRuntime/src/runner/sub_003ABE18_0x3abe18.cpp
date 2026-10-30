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

// Function: sub_003ABE18
// Address: 0x3abe18 - 0x3ac148
void sub_003ABE18_0x3abe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABE18_0x3abe18");
#endif

    switch (ctx->pc) {
        case 0x3abe18u: goto label_3abe18;
        case 0x3abe1cu: goto label_3abe1c;
        case 0x3abe20u: goto label_3abe20;
        case 0x3abe24u: goto label_3abe24;
        case 0x3abe28u: goto label_3abe28;
        case 0x3abe2cu: goto label_3abe2c;
        case 0x3abe30u: goto label_3abe30;
        case 0x3abe34u: goto label_3abe34;
        case 0x3abe38u: goto label_3abe38;
        case 0x3abe3cu: goto label_3abe3c;
        case 0x3abe40u: goto label_3abe40;
        case 0x3abe44u: goto label_3abe44;
        case 0x3abe48u: goto label_3abe48;
        case 0x3abe4cu: goto label_3abe4c;
        case 0x3abe50u: goto label_3abe50;
        case 0x3abe54u: goto label_3abe54;
        case 0x3abe58u: goto label_3abe58;
        case 0x3abe5cu: goto label_3abe5c;
        case 0x3abe60u: goto label_3abe60;
        case 0x3abe64u: goto label_3abe64;
        case 0x3abe68u: goto label_3abe68;
        case 0x3abe6cu: goto label_3abe6c;
        case 0x3abe70u: goto label_3abe70;
        case 0x3abe74u: goto label_3abe74;
        case 0x3abe78u: goto label_3abe78;
        case 0x3abe7cu: goto label_3abe7c;
        case 0x3abe80u: goto label_3abe80;
        case 0x3abe84u: goto label_3abe84;
        case 0x3abe88u: goto label_3abe88;
        case 0x3abe8cu: goto label_3abe8c;
        case 0x3abe90u: goto label_3abe90;
        case 0x3abe94u: goto label_3abe94;
        case 0x3abe98u: goto label_3abe98;
        case 0x3abe9cu: goto label_3abe9c;
        case 0x3abea0u: goto label_3abea0;
        case 0x3abea4u: goto label_3abea4;
        case 0x3abea8u: goto label_3abea8;
        case 0x3abeacu: goto label_3abeac;
        case 0x3abeb0u: goto label_3abeb0;
        case 0x3abeb4u: goto label_3abeb4;
        case 0x3abeb8u: goto label_3abeb8;
        case 0x3abebcu: goto label_3abebc;
        case 0x3abec0u: goto label_3abec0;
        case 0x3abec4u: goto label_3abec4;
        case 0x3abec8u: goto label_3abec8;
        case 0x3abeccu: goto label_3abecc;
        case 0x3abed0u: goto label_3abed0;
        case 0x3abed4u: goto label_3abed4;
        case 0x3abed8u: goto label_3abed8;
        case 0x3abedcu: goto label_3abedc;
        case 0x3abee0u: goto label_3abee0;
        case 0x3abee4u: goto label_3abee4;
        case 0x3abee8u: goto label_3abee8;
        case 0x3abeecu: goto label_3abeec;
        case 0x3abef0u: goto label_3abef0;
        case 0x3abef4u: goto label_3abef4;
        case 0x3abef8u: goto label_3abef8;
        case 0x3abefcu: goto label_3abefc;
        case 0x3abf00u: goto label_3abf00;
        case 0x3abf04u: goto label_3abf04;
        case 0x3abf08u: goto label_3abf08;
        case 0x3abf0cu: goto label_3abf0c;
        case 0x3abf10u: goto label_3abf10;
        case 0x3abf14u: goto label_3abf14;
        case 0x3abf18u: goto label_3abf18;
        case 0x3abf1cu: goto label_3abf1c;
        case 0x3abf20u: goto label_3abf20;
        case 0x3abf24u: goto label_3abf24;
        case 0x3abf28u: goto label_3abf28;
        case 0x3abf2cu: goto label_3abf2c;
        case 0x3abf30u: goto label_3abf30;
        case 0x3abf34u: goto label_3abf34;
        case 0x3abf38u: goto label_3abf38;
        case 0x3abf3cu: goto label_3abf3c;
        case 0x3abf40u: goto label_3abf40;
        case 0x3abf44u: goto label_3abf44;
        case 0x3abf48u: goto label_3abf48;
        case 0x3abf4cu: goto label_3abf4c;
        case 0x3abf50u: goto label_3abf50;
        case 0x3abf54u: goto label_3abf54;
        case 0x3abf58u: goto label_3abf58;
        case 0x3abf5cu: goto label_3abf5c;
        case 0x3abf60u: goto label_3abf60;
        case 0x3abf64u: goto label_3abf64;
        case 0x3abf68u: goto label_3abf68;
        case 0x3abf6cu: goto label_3abf6c;
        case 0x3abf70u: goto label_3abf70;
        case 0x3abf74u: goto label_3abf74;
        case 0x3abf78u: goto label_3abf78;
        case 0x3abf7cu: goto label_3abf7c;
        case 0x3abf80u: goto label_3abf80;
        case 0x3abf84u: goto label_3abf84;
        case 0x3abf88u: goto label_3abf88;
        case 0x3abf8cu: goto label_3abf8c;
        case 0x3abf90u: goto label_3abf90;
        case 0x3abf94u: goto label_3abf94;
        case 0x3abf98u: goto label_3abf98;
        case 0x3abf9cu: goto label_3abf9c;
        case 0x3abfa0u: goto label_3abfa0;
        case 0x3abfa4u: goto label_3abfa4;
        case 0x3abfa8u: goto label_3abfa8;
        case 0x3abfacu: goto label_3abfac;
        case 0x3abfb0u: goto label_3abfb0;
        case 0x3abfb4u: goto label_3abfb4;
        case 0x3abfb8u: goto label_3abfb8;
        case 0x3abfbcu: goto label_3abfbc;
        case 0x3abfc0u: goto label_3abfc0;
        case 0x3abfc4u: goto label_3abfc4;
        case 0x3abfc8u: goto label_3abfc8;
        case 0x3abfccu: goto label_3abfcc;
        case 0x3abfd0u: goto label_3abfd0;
        case 0x3abfd4u: goto label_3abfd4;
        case 0x3abfd8u: goto label_3abfd8;
        case 0x3abfdcu: goto label_3abfdc;
        case 0x3abfe0u: goto label_3abfe0;
        case 0x3abfe4u: goto label_3abfe4;
        case 0x3abfe8u: goto label_3abfe8;
        case 0x3abfecu: goto label_3abfec;
        case 0x3abff0u: goto label_3abff0;
        case 0x3abff4u: goto label_3abff4;
        case 0x3abff8u: goto label_3abff8;
        case 0x3abffcu: goto label_3abffc;
        case 0x3ac000u: goto label_3ac000;
        case 0x3ac004u: goto label_3ac004;
        case 0x3ac008u: goto label_3ac008;
        case 0x3ac00cu: goto label_3ac00c;
        case 0x3ac010u: goto label_3ac010;
        case 0x3ac014u: goto label_3ac014;
        case 0x3ac018u: goto label_3ac018;
        case 0x3ac01cu: goto label_3ac01c;
        case 0x3ac020u: goto label_3ac020;
        case 0x3ac024u: goto label_3ac024;
        case 0x3ac028u: goto label_3ac028;
        case 0x3ac02cu: goto label_3ac02c;
        case 0x3ac030u: goto label_3ac030;
        case 0x3ac034u: goto label_3ac034;
        case 0x3ac038u: goto label_3ac038;
        case 0x3ac03cu: goto label_3ac03c;
        case 0x3ac040u: goto label_3ac040;
        case 0x3ac044u: goto label_3ac044;
        case 0x3ac048u: goto label_3ac048;
        case 0x3ac04cu: goto label_3ac04c;
        case 0x3ac050u: goto label_3ac050;
        case 0x3ac054u: goto label_3ac054;
        case 0x3ac058u: goto label_3ac058;
        case 0x3ac05cu: goto label_3ac05c;
        case 0x3ac060u: goto label_3ac060;
        case 0x3ac064u: goto label_3ac064;
        case 0x3ac068u: goto label_3ac068;
        case 0x3ac06cu: goto label_3ac06c;
        case 0x3ac070u: goto label_3ac070;
        case 0x3ac074u: goto label_3ac074;
        case 0x3ac078u: goto label_3ac078;
        case 0x3ac07cu: goto label_3ac07c;
        case 0x3ac080u: goto label_3ac080;
        case 0x3ac084u: goto label_3ac084;
        case 0x3ac088u: goto label_3ac088;
        case 0x3ac08cu: goto label_3ac08c;
        case 0x3ac090u: goto label_3ac090;
        case 0x3ac094u: goto label_3ac094;
        case 0x3ac098u: goto label_3ac098;
        case 0x3ac09cu: goto label_3ac09c;
        case 0x3ac0a0u: goto label_3ac0a0;
        case 0x3ac0a4u: goto label_3ac0a4;
        case 0x3ac0a8u: goto label_3ac0a8;
        case 0x3ac0acu: goto label_3ac0ac;
        case 0x3ac0b0u: goto label_3ac0b0;
        case 0x3ac0b4u: goto label_3ac0b4;
        case 0x3ac0b8u: goto label_3ac0b8;
        case 0x3ac0bcu: goto label_3ac0bc;
        case 0x3ac0c0u: goto label_3ac0c0;
        case 0x3ac0c4u: goto label_3ac0c4;
        case 0x3ac0c8u: goto label_3ac0c8;
        case 0x3ac0ccu: goto label_3ac0cc;
        case 0x3ac0d0u: goto label_3ac0d0;
        case 0x3ac0d4u: goto label_3ac0d4;
        case 0x3ac0d8u: goto label_3ac0d8;
        case 0x3ac0dcu: goto label_3ac0dc;
        case 0x3ac0e0u: goto label_3ac0e0;
        case 0x3ac0e4u: goto label_3ac0e4;
        case 0x3ac0e8u: goto label_3ac0e8;
        case 0x3ac0ecu: goto label_3ac0ec;
        case 0x3ac0f0u: goto label_3ac0f0;
        case 0x3ac0f4u: goto label_3ac0f4;
        case 0x3ac0f8u: goto label_3ac0f8;
        case 0x3ac0fcu: goto label_3ac0fc;
        case 0x3ac100u: goto label_3ac100;
        case 0x3ac104u: goto label_3ac104;
        case 0x3ac108u: goto label_3ac108;
        case 0x3ac10cu: goto label_3ac10c;
        case 0x3ac110u: goto label_3ac110;
        case 0x3ac114u: goto label_3ac114;
        case 0x3ac118u: goto label_3ac118;
        case 0x3ac11cu: goto label_3ac11c;
        case 0x3ac120u: goto label_3ac120;
        case 0x3ac124u: goto label_3ac124;
        case 0x3ac128u: goto label_3ac128;
        case 0x3ac12cu: goto label_3ac12c;
        case 0x3ac130u: goto label_3ac130;
        case 0x3ac134u: goto label_3ac134;
        case 0x3ac138u: goto label_3ac138;
        case 0x3ac13cu: goto label_3ac13c;
        case 0x3ac140u: goto label_3ac140;
        case 0x3ac144u: goto label_3ac144;
        default: break;
    }

    ctx->pc = 0x3abe18u;

label_3abe18:
    // 0x3abe18: 0x27bdfa60  addiu       $sp, $sp, -0x5A0
    ctx->pc = 0x3abe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965856));
label_3abe1c:
    // 0x3abe1c: 0x7fb00550  sq          $s0, 0x550($sp)
    ctx->pc = 0x3abe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 16));
label_3abe20:
    // 0x3abe20: 0x7fb40510  sq          $s4, 0x510($sp)
    ctx->pc = 0x3abe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 20));
label_3abe24:
    // 0x3abe24: 0x7fb10540  sq          $s1, 0x540($sp)
    ctx->pc = 0x3abe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 17));
label_3abe28:
    // 0x3abe28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3abe28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3abe2c:
    // 0x3abe2c: 0x7fb20530  sq          $s2, 0x530($sp)
    ctx->pc = 0x3abe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 18));
label_3abe30:
    // 0x3abe30: 0x7fb30520  sq          $s3, 0x520($sp)
    ctx->pc = 0x3abe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 19));
label_3abe34:
    // 0x3abe34: 0x7fb50500  sq          $s5, 0x500($sp)
    ctx->pc = 0x3abe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 21));
label_3abe38:
    // 0x3abe38: 0x7fb604f0  sq          $s6, 0x4F0($sp)
    ctx->pc = 0x3abe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 22));
label_3abe3c:
    // 0x3abe3c: 0x7fb704e0  sq          $s7, 0x4E0($sp)
    ctx->pc = 0x3abe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 23));
label_3abe40:
    // 0x3abe40: 0x7fbe04d0  sq          $fp, 0x4D0($sp)
    ctx->pc = 0x3abe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 30));
label_3abe44:
    // 0x3abe44: 0xffbf04c0  sd          $ra, 0x4C0($sp)
    ctx->pc = 0x3abe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 31));
label_3abe48:
    // 0x3abe48: 0xe7ba0590  swc1        $f26, 0x590($sp)
    ctx->pc = 0x3abe48u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_3abe4c:
    // 0x3abe4c: 0xe7b90588  swc1        $f25, 0x588($sp)
    ctx->pc = 0x3abe4cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_3abe50:
    // 0x3abe50: 0xe7b80580  swc1        $f24, 0x580($sp)
    ctx->pc = 0x3abe50u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_3abe54:
    // 0x3abe54: 0xe7b70578  swc1        $f23, 0x578($sp)
    ctx->pc = 0x3abe54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_3abe58:
    // 0x3abe58: 0xe7b60570  swc1        $f22, 0x570($sp)
    ctx->pc = 0x3abe58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_3abe5c:
    // 0x3abe5c: 0xe7b50568  swc1        $f21, 0x568($sp)
    ctx->pc = 0x3abe5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_3abe60:
    // 0x3abe60: 0xe7b40560  swc1        $f20, 0x560($sp)
    ctx->pc = 0x3abe60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_3abe64:
    // 0x3abe64: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3abe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3abe68:
    // 0x3abe68: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3abe68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3abe6c:
    // 0x3abe6c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3abe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3abe70:
    // 0x3abe70: 0x40f809  jalr        $v0
label_3abe74:
    if (ctx->pc == 0x3ABE74u) {
        ctx->pc = 0x3ABE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE70u;
        // 0x3abe74: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE78u;
        goto label_3abe78;
    }
    ctx->pc = 0x3ABE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ABE78u);
        ctx->pc = 0x3ABE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE70u;
        // 0x3abe74: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABE70u, 0x3ABE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ABE78u;
label_3abe78:
    // 0x3abe78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3abe78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abe7c:
    // 0x3abe7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3abe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3abe80:
    // 0x3abe80: 0xc0e90ca  jal         func_3A4328
label_3abe84:
    if (ctx->pc == 0x3ABE84u) {
        ctx->pc = 0x3ABE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE80u;
        // 0x3abe84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE88u;
        goto label_3abe88;
    }
    ctx->pc = 0x3ABE80u;
    SET_GPR_U32(ctx, 31, 0x3ABE88u);
    ctx->pc = 0x3ABE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE80u;
    // 0x3abe84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3ABE80u, 0x3ABE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE88u;
label_3abe88:
    // 0x3abe88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3abe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3abe8c:
    // 0x3abe8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3abe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3abe90:
    // 0x3abe90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3abe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3abe94:
    // 0x3abe94: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3abe94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3abe98:
    // 0x3abe98: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_3abe9c:
    if (ctx->pc == 0x3ABE9Cu) {
        ctx->pc = 0x3ABE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE98u;
        // 0x3abe9c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEA0u;
        goto label_3abea0;
    }
    ctx->pc = 0x3ABE98u;
    {
        const bool branch_taken_0x3abe98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE98u;
        // 0x3abe9c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe98) {
            ctx->pc = 0x3ABED0u;
            goto label_3abed0;
        }
    }
    ctx->pc = 0x3ABEA0u;
label_3abea0:
    // 0x3abea0: 0xc0e9694  jal         func_3A5A50
label_3abea4:
    if (ctx->pc == 0x3ABEA4u) {
        ctx->pc = 0x3ABEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEA0u;
        // 0x3abea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEA8u;
        goto label_3abea8;
    }
    ctx->pc = 0x3ABEA0u;
    SET_GPR_U32(ctx, 31, 0x3ABEA8u);
    ctx->pc = 0x3ABEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABEA0u;
    // 0x3abea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3ABEA0u, 0x3ABEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABEA8u;
label_3abea8:
    // 0x3abea8: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_3abeac:
    if (ctx->pc == 0x3ABEACu) {
        ctx->pc = 0x3ABEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEA8u;
        // 0x3abeac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEB0u;
        goto label_3abeb0;
    }
    ctx->pc = 0x3ABEA8u;
    {
        const bool branch_taken_0x3abea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEA8u;
        // 0x3abeac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abea8) {
            ctx->pc = 0x3AC0FCu;
            goto label_3ac0fc;
        }
    }
    ctx->pc = 0x3ABEB0u;
label_3abeb0:
    // 0x3abeb0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3abeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3abeb4:
    // 0x3abeb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3abeb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3abeb8:
    // 0x3abeb8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3abeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3abebc:
    // 0x3abebc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3abebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3abec0:
    // 0x3abec0: 0xc0e9f56  jal         func_3A7D58
label_3abec4:
    if (ctx->pc == 0x3ABEC4u) {
        ctx->pc = 0x3ABEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEC0u;
        // 0x3abec4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEC8u;
        goto label_3abec8;
    }
    ctx->pc = 0x3ABEC0u;
    SET_GPR_U32(ctx, 31, 0x3ABEC8u);
    ctx->pc = 0x3ABEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABEC0u;
    // 0x3abec4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3ABEC0u, 0x3ABEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABEC8u;
label_3abec8:
    // 0x3abec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3abecc:
    if (ctx->pc == 0x3ABECCu) {
        ctx->pc = 0x3ABED0u;
        goto label_3abed0;
    }
    ctx->pc = 0x3ABEC8u;
    {
        const bool branch_taken_0x3abec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abec8) {
            ctx->pc = 0x3ABED8u;
            goto label_3abed8;
        }
    }
    ctx->pc = 0x3ABED0u;
label_3abed0:
    // 0x3abed0: 0x1000008a  b           . + 4 + (0x8A << 2)
label_3abed4:
    if (ctx->pc == 0x3ABED4u) {
        ctx->pc = 0x3ABED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABED0u;
        // 0x3abed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABED8u;
        goto label_3abed8;
    }
    ctx->pc = 0x3ABED0u;
    {
        const bool branch_taken_0x3abed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABED0u;
        // 0x3abed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abed0) {
            ctx->pc = 0x3AC0FCu;
            goto label_3ac0fc;
        }
    }
    ctx->pc = 0x3ABED8u;
label_3abed8:
    // 0x3abed8: 0xc0e9694  jal         func_3A5A50
label_3abedc:
    if (ctx->pc == 0x3ABEDCu) {
        ctx->pc = 0x3ABEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABED8u;
        // 0x3abedc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEE0u;
        goto label_3abee0;
    }
    ctx->pc = 0x3ABED8u;
    SET_GPR_U32(ctx, 31, 0x3ABEE0u);
    ctx->pc = 0x3ABEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABED8u;
    // 0x3abedc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3ABED8u, 0x3ABEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABEE0u;
label_3abee0:
    // 0x3abee0: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_3abee4:
    if (ctx->pc == 0x3ABEE4u) {
        ctx->pc = 0x3ABEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEE0u;
        // 0x3abee4: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEE8u;
        goto label_3abee8;
    }
    ctx->pc = 0x3ABEE0u;
    {
        const bool branch_taken_0x3abee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEE0u;
        // 0x3abee4: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abee0) {
            ctx->pc = 0x3AC0F8u;
            goto label_3ac0f8;
        }
    }
    ctx->pc = 0x3ABEE8u;
label_3abee8:
    // 0x3abee8: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x3abee8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
label_3abeec:
    // 0x3abeec: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x3abeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_3abef0:
    // 0x3abef0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3abef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3abef4:
    // 0x3abef4: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3abef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3abef8:
    // 0x3abef8: 0x26d0b8b8  addiu       $s0, $s6, -0x4748
    ctx->pc = 0x3abef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
label_3abefc:
    // 0x3abefc: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3abefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3abf00:
    // 0x3abf00: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3abf00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3abf04:
    // 0x3abf04: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3abf04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3abf08:
    // 0x3abf08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3abf08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3abf0c:
    // 0x3abf0c: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3abf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_3abf10:
    // 0x3abf10: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x3abf10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3abf14:
    // 0x3abf14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3abf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3abf18:
    // 0x3abf18: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3abf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3abf1c:
    // 0x3abf1c: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x3abf1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3abf20:
    // 0x3abf20: 0x3c01bd75  lui         $at, 0xBD75
    ctx->pc = 0x3abf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48501 << 16));
label_3abf24:
    // 0x3abf24: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3abf24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3abf28:
    // 0x3abf28: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3abf28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3abf2c:
    // 0x3abf2c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x3abf2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3abf30:
    // 0x3abf30: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x3abf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_3abf34:
    // 0x3abf34: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3abf34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3abf38:
    // 0x3abf38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3abf38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3abf3c:
    // 0x3abf3c: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x3abf3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3abf40:
    // 0x3abf40: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x3abf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_3abf44:
    // 0x3abf44: 0x0  nop
    ctx->pc = 0x3abf44u;
    // NOP
label_3abf48:
    // 0x3abf48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3abf4c:
    if (ctx->pc == 0x3ABF4Cu) {
        ctx->pc = 0x3ABF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF48u;
        // 0x3abf4c: 0x241500ff  addiu       $s5, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF50u;
        goto label_3abf50;
    }
    ctx->pc = 0x3ABF48u;
    {
        const bool branch_taken_0x3abf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF48u;
        // 0x3abf4c: 0x241500ff  addiu       $s5, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf48) {
            ctx->pc = 0x3ABF60u;
            goto label_3abf60;
        }
    }
    ctx->pc = 0x3ABF50u;
label_3abf50:
    // 0x3abf50: 0x26c4b8b8  addiu       $a0, $s6, -0x4748
    ctx->pc = 0x3abf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
label_3abf54:
    // 0x3abf54: 0xc0cd4ee  jal         func_3353B8
label_3abf58:
    if (ctx->pc == 0x3ABF58u) {
        ctx->pc = 0x3ABF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF54u;
        // 0x3abf58: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF5Cu;
        goto label_3abf5c;
    }
    ctx->pc = 0x3ABF54u;
    SET_GPR_U32(ctx, 31, 0x3ABF5Cu);
    ctx->pc = 0x3ABF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF54u;
    // 0x3abf58: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3ABF54u, 0x3ABF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF5Cu;
label_3abf5c:
    // 0x3abf5c: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x3abf5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_3abf60:
    // 0x3abf60: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x3abf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_3abf64:
    // 0x3abf64: 0xc0e911e  jal         func_3A4478
label_3abf68:
    if (ctx->pc == 0x3ABF68u) {
        ctx->pc = 0x3ABF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF64u;
        // 0x3abf68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF6Cu;
        goto label_3abf6c;
    }
    ctx->pc = 0x3ABF64u;
    SET_GPR_U32(ctx, 31, 0x3ABF6Cu);
    ctx->pc = 0x3ABF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF64u;
    // 0x3abf68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3ABF64u, 0x3ABF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF6Cu;
label_3abf6c:
    // 0x3abf6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abf70:
    // 0x3abf70: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3abf70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3abf74:
    // 0x3abf74: 0xc0cd518  jal         func_335460
label_3abf78:
    if (ctx->pc == 0x3ABF78u) {
        ctx->pc = 0x3ABF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF74u;
        // 0x3abf78: 0x4600cb46  mov.s       $f13, $f25 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF7Cu;
        goto label_3abf7c;
    }
    ctx->pc = 0x3ABF74u;
    SET_GPR_U32(ctx, 31, 0x3ABF7Cu);
    ctx->pc = 0x3ABF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF74u;
    // 0x3abf78: 0x4600cb46  mov.s       $f13, $f25 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ABF74u, 0x3ABF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF7Cu;
label_3abf7c:
    // 0x3abf7c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3abf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3abf80:
    // 0x3abf80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3abf80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3abf84:
    // 0x3abf84: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3abf84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3abf88:
    // 0x3abf88: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3abf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3abf8c:
    // 0x3abf8c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3abf8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3abf90:
    // 0x3abf90: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3abf90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3abf94:
    // 0x3abf94: 0xc0cd518  jal         func_335460
label_3abf98:
    if (ctx->pc == 0x3ABF98u) {
        ctx->pc = 0x3ABF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF94u;
        // 0x3abf98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF9Cu;
        goto label_3abf9c;
    }
    ctx->pc = 0x3ABF94u;
    SET_GPR_U32(ctx, 31, 0x3ABF9Cu);
    ctx->pc = 0x3ABF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF94u;
    // 0x3abf98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ABF94u, 0x3ABF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF9Cu;
label_3abf9c:
    // 0x3abf9c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3abf9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3abfa0:
    // 0x3abfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abfa4:
    // 0x3abfa4: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3abfa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3abfa8:
    // 0x3abfa8: 0xc0cd518  jal         func_335460
label_3abfac:
    if (ctx->pc == 0x3ABFACu) {
        ctx->pc = 0x3ABFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFA8u;
        // 0x3abfac: 0x4600cb46  mov.s       $f13, $f25 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABFB0u;
        goto label_3abfb0;
    }
    ctx->pc = 0x3ABFA8u;
    SET_GPR_U32(ctx, 31, 0x3ABFB0u);
    ctx->pc = 0x3ABFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABFA8u;
    // 0x3abfac: 0x4600cb46  mov.s       $f13, $f25 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ABFA8u, 0x3ABFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABFB0u;
label_3abfb0:
    // 0x3abfb0: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x3abfb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3abfb4:
    // 0x3abfb4: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x3abfb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3abfb8:
    // 0x3abfb8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3abfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3abfbc:
    // 0x3abfbc: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3abfbcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3abfc0:
    // 0x3abfc0: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3abfc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3abfc4:
    // 0x3abfc4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3abfc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3abfc8:
    // 0x3abfc8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3abfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3abfcc:
    // 0x3abfcc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3abfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3abfd0:
    // 0x3abfd0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3abfd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3abfd4:
    // 0x3abfd4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3abfd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3abfd8:
    // 0x3abfd8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3abfd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3abfdc:
    // 0x3abfdc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3abfdcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3abfe0:
    // 0x3abfe0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3abfe0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3abfe4:
    // 0x3abfe4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3abfe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3abfe8:
    // 0x3abfe8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3abfe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3abfec:
    // 0x3abfec: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3abfecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3abff0:
    // 0x3abff0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3abff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3abff4:
    // 0x3abff4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3abff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3abff8:
    // 0x3abff8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3abff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3abffc:
    // 0x3abffc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3abffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ac000:
    // 0x3ac000: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3ac000u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ac004:
    // 0x3ac004: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3ac004u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ac008:
    // 0x3ac008: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3ac008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ac00c:
    // 0x3ac00c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3ac00cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ac010:
    // 0x3ac010: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3ac010u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3ac014:
    // 0x3ac014: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3ac014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3ac018:
    // 0x3ac018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac01c:
    // 0x3ac01c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3ac01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3ac020:
    // 0x3ac020: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ac020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ac024:
    // 0x3ac024: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3ac024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3ac028:
    // 0x3ac028: 0xc0cd518  jal         func_335460
label_3ac02c:
    if (ctx->pc == 0x3AC02Cu) {
        ctx->pc = 0x3AC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC028u;
        // 0x3ac02c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC030u;
        goto label_3ac030;
    }
    ctx->pc = 0x3AC028u;
    SET_GPR_U32(ctx, 31, 0x3AC030u);
    ctx->pc = 0x3AC02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC028u;
    // 0x3ac02c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AC028u, 0x3AC030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC030u;
label_3ac030:
    // 0x3ac030: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ac030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ac034:
    // 0x3ac034: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ac034u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ac038:
    // 0x3ac038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac03c:
    // 0x3ac03c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ac03cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ac040:
    // 0x3ac040: 0xc0cd518  jal         func_335460
label_3ac044:
    if (ctx->pc == 0x3AC044u) {
        ctx->pc = 0x3AC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC040u;
        // 0x3ac044: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC048u;
        goto label_3ac048;
    }
    ctx->pc = 0x3AC040u;
    SET_GPR_U32(ctx, 31, 0x3AC048u);
    ctx->pc = 0x3AC044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC040u;
    // 0x3ac044: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AC040u, 0x3AC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC048u;
label_3ac048:
    // 0x3ac048: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ac048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ac04c:
    // 0x3ac04c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3ac04cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3ac050:
    // 0x3ac050: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ac050u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ac054:
    // 0x3ac054: 0xc0cd518  jal         func_335460
label_3ac058:
    if (ctx->pc == 0x3AC058u) {
        ctx->pc = 0x3AC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC054u;
        // 0x3ac058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC05Cu;
        goto label_3ac05c;
    }
    ctx->pc = 0x3AC054u;
    SET_GPR_U32(ctx, 31, 0x3AC05Cu);
    ctx->pc = 0x3AC058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC054u;
    // 0x3ac058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AC054u, 0x3AC05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC05Cu;
label_3ac05c:
    // 0x3ac05c: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x3ac05cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3ac060:
    // 0x3ac060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac064:
    // 0x3ac064: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x3ac064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3ac068:
    // 0x3ac068: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ac068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ac06c:
    // 0x3ac06c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3ac06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3ac070:
    // 0x3ac070: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3ac070u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3ac074:
    // 0x3ac074: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3ac074u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac078:
    // 0x3ac078: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x3ac078u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac07c:
    // 0x3ac07c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ac07cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac080:
    // 0x3ac080: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ac080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ac084:
    // 0x3ac084: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3ac084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ac088:
    // 0x3ac088: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ac088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ac08c:
    // 0x3ac08c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ac08cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ac090:
    // 0x3ac090: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3ac090u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3ac094:
    // 0x3ac094: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3ac094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3ac098:
    // 0x3ac098: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3ac098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
label_3ac09c:
    // 0x3ac09c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ac09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ac0a0:
    // 0x3ac0a0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3ac0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3ac0a4:
    // 0x3ac0a4: 0xc0cd4ee  jal         func_3353B8
label_3ac0a8:
    if (ctx->pc == 0x3AC0A8u) {
        ctx->pc = 0x3AC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0A4u;
        // 0x3ac0a8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0ACu;
        goto label_3ac0ac;
    }
    ctx->pc = 0x3AC0A4u;
    SET_GPR_U32(ctx, 31, 0x3AC0ACu);
    ctx->pc = 0x3AC0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC0A4u;
    // 0x3ac0a8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AC0A4u, 0x3AC0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC0ACu;
label_3ac0ac:
    // 0x3ac0ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ac0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ac0b0:
    // 0x3ac0b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ac0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ac0b4:
    // 0x3ac0b4: 0x24632c98  addiu       $v1, $v1, 0x2C98
    ctx->pc = 0x3ac0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11416));
label_3ac0b8:
    // 0x3ac0b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ac0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ac0bc:
    // 0x3ac0bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ac0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ac0c0:
    // 0x3ac0c0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3ac0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ac0c4:
    // 0x3ac0c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ac0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ac0c8:
    // 0x3ac0c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac0cc:
    // 0x3ac0cc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3ac0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3ac0d0:
    // 0x3ac0d0: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x3ac0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_3ac0d4:
    // 0x3ac0d4: 0xc0e9fa6  jal         func_3A7E98
label_3ac0d8:
    if (ctx->pc == 0x3AC0D8u) {
        ctx->pc = 0x3AC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0D4u;
        // 0x3ac0d8: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0DCu;
        goto label_3ac0dc;
    }
    ctx->pc = 0x3AC0D4u;
    SET_GPR_U32(ctx, 31, 0x3AC0DCu);
    ctx->pc = 0x3AC0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC0D4u;
    // 0x3ac0d8: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AC0D4u, 0x3AC0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC0DCu;
label_3ac0dc:
    // 0x3ac0dc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3ac0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3ac0e0:
    // 0x3ac0e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ac0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac0e4:
    // 0x3ac0e4: 0xc0f15bc  jal         func_3C56F0
label_3ac0e8:
    if (ctx->pc == 0x3AC0E8u) {
        ctx->pc = 0x3AC0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0E4u;
        // 0x3ac0e8: 0x24441d70  addiu       $a0, $v0, 0x1D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0ECu;
        goto label_3ac0ec;
    }
    ctx->pc = 0x3AC0E4u;
    SET_GPR_U32(ctx, 31, 0x3AC0ECu);
    ctx->pc = 0x3AC0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC0E4u;
    // 0x3ac0e8: 0x24441d70  addiu       $a0, $v0, 0x1D70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AC0E4u, 0x3AC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC0ECu;
label_3ac0ec:
    // 0x3ac0ec: 0x2e43000f  sltiu       $v1, $s2, 0xF
    ctx->pc = 0x3ac0ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_3ac0f0:
    // 0x3ac0f0: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
label_3ac0f4:
    if (ctx->pc == 0x3AC0F4u) {
        ctx->pc = 0x3AC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0F0u;
        // 0x3ac0f4: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0F8u;
        goto label_3ac0f8;
    }
    ctx->pc = 0x3AC0F0u;
    {
        const bool branch_taken_0x3ac0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0F0u;
        // 0x3ac0f4: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac0f0) {
            ctx->pc = 0x3ABF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abf48;
        }
    }
    ctx->pc = 0x3AC0F8u;
label_3ac0f8:
    // 0x3ac0f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ac0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac0fc:
    // 0x3ac0fc: 0x7bb00550  lq          $s0, 0x550($sp)
    ctx->pc = 0x3ac0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3ac100:
    // 0x3ac100: 0x7bb10540  lq          $s1, 0x540($sp)
    ctx->pc = 0x3ac100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3ac104:
    // 0x3ac104: 0x7bb20530  lq          $s2, 0x530($sp)
    ctx->pc = 0x3ac104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3ac108:
    // 0x3ac108: 0x7bb30520  lq          $s3, 0x520($sp)
    ctx->pc = 0x3ac108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3ac10c:
    // 0x3ac10c: 0x7bb40510  lq          $s4, 0x510($sp)
    ctx->pc = 0x3ac10cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3ac110:
    // 0x3ac110: 0x7bb50500  lq          $s5, 0x500($sp)
    ctx->pc = 0x3ac110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3ac114:
    // 0x3ac114: 0x7bb604f0  lq          $s6, 0x4F0($sp)
    ctx->pc = 0x3ac114u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3ac118:
    // 0x3ac118: 0x7bb704e0  lq          $s7, 0x4E0($sp)
    ctx->pc = 0x3ac118u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3ac11c:
    // 0x3ac11c: 0x7bbe04d0  lq          $fp, 0x4D0($sp)
    ctx->pc = 0x3ac11cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3ac120:
    // 0x3ac120: 0xdfbf04c0  ld          $ra, 0x4C0($sp)
    ctx->pc = 0x3ac120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
label_3ac124:
    // 0x3ac124: 0xc7ba0590  lwc1        $f26, 0x590($sp)
    ctx->pc = 0x3ac124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3ac128:
    // 0x3ac128: 0xc7b90588  lwc1        $f25, 0x588($sp)
    ctx->pc = 0x3ac128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3ac12c:
    // 0x3ac12c: 0xc7b80580  lwc1        $f24, 0x580($sp)
    ctx->pc = 0x3ac12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3ac130:
    // 0x3ac130: 0xc7b70578  lwc1        $f23, 0x578($sp)
    ctx->pc = 0x3ac130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ac134:
    // 0x3ac134: 0xc7b60570  lwc1        $f22, 0x570($sp)
    ctx->pc = 0x3ac134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ac138:
    // 0x3ac138: 0xc7b50568  lwc1        $f21, 0x568($sp)
    ctx->pc = 0x3ac138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ac13c:
    // 0x3ac13c: 0xc7b40560  lwc1        $f20, 0x560($sp)
    ctx->pc = 0x3ac13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ac140:
    // 0x3ac140: 0x3e00008  jr          $ra
label_3ac144:
    if (ctx->pc == 0x3AC144u) {
        ctx->pc = 0x3AC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC140u;
        // 0x3ac144: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC148u;
        goto label_fallthrough_0x3ac140;
    }
    ctx->pc = 0x3AC140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC140u;
        // 0x3ac144: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ac140:
    ctx->pc = 0x3AC148u;
}
