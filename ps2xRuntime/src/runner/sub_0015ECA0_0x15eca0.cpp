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

// Function: sub_0015ECA0
// Address: 0x15eca0 - 0x15f0d8
void sub_0015ECA0_0x15eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ECA0_0x15eca0");
#endif

    switch (ctx->pc) {
        case 0x15eca0u: goto label_15eca0;
        case 0x15eca4u: goto label_15eca4;
        case 0x15eca8u: goto label_15eca8;
        case 0x15ecacu: goto label_15ecac;
        case 0x15ecb0u: goto label_15ecb0;
        case 0x15ecb4u: goto label_15ecb4;
        case 0x15ecb8u: goto label_15ecb8;
        case 0x15ecbcu: goto label_15ecbc;
        case 0x15ecc0u: goto label_15ecc0;
        case 0x15ecc4u: goto label_15ecc4;
        case 0x15ecc8u: goto label_15ecc8;
        case 0x15ecccu: goto label_15eccc;
        case 0x15ecd0u: goto label_15ecd0;
        case 0x15ecd4u: goto label_15ecd4;
        case 0x15ecd8u: goto label_15ecd8;
        case 0x15ecdcu: goto label_15ecdc;
        case 0x15ece0u: goto label_15ece0;
        case 0x15ece4u: goto label_15ece4;
        case 0x15ece8u: goto label_15ece8;
        case 0x15ececu: goto label_15ecec;
        case 0x15ecf0u: goto label_15ecf0;
        case 0x15ecf4u: goto label_15ecf4;
        case 0x15ecf8u: goto label_15ecf8;
        case 0x15ecfcu: goto label_15ecfc;
        case 0x15ed00u: goto label_15ed00;
        case 0x15ed04u: goto label_15ed04;
        case 0x15ed08u: goto label_15ed08;
        case 0x15ed0cu: goto label_15ed0c;
        case 0x15ed10u: goto label_15ed10;
        case 0x15ed14u: goto label_15ed14;
        case 0x15ed18u: goto label_15ed18;
        case 0x15ed1cu: goto label_15ed1c;
        case 0x15ed20u: goto label_15ed20;
        case 0x15ed24u: goto label_15ed24;
        case 0x15ed28u: goto label_15ed28;
        case 0x15ed2cu: goto label_15ed2c;
        case 0x15ed30u: goto label_15ed30;
        case 0x15ed34u: goto label_15ed34;
        case 0x15ed38u: goto label_15ed38;
        case 0x15ed3cu: goto label_15ed3c;
        case 0x15ed40u: goto label_15ed40;
        case 0x15ed44u: goto label_15ed44;
        case 0x15ed48u: goto label_15ed48;
        case 0x15ed4cu: goto label_15ed4c;
        case 0x15ed50u: goto label_15ed50;
        case 0x15ed54u: goto label_15ed54;
        case 0x15ed58u: goto label_15ed58;
        case 0x15ed5cu: goto label_15ed5c;
        case 0x15ed60u: goto label_15ed60;
        case 0x15ed64u: goto label_15ed64;
        case 0x15ed68u: goto label_15ed68;
        case 0x15ed6cu: goto label_15ed6c;
        case 0x15ed70u: goto label_15ed70;
        case 0x15ed74u: goto label_15ed74;
        case 0x15ed78u: goto label_15ed78;
        case 0x15ed7cu: goto label_15ed7c;
        case 0x15ed80u: goto label_15ed80;
        case 0x15ed84u: goto label_15ed84;
        case 0x15ed88u: goto label_15ed88;
        case 0x15ed8cu: goto label_15ed8c;
        case 0x15ed90u: goto label_15ed90;
        case 0x15ed94u: goto label_15ed94;
        case 0x15ed98u: goto label_15ed98;
        case 0x15ed9cu: goto label_15ed9c;
        case 0x15eda0u: goto label_15eda0;
        case 0x15eda4u: goto label_15eda4;
        case 0x15eda8u: goto label_15eda8;
        case 0x15edacu: goto label_15edac;
        case 0x15edb0u: goto label_15edb0;
        case 0x15edb4u: goto label_15edb4;
        case 0x15edb8u: goto label_15edb8;
        case 0x15edbcu: goto label_15edbc;
        case 0x15edc0u: goto label_15edc0;
        case 0x15edc4u: goto label_15edc4;
        case 0x15edc8u: goto label_15edc8;
        case 0x15edccu: goto label_15edcc;
        case 0x15edd0u: goto label_15edd0;
        case 0x15edd4u: goto label_15edd4;
        case 0x15edd8u: goto label_15edd8;
        case 0x15eddcu: goto label_15eddc;
        case 0x15ede0u: goto label_15ede0;
        case 0x15ede4u: goto label_15ede4;
        case 0x15ede8u: goto label_15ede8;
        case 0x15edecu: goto label_15edec;
        case 0x15edf0u: goto label_15edf0;
        case 0x15edf4u: goto label_15edf4;
        case 0x15edf8u: goto label_15edf8;
        case 0x15edfcu: goto label_15edfc;
        case 0x15ee00u: goto label_15ee00;
        case 0x15ee04u: goto label_15ee04;
        case 0x15ee08u: goto label_15ee08;
        case 0x15ee0cu: goto label_15ee0c;
        case 0x15ee10u: goto label_15ee10;
        case 0x15ee14u: goto label_15ee14;
        case 0x15ee18u: goto label_15ee18;
        case 0x15ee1cu: goto label_15ee1c;
        case 0x15ee20u: goto label_15ee20;
        case 0x15ee24u: goto label_15ee24;
        case 0x15ee28u: goto label_15ee28;
        case 0x15ee2cu: goto label_15ee2c;
        case 0x15ee30u: goto label_15ee30;
        case 0x15ee34u: goto label_15ee34;
        case 0x15ee38u: goto label_15ee38;
        case 0x15ee3cu: goto label_15ee3c;
        case 0x15ee40u: goto label_15ee40;
        case 0x15ee44u: goto label_15ee44;
        case 0x15ee48u: goto label_15ee48;
        case 0x15ee4cu: goto label_15ee4c;
        case 0x15ee50u: goto label_15ee50;
        case 0x15ee54u: goto label_15ee54;
        case 0x15ee58u: goto label_15ee58;
        case 0x15ee5cu: goto label_15ee5c;
        case 0x15ee60u: goto label_15ee60;
        case 0x15ee64u: goto label_15ee64;
        case 0x15ee68u: goto label_15ee68;
        case 0x15ee6cu: goto label_15ee6c;
        case 0x15ee70u: goto label_15ee70;
        case 0x15ee74u: goto label_15ee74;
        case 0x15ee78u: goto label_15ee78;
        case 0x15ee7cu: goto label_15ee7c;
        case 0x15ee80u: goto label_15ee80;
        case 0x15ee84u: goto label_15ee84;
        case 0x15ee88u: goto label_15ee88;
        case 0x15ee8cu: goto label_15ee8c;
        case 0x15ee90u: goto label_15ee90;
        case 0x15ee94u: goto label_15ee94;
        case 0x15ee98u: goto label_15ee98;
        case 0x15ee9cu: goto label_15ee9c;
        case 0x15eea0u: goto label_15eea0;
        case 0x15eea4u: goto label_15eea4;
        case 0x15eea8u: goto label_15eea8;
        case 0x15eeacu: goto label_15eeac;
        case 0x15eeb0u: goto label_15eeb0;
        case 0x15eeb4u: goto label_15eeb4;
        case 0x15eeb8u: goto label_15eeb8;
        case 0x15eebcu: goto label_15eebc;
        case 0x15eec0u: goto label_15eec0;
        case 0x15eec4u: goto label_15eec4;
        case 0x15eec8u: goto label_15eec8;
        case 0x15eeccu: goto label_15eecc;
        case 0x15eed0u: goto label_15eed0;
        case 0x15eed4u: goto label_15eed4;
        case 0x15eed8u: goto label_15eed8;
        case 0x15eedcu: goto label_15eedc;
        case 0x15eee0u: goto label_15eee0;
        case 0x15eee4u: goto label_15eee4;
        case 0x15eee8u: goto label_15eee8;
        case 0x15eeecu: goto label_15eeec;
        case 0x15eef0u: goto label_15eef0;
        case 0x15eef4u: goto label_15eef4;
        case 0x15eef8u: goto label_15eef8;
        case 0x15eefcu: goto label_15eefc;
        case 0x15ef00u: goto label_15ef00;
        case 0x15ef04u: goto label_15ef04;
        case 0x15ef08u: goto label_15ef08;
        case 0x15ef0cu: goto label_15ef0c;
        case 0x15ef10u: goto label_15ef10;
        case 0x15ef14u: goto label_15ef14;
        case 0x15ef18u: goto label_15ef18;
        case 0x15ef1cu: goto label_15ef1c;
        case 0x15ef20u: goto label_15ef20;
        case 0x15ef24u: goto label_15ef24;
        case 0x15ef28u: goto label_15ef28;
        case 0x15ef2cu: goto label_15ef2c;
        case 0x15ef30u: goto label_15ef30;
        case 0x15ef34u: goto label_15ef34;
        case 0x15ef38u: goto label_15ef38;
        case 0x15ef3cu: goto label_15ef3c;
        case 0x15ef40u: goto label_15ef40;
        case 0x15ef44u: goto label_15ef44;
        case 0x15ef48u: goto label_15ef48;
        case 0x15ef4cu: goto label_15ef4c;
        case 0x15ef50u: goto label_15ef50;
        case 0x15ef54u: goto label_15ef54;
        case 0x15ef58u: goto label_15ef58;
        case 0x15ef5cu: goto label_15ef5c;
        case 0x15ef60u: goto label_15ef60;
        case 0x15ef64u: goto label_15ef64;
        case 0x15ef68u: goto label_15ef68;
        case 0x15ef6cu: goto label_15ef6c;
        case 0x15ef70u: goto label_15ef70;
        case 0x15ef74u: goto label_15ef74;
        case 0x15ef78u: goto label_15ef78;
        case 0x15ef7cu: goto label_15ef7c;
        case 0x15ef80u: goto label_15ef80;
        case 0x15ef84u: goto label_15ef84;
        case 0x15ef88u: goto label_15ef88;
        case 0x15ef8cu: goto label_15ef8c;
        case 0x15ef90u: goto label_15ef90;
        case 0x15ef94u: goto label_15ef94;
        case 0x15ef98u: goto label_15ef98;
        case 0x15ef9cu: goto label_15ef9c;
        case 0x15efa0u: goto label_15efa0;
        case 0x15efa4u: goto label_15efa4;
        case 0x15efa8u: goto label_15efa8;
        case 0x15efacu: goto label_15efac;
        case 0x15efb0u: goto label_15efb0;
        case 0x15efb4u: goto label_15efb4;
        case 0x15efb8u: goto label_15efb8;
        case 0x15efbcu: goto label_15efbc;
        case 0x15efc0u: goto label_15efc0;
        case 0x15efc4u: goto label_15efc4;
        case 0x15efc8u: goto label_15efc8;
        case 0x15efccu: goto label_15efcc;
        case 0x15efd0u: goto label_15efd0;
        case 0x15efd4u: goto label_15efd4;
        case 0x15efd8u: goto label_15efd8;
        case 0x15efdcu: goto label_15efdc;
        case 0x15efe0u: goto label_15efe0;
        case 0x15efe4u: goto label_15efe4;
        case 0x15efe8u: goto label_15efe8;
        case 0x15efecu: goto label_15efec;
        case 0x15eff0u: goto label_15eff0;
        case 0x15eff4u: goto label_15eff4;
        case 0x15eff8u: goto label_15eff8;
        case 0x15effcu: goto label_15effc;
        case 0x15f000u: goto label_15f000;
        case 0x15f004u: goto label_15f004;
        case 0x15f008u: goto label_15f008;
        case 0x15f00cu: goto label_15f00c;
        case 0x15f010u: goto label_15f010;
        case 0x15f014u: goto label_15f014;
        case 0x15f018u: goto label_15f018;
        case 0x15f01cu: goto label_15f01c;
        case 0x15f020u: goto label_15f020;
        case 0x15f024u: goto label_15f024;
        case 0x15f028u: goto label_15f028;
        case 0x15f02cu: goto label_15f02c;
        case 0x15f030u: goto label_15f030;
        case 0x15f034u: goto label_15f034;
        case 0x15f038u: goto label_15f038;
        case 0x15f03cu: goto label_15f03c;
        case 0x15f040u: goto label_15f040;
        case 0x15f044u: goto label_15f044;
        case 0x15f048u: goto label_15f048;
        case 0x15f04cu: goto label_15f04c;
        case 0x15f050u: goto label_15f050;
        case 0x15f054u: goto label_15f054;
        case 0x15f058u: goto label_15f058;
        case 0x15f05cu: goto label_15f05c;
        case 0x15f060u: goto label_15f060;
        case 0x15f064u: goto label_15f064;
        case 0x15f068u: goto label_15f068;
        case 0x15f06cu: goto label_15f06c;
        case 0x15f070u: goto label_15f070;
        case 0x15f074u: goto label_15f074;
        case 0x15f078u: goto label_15f078;
        case 0x15f07cu: goto label_15f07c;
        case 0x15f080u: goto label_15f080;
        case 0x15f084u: goto label_15f084;
        case 0x15f088u: goto label_15f088;
        case 0x15f08cu: goto label_15f08c;
        case 0x15f090u: goto label_15f090;
        case 0x15f094u: goto label_15f094;
        case 0x15f098u: goto label_15f098;
        case 0x15f09cu: goto label_15f09c;
        case 0x15f0a0u: goto label_15f0a0;
        case 0x15f0a4u: goto label_15f0a4;
        case 0x15f0a8u: goto label_15f0a8;
        case 0x15f0acu: goto label_15f0ac;
        case 0x15f0b0u: goto label_15f0b0;
        case 0x15f0b4u: goto label_15f0b4;
        case 0x15f0b8u: goto label_15f0b8;
        case 0x15f0bcu: goto label_15f0bc;
        case 0x15f0c0u: goto label_15f0c0;
        case 0x15f0c4u: goto label_15f0c4;
        case 0x15f0c8u: goto label_15f0c8;
        case 0x15f0ccu: goto label_15f0cc;
        case 0x15f0d0u: goto label_15f0d0;
        case 0x15f0d4u: goto label_15f0d4;
        default: break;
    }

    ctx->pc = 0x15eca0u;

label_15eca0:
    // 0x15eca0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x15eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_15eca4:
    // 0x15eca4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15eca8:
    // 0x15eca8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x15eca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_15ecac:
    // 0x15ecac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ecacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ecb0:
    // 0x15ecb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15ecb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ecb4:
    // 0x15ecb4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x15ecb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_15ecb8:
    // 0x15ecb8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x15ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15ecbc:
    // 0x15ecbc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15ecbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15ecc0:
    // 0x15ecc0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x15ecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_15ecc4:
    // 0x15ecc4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x15ecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_15ecc8:
    // 0x15ecc8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15ecc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15eccc:
    // 0x15eccc: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x15ecccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_15ecd0:
    // 0x15ecd0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x15ecd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ecd4:
    // 0x15ecd4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x15ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_15ecd8:
    // 0x15ecd8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x15ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_15ecdc:
    // 0x15ecdc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x15ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_15ece0:
    // 0x15ece0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15ece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_15ece4:
    // 0x15ece4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_15ece8:
    // 0x15ece8: 0xc0517d8  jal         func_145F60
label_15ecec:
    if (ctx->pc == 0x15ECECu) {
        ctx->pc = 0x15ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECE8u;
        // 0x15ecec: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ECF0u;
        goto label_15ecf0;
    }
    ctx->pc = 0x15ECE8u;
    SET_GPR_U32(ctx, 31, 0x15ECF0u);
    ctx->pc = 0x15ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ECE8u;
    // 0x15ecec: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15ECE8u, 0x15ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ECF0u;
label_15ecf0:
    // 0x15ecf0: 0xc06cfb4  jal         func_1B3ED0
label_15ecf4:
    if (ctx->pc == 0x15ECF4u) {
        ctx->pc = 0x15ECF8u;
        goto label_15ecf8;
    }
    ctx->pc = 0x15ECF0u;
    SET_GPR_U32(ctx, 31, 0x15ECF8u);
    ctx->pc = 0x1B3ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3ED0u, 0x15ECF0u, 0x15ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ECF8u;
label_15ecf8:
    // 0x15ecf8: 0xc05587e  jal         func_1561F8
label_15ecfc:
    if (ctx->pc == 0x15ECFCu) {
        ctx->pc = 0x15ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECF8u;
        // 0x15ecfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED00u;
        goto label_15ed00;
    }
    ctx->pc = 0x15ECF8u;
    SET_GPR_U32(ctx, 31, 0x15ED00u);
    ctx->pc = 0x15ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ECF8u;
    // 0x15ecfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x15ECF8u, 0x15ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED00u;
label_15ed00:
    // 0x15ed00: 0xc055888  jal         func_156220
label_15ed04:
    if (ctx->pc == 0x15ED04u) {
        ctx->pc = 0x15ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED00u;
        // 0x15ed04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED08u;
        goto label_15ed08;
    }
    ctx->pc = 0x15ED00u;
    SET_GPR_U32(ctx, 31, 0x15ED08u);
    ctx->pc = 0x15ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED00u;
    // 0x15ed04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x15ED00u, 0x15ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED08u;
label_15ed08:
    // 0x15ed08: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15ed0c:
    // 0x15ed0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x15ed0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_15ed10:
    // 0x15ed10: 0xc0e8c52  jal         func_3A3148
label_15ed14:
    if (ctx->pc == 0x15ED14u) {
        ctx->pc = 0x15ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED10u;
        // 0x15ed14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED18u;
        goto label_15ed18;
    }
    ctx->pc = 0x15ED10u;
    SET_GPR_U32(ctx, 31, 0x15ED18u);
    ctx->pc = 0x15ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED10u;
    // 0x15ed14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15ED10u, 0x15ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED18u;
label_15ed18:
    // 0x15ed18: 0xc0558b2  jal         func_1562C8
label_15ed1c:
    if (ctx->pc == 0x15ED1Cu) {
        ctx->pc = 0x15ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED18u;
        // 0x15ed1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED20u;
        goto label_15ed20;
    }
    ctx->pc = 0x15ED18u;
    SET_GPR_U32(ctx, 31, 0x15ED20u);
    ctx->pc = 0x15ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED18u;
    // 0x15ed1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x15ED18u, 0x15ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED20u;
label_15ed20:
    // 0x15ed20: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15ed24:
    // 0x15ed24: 0x8c43536c  lw          $v1, 0x536C($v0)
    ctx->pc = 0x15ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21356)));
label_15ed28:
    // 0x15ed28: 0x14730009  bne         $v1, $s3, . + 4 + (0x9 << 2)
label_15ed2c:
    if (ctx->pc == 0x15ED2Cu) {
        ctx->pc = 0x15ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED28u;
        // 0x15ed2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED30u;
        goto label_15ed30;
    }
    ctx->pc = 0x15ED28u;
    {
        const bool branch_taken_0x15ed28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x15ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED28u;
        // 0x15ed2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed28) {
            ctx->pc = 0x15ED50u;
            goto label_15ed50;
        }
    }
    ctx->pc = 0x15ED30u;
label_15ed30:
    // 0x15ed30: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15ed34:
    // 0x15ed34: 0xc0e8c6a  jal         func_3A31A8
label_15ed38:
    if (ctx->pc == 0x15ED38u) {
        ctx->pc = 0x15ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED34u;
        // 0x15ed38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED3Cu;
        goto label_15ed3c;
    }
    ctx->pc = 0x15ED34u;
    SET_GPR_U32(ctx, 31, 0x15ED3Cu);
    ctx->pc = 0x15ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED34u;
    // 0x15ed38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x15ED34u, 0x15ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED3Cu;
label_15ed3c:
    // 0x15ed3c: 0x8e2347c4  lw          $v1, 0x47C4($s1)
    ctx->pc = 0x15ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
label_15ed40:
    // 0x15ed40: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15ed44:
    // 0x15ed44: 0xc0d4456  jal         func_351158
label_15ed48:
    if (ctx->pc == 0x15ED48u) {
        ctx->pc = 0x15ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED44u;
        // 0x15ed48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED4Cu;
        goto label_15ed4c;
    }
    ctx->pc = 0x15ED44u;
    SET_GPR_U32(ctx, 31, 0x15ED4Cu);
    ctx->pc = 0x15ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED44u;
    // 0x15ed48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x15ED44u, 0x15ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED4Cu;
label_15ed4c:
    // 0x15ed4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ed50:
    // 0x15ed50: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15ed50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15ed54:
    // 0x15ed54: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x15ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_15ed58:
    // 0x15ed58: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15ed58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ed5c:
    // 0x15ed5c: 0xc062a60  jal         func_18A980
label_15ed60:
    if (ctx->pc == 0x15ED60u) {
        ctx->pc = 0x15ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED5Cu;
        // 0x15ed60: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED64u;
        goto label_15ed64;
    }
    ctx->pc = 0x15ED5Cu;
    SET_GPR_U32(ctx, 31, 0x15ED64u);
    ctx->pc = 0x15ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED5Cu;
    // 0x15ed60: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x15ED5Cu, 0x15ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED64u;
label_15ed64:
    // 0x15ed64: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x15ed64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_15ed68:
    // 0x15ed68: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15ed6c:
    // 0x15ed6c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15ed6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15ed70:
    // 0x15ed70: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15ed74:
    // 0x15ed74: 0x60f809  jalr        $v1
label_15ed78:
    if (ctx->pc == 0x15ED78u) {
        ctx->pc = 0x15ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED74u;
        // 0x15ed78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED7Cu;
        goto label_15ed7c;
    }
    ctx->pc = 0x15ED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15ED7Cu);
        ctx->pc = 0x15ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED74u;
        // 0x15ed78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ED74u, 0x15ED7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15ED7Cu;
label_15ed7c:
    // 0x15ed7c: 0xc103e28  jal         func_40F8A0
label_15ed80:
    if (ctx->pc == 0x15ED80u) {
        ctx->pc = 0x15ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED7Cu;
        // 0x15ed80: 0x8e2447c4  lw          $a0, 0x47C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED84u;
        goto label_15ed84;
    }
    ctx->pc = 0x15ED7Cu;
    SET_GPR_U32(ctx, 31, 0x15ED84u);
    ctx->pc = 0x15ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED7Cu;
    // 0x15ed80: 0x8e2447c4  lw          $a0, 0x47C4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x15ED7Cu, 0x15ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED84u;
label_15ed84:
    // 0x15ed84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15ed84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ed88:
    // 0x15ed88: 0x10730013  beq         $v1, $s3, . + 4 + (0x13 << 2)
label_15ed8c:
    if (ctx->pc == 0x15ED8Cu) {
        ctx->pc = 0x15ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED88u;
        // 0x15ed8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED90u;
        goto label_15ed90;
    }
    ctx->pc = 0x15ED88u;
    {
        const bool branch_taken_0x15ed88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x15ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED88u;
        // 0x15ed8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed88) {
            ctx->pc = 0x15EDD8u;
            goto label_15edd8;
        }
    }
    ctx->pc = 0x15ED90u;
label_15ed90:
    // 0x15ed90: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_15ed94:
    if (ctx->pc == 0x15ED94u) {
        ctx->pc = 0x15ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED90u;
        // 0x15ed94: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED98u;
        goto label_15ed98;
    }
    ctx->pc = 0x15ED90u;
    {
        const bool branch_taken_0x15ed90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ed90) {
            ctx->pc = 0x15ED94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15ED90u;
            // 0x15ed94: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EDDCu;
            goto label_15eddc;
        }
    }
    ctx->pc = 0x15ED98u;
label_15ed98:
    // 0x15ed98: 0x8e2447c4  lw          $a0, 0x47C4($s1)
    ctx->pc = 0x15ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
label_15ed9c:
    // 0x15ed9c: 0xc103e14  jal         func_40F850
label_15eda0:
    if (ctx->pc == 0x15EDA0u) {
        ctx->pc = 0x15EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED9Cu;
        // 0x15eda0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDA4u;
        goto label_15eda4;
    }
    ctx->pc = 0x15ED9Cu;
    SET_GPR_U32(ctx, 31, 0x15EDA4u);
    ctx->pc = 0x15EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED9Cu;
    // 0x15eda0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F850u, 0x15ED9Cu, 0x15EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDA4u;
label_15eda4:
    // 0x15eda4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15eda8:
    // 0x15eda8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x15eda8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_15edac:
    // 0x15edac: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x15edacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_15edb0:
    // 0x15edb0: 0xa0f809  jalr        $a1
label_15edb4:
    if (ctx->pc == 0x15EDB4u) {
        ctx->pc = 0x15EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDB0u;
        // 0x15edb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDB8u;
        goto label_15edb8;
    }
    ctx->pc = 0x15EDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15EDB8u);
        ctx->pc = 0x15EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDB0u;
        // 0x15edb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EDB0u, 0x15EDB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EDB8u;
label_15edb8:
    // 0x15edb8: 0x8e2447c4  lw          $a0, 0x47C4($s1)
    ctx->pc = 0x15edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
label_15edbc:
    // 0x15edbc: 0xc103e14  jal         func_40F850
label_15edc0:
    if (ctx->pc == 0x15EDC0u) {
        ctx->pc = 0x15EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDBCu;
        // 0x15edc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDC4u;
        goto label_15edc4;
    }
    ctx->pc = 0x15EDBCu;
    SET_GPR_U32(ctx, 31, 0x15EDC4u);
    ctx->pc = 0x15EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDBCu;
    // 0x15edc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F850u, 0x15EDBCu, 0x15EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDC4u;
label_15edc4:
    // 0x15edc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15edc8:
    // 0x15edc8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x15edc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_15edcc:
    // 0x15edcc: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x15edccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_15edd0:
    // 0x15edd0: 0xa0f809  jalr        $a1
label_15edd4:
    if (ctx->pc == 0x15EDD4u) {
        ctx->pc = 0x15EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDD0u;
        // 0x15edd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDD8u;
        goto label_15edd8;
    }
    ctx->pc = 0x15EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15EDD8u);
        ctx->pc = 0x15EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDD0u;
        // 0x15edd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EDD0u, 0x15EDD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EDD8u;
label_15edd8:
    // 0x15edd8: 0x8ec4cd4c  lw          $a0, -0x32B4($s6)
    ctx->pc = 0x15edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_15eddc:
    // 0x15eddc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15eddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ede0:
    // 0x15ede0: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_15ede4:
    // 0x15ede4: 0xc06181a  jal         func_186068
label_15ede8:
    if (ctx->pc == 0x15EDE8u) {
        ctx->pc = 0x15EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDE4u;
        // 0x15ede8: 0x26540020  addiu       $s4, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDECu;
        goto label_15edec;
    }
    ctx->pc = 0x15EDE4u;
    SET_GPR_U32(ctx, 31, 0x15EDECu);
    ctx->pc = 0x15EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDE4u;
    // 0x15ede8: 0x26540020  addiu       $s4, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x15EDE4u, 0x15EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDECu;
label_15edec:
    // 0x15edec: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x15edecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15edf0:
    // 0x15edf0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x15edf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15edf4:
    // 0x15edf4: 0x0  nop
    ctx->pc = 0x15edf4u;
    // NOP
label_15edf8:
    // 0x15edf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15edf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15edfc:
    // 0x15edfc: 0xc047e6c  jal         func_11F9B0
label_15ee00:
    if (ctx->pc == 0x15EE00u) {
        ctx->pc = 0x15EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDFCu;
        // 0x15ee00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE04u;
        goto label_15ee04;
    }
    ctx->pc = 0x15EDFCu;
    SET_GPR_U32(ctx, 31, 0x15EE04u);
    ctx->pc = 0x15EE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDFCu;
    // 0x15ee00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15EDFCu, 0x15EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE04u;
label_15ee04:
    // 0x15ee04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ee08:
    // 0x15ee08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15ee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15ee0c:
    // 0x15ee0c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15ee0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_15ee10:
    // 0x15ee10: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15ee14:
    // 0x15ee14: 0xc0f809  jalr        $a2
label_15ee18:
    if (ctx->pc == 0x15EE18u) {
        ctx->pc = 0x15EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE14u;
        // 0x15ee18: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE1Cu;
        goto label_15ee1c;
    }
    ctx->pc = 0x15EE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15EE1Cu);
        ctx->pc = 0x15EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE14u;
        // 0x15ee18: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EE14u, 0x15EE1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EE1Cu;
label_15ee1c:
    // 0x15ee1c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15ee1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15ee20:
    // 0x15ee20: 0x2e240002  sltiu       $a0, $s1, 0x2
    ctx->pc = 0x15ee20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15ee24:
    // 0x15ee24: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x15ee24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_15ee28:
    // 0x15ee28: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x15ee28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15ee2c:
    // 0x15ee2c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_15ee30:
    // 0x15ee30: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_15ee34:
    if (ctx->pc == 0x15EE34u) {
        ctx->pc = 0x15EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE30u;
        // 0x15ee34: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE38u;
        goto label_15ee38;
    }
    ctx->pc = 0x15EE30u;
    {
        const bool branch_taken_0x15ee30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE30u;
        // 0x15ee34: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee30) {
            ctx->pc = 0x15EDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15edf8;
        }
    }
    ctx->pc = 0x15EE38u;
label_15ee38:
    // 0x15ee38: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x15ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_15ee3c:
    // 0x15ee3c: 0xc043e04  jal         func_10F810
label_15ee40:
    if (ctx->pc == 0x15EE40u) {
        ctx->pc = 0x15EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE3Cu;
        // 0x15ee40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE44u;
        goto label_15ee44;
    }
    ctx->pc = 0x15EE3Cu;
    SET_GPR_U32(ctx, 31, 0x15EE44u);
    ctx->pc = 0x15EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE3Cu;
    // 0x15ee40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15EE3Cu, 0x15EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE44u;
label_15ee44:
    // 0x15ee44: 0xc07c8f0  jal         func_1F23C0
label_15ee48:
    if (ctx->pc == 0x15EE48u) {
        ctx->pc = 0x15EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE44u;
        // 0x15ee48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE4Cu;
        goto label_15ee4c;
    }
    ctx->pc = 0x15EE44u;
    SET_GPR_U32(ctx, 31, 0x15EE4Cu);
    ctx->pc = 0x15EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE44u;
    // 0x15ee48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F23C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F23C0u, 0x15EE44u, 0x15EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE4Cu;
label_15ee4c:
    // 0x15ee4c: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
label_15ee50:
    if (ctx->pc == 0x15EE50u) {
        ctx->pc = 0x15EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE4Cu;
        // 0x15ee50: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE54u;
        goto label_15ee54;
    }
    ctx->pc = 0x15EE4Cu;
    {
        const bool branch_taken_0x15ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee4c) {
            ctx->pc = 0x15EE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EE4Cu;
            // 0x15ee50: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EF64u;
            goto label_15ef64;
        }
    }
    ctx->pc = 0x15EE54u;
label_15ee54:
    // 0x15ee54: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x15ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_15ee58:
    // 0x15ee58: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_15ee5c:
    if (ctx->pc == 0x15EE5Cu) {
        ctx->pc = 0x15EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE58u;
        // 0x15ee5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE60u;
        goto label_15ee60;
    }
    ctx->pc = 0x15EE58u;
    {
        const bool branch_taken_0x15ee58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE58u;
        // 0x15ee5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee58) {
            ctx->pc = 0x15EF54u;
            goto label_15ef54;
        }
    }
    ctx->pc = 0x15EE60u;
label_15ee60:
    // 0x15ee60: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x15ee60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_15ee64:
    // 0x15ee64: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x15ee64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_15ee68:
    // 0x15ee68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15ee68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15ee6c:
    // 0x15ee6c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x15ee6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15ee70:
    // 0x15ee70: 0xc062c5a  jal         func_18B168
label_15ee74:
    if (ctx->pc == 0x15EE74u) {
        ctx->pc = 0x15EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE70u;
        // 0x15ee74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE78u;
        goto label_15ee78;
    }
    ctx->pc = 0x15EE70u;
    SET_GPR_U32(ctx, 31, 0x15EE78u);
    ctx->pc = 0x15EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE70u;
    // 0x15ee74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15EE70u, 0x15EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE78u;
label_15ee78:
    // 0x15ee78: 0xc047e6c  jal         func_11F9B0
label_15ee7c:
    if (ctx->pc == 0x15EE7Cu) {
        ctx->pc = 0x15EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE78u;
        // 0x15ee7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE80u;
        goto label_15ee80;
    }
    ctx->pc = 0x15EE78u;
    SET_GPR_U32(ctx, 31, 0x15EE80u);
    ctx->pc = 0x15EE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE78u;
    // 0x15ee7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15EE78u, 0x15EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE80u;
label_15ee80:
    // 0x15ee80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ee84:
    // 0x15ee84: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x15ee84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_15ee88:
    // 0x15ee88: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x15ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_15ee8c:
    // 0x15ee8c: 0xa0f809  jalr        $a1
label_15ee90:
    if (ctx->pc == 0x15EE90u) {
        ctx->pc = 0x15EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE8Cu;
        // 0x15ee90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE94u;
        goto label_15ee94;
    }
    ctx->pc = 0x15EE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15EE94u);
        ctx->pc = 0x15EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE8Cu;
        // 0x15ee90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EE8Cu, 0x15EE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EE94u;
label_15ee94:
    // 0x15ee94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15ee94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15ee98:
    // 0x15ee98: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x15ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_15ee9c:
    // 0x15ee9c: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x15ee9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
label_15eea0:
    // 0x15eea0: 0x34213aac  ori         $at, $at, 0x3AAC
    ctx->pc = 0x15eea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15020);
label_15eea4:
    // 0x15eea4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x15eea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15eea8:
    // 0x15eea8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15eeac:
    // 0x15eeac: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x15eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_15eeb0:
    // 0x15eeb0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x15eeb0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_15eeb4:
    // 0x15eeb4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x15eeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_15eeb8:
    // 0x15eeb8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15eeb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15eebc:
    // 0x15eebc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x15eebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_15eec0:
    // 0x15eec0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x15eec0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_15eec4:
    // 0x15eec4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x15eec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15eec8:
    // 0x15eec8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x15eec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15eecc:
    // 0x15eecc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x15eeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15eed0:
    // 0x15eed0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15eed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_15eed4:
    // 0x15eed4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x15eed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_15eed8:
    // 0x15eed8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x15eed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_15eedc:
    // 0x15eedc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x15eedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_15eee0:
    // 0x15eee0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x15eee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_15eee4:
    // 0x15eee4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x15eee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_15eee8:
    // 0x15eee8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15eee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15eeec:
    // 0x15eeec: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x15eeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_15eef0:
    // 0x15eef0: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x15eef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_15eef4:
    // 0x15eef4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x15eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_15eef8:
    // 0x15eef8: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x15eef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15eefc:
    // 0x15eefc: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x15eefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ef00:
    // 0x15ef00: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x15ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_15ef04:
    // 0x15ef04: 0xc046f12  jal         func_11BC48
label_15ef08:
    if (ctx->pc == 0x15EF08u) {
        ctx->pc = 0x15EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF04u;
        // 0x15ef08: 0x2484fac8  addiu       $a0, $a0, -0x538 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF0Cu;
        goto label_15ef0c;
    }
    ctx->pc = 0x15EF04u;
    SET_GPR_U32(ctx, 31, 0x15EF0Cu);
    ctx->pc = 0x15EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF04u;
    // 0x15ef08: 0x2484fac8  addiu       $a0, $a0, -0x538 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BC48u, 0x15EF04u, 0x15EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF0Cu;
label_15ef0c:
    // 0x15ef0c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x15ef0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_15ef10:
    // 0x15ef10: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_15ef14:
    // 0x15ef14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ef14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ef18:
    // 0x15ef18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ef18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ef1c:
    // 0x15ef1c: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x15ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_15ef20:
    // 0x15ef20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15ef20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15ef24:
    // 0x15ef24: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x15ef24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_15ef28:
    // 0x15ef28: 0xc046ddc  jal         func_11B770
label_15ef2c:
    if (ctx->pc == 0x15EF2Cu) {
        ctx->pc = 0x15EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF28u;
        // 0x15ef2c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF30u;
        goto label_15ef30;
    }
    ctx->pc = 0x15EF28u;
    SET_GPR_U32(ctx, 31, 0x15EF30u);
    ctx->pc = 0x15EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF28u;
    // 0x15ef2c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B770u, 0x15EF28u, 0x15EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF30u;
label_15ef30:
    // 0x15ef30: 0xc07c71e  jal         func_1F1C78
label_15ef34:
    if (ctx->pc == 0x15EF34u) {
        ctx->pc = 0x15EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF30u;
        // 0x15ef34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF38u;
        goto label_15ef38;
    }
    ctx->pc = 0x15EF30u;
    SET_GPR_U32(ctx, 31, 0x15EF38u);
    ctx->pc = 0x15EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF30u;
    // 0x15ef34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1C78u, 0x15EF30u, 0x15EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF38u;
label_15ef38:
    // 0x15ef38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ef3c:
    // 0x15ef3c: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x15ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_15ef40:
    // 0x15ef40: 0x8c44cce4  lw          $a0, -0x331C($v0)
    ctx->pc = 0x15ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
label_15ef44:
    // 0x15ef44: 0xc05fa98  jal         func_17EA60
label_15ef48:
    if (ctx->pc == 0x15EF48u) {
        ctx->pc = 0x15EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF44u;
        // 0x15ef48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF4Cu;
        goto label_15ef4c;
    }
    ctx->pc = 0x15EF44u;
    SET_GPR_U32(ctx, 31, 0x15EF4Cu);
    ctx->pc = 0x15EF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF44u;
    // 0x15ef48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA60u, 0x15EF44u, 0x15EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF4Cu;
label_15ef4c:
    // 0x15ef4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_15ef50:
    if (ctx->pc == 0x15EF50u) {
        ctx->pc = 0x15EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF4Cu;
        // 0x15ef50: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF54u;
        goto label_15ef54;
    }
    ctx->pc = 0x15EF4Cu;
    {
        const bool branch_taken_0x15ef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF4Cu;
        // 0x15ef50: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef4c) {
            ctx->pc = 0x15EF64u;
            goto label_15ef64;
        }
    }
    ctx->pc = 0x15EF54u;
label_15ef54:
    // 0x15ef54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ef54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ef58:
    // 0x15ef58: 0xc05fa98  jal         func_17EA60
label_15ef5c:
    if (ctx->pc == 0x15EF5Cu) {
        ctx->pc = 0x15EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF58u;
        // 0x15ef5c: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF60u;
        goto label_15ef60;
    }
    ctx->pc = 0x15EF58u;
    SET_GPR_U32(ctx, 31, 0x15EF60u);
    ctx->pc = 0x15EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF58u;
    // 0x15ef5c: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA60u, 0x15EF58u, 0x15EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF60u;
label_15ef60:
    // 0x15ef60: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15ef64:
    // 0x15ef64: 0xc06ba0a  jal         func_1AE828
label_15ef68:
    if (ctx->pc == 0x15EF68u) {
        ctx->pc = 0x15EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF64u;
        // 0x15ef68: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF6Cu;
        goto label_15ef6c;
    }
    ctx->pc = 0x15EF64u;
    SET_GPR_U32(ctx, 31, 0x15EF6Cu);
    ctx->pc = 0x15EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF64u;
    // 0x15ef68: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x15EF64u, 0x15EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF6Cu;
label_15ef6c:
    // 0x15ef6c: 0xc07c6b2  jal         func_1F1AC8
label_15ef70:
    if (ctx->pc == 0x15EF70u) {
        ctx->pc = 0x15EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF6Cu;
        // 0x15ef70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF74u;
        goto label_15ef74;
    }
    ctx->pc = 0x15EF6Cu;
    SET_GPR_U32(ctx, 31, 0x15EF74u);
    ctx->pc = 0x15EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF6Cu;
    // 0x15ef70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1AC8u, 0x15EF6Cu, 0x15EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF74u;
label_15ef74:
    // 0x15ef74: 0xc07f87a  jal         func_1FE1E8
label_15ef78:
    if (ctx->pc == 0x15EF78u) {
        ctx->pc = 0x15EF7Cu;
        goto label_15ef7c;
    }
    ctx->pc = 0x15EF74u;
    SET_GPR_U32(ctx, 31, 0x15EF7Cu);
    ctx->pc = 0x1FE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1E8u, 0x15EF74u, 0x15EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF7Cu;
label_15ef7c:
    // 0x15ef7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_15ef80:
    if (ctx->pc == 0x15EF80u) {
        ctx->pc = 0x15EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF7Cu;
        // 0x15ef80: 0x8e4300e0  lw          $v1, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF84u;
        goto label_15ef84;
    }
    ctx->pc = 0x15EF7Cu;
    {
        const bool branch_taken_0x15ef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ef7c) {
            ctx->pc = 0x15EF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EF7Cu;
            // 0x15ef80: 0x8e4300e0  lw          $v1, 0xE0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EF98u;
            goto label_15ef98;
        }
    }
    ctx->pc = 0x15EF84u;
label_15ef84:
    // 0x15ef84: 0xc07f882  jal         func_1FE208
label_15ef88:
    if (ctx->pc == 0x15EF88u) {
        ctx->pc = 0x15EF8Cu;
        goto label_15ef8c;
    }
    ctx->pc = 0x15EF84u;
    SET_GPR_U32(ctx, 31, 0x15EF8Cu);
    ctx->pc = 0x1FE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE208u, 0x15EF84u, 0x15EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF8Cu;
label_15ef8c:
    // 0x15ef8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15ef90:
    if (ctx->pc == 0x15EF90u) {
        ctx->pc = 0x15EF94u;
        goto label_15ef94;
    }
    ctx->pc = 0x15EF8Cu;
    {
        const bool branch_taken_0x15ef8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef8c) {
            ctx->pc = 0x15EFA8u;
            goto label_15efa8;
        }
    }
    ctx->pc = 0x15EF94u;
label_15ef94:
    // 0x15ef94: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x15ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_15ef98:
    // 0x15ef98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15ef9c:
    // 0x15ef9c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_15efa0:
    if (ctx->pc == 0x15EFA0u) {
        ctx->pc = 0x15EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF9Cu;
        // 0x15efa0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFA4u;
        goto label_15efa4;
    }
    ctx->pc = 0x15EF9Cu;
    {
        const bool branch_taken_0x15ef9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF9Cu;
        // 0x15efa0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef9c) {
            ctx->pc = 0x15EFA8u;
            goto label_15efa8;
        }
    }
    ctx->pc = 0x15EFA4u;
label_15efa4:
    // 0x15efa4: 0xac405db8  sw          $zero, 0x5DB8($v0)
    ctx->pc = 0x15efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23992), GPR_U32(ctx, 0));
label_15efa8:
    // 0x15efa8: 0xc061748  jal         func_185D20
label_15efac:
    if (ctx->pc == 0x15EFACu) {
        ctx->pc = 0x15EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFA8u;
        // 0x15efac: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFB0u;
        goto label_15efb0;
    }
    ctx->pc = 0x15EFA8u;
    SET_GPR_U32(ctx, 31, 0x15EFB0u);
    ctx->pc = 0x15EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFA8u;
    // 0x15efac: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x15EFA8u, 0x15EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFB0u;
label_15efb0:
    // 0x15efb0: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x15efb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_15efb4:
    // 0x15efb4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x15efb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_15efb8:
    // 0x15efb8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15efbc:
    // 0x15efbc: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x15efbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_15efc0:
    // 0x15efc0: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x15efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_15efc4:
    // 0x15efc4: 0x60f809  jalr        $v1
label_15efc8:
    if (ctx->pc == 0x15EFC8u) {
        ctx->pc = 0x15EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC4u;
        // 0x15efc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFCCu;
        goto label_15efcc;
    }
    ctx->pc = 0x15EFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EFCCu);
        ctx->pc = 0x15EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC4u;
        // 0x15efc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFC4u, 0x15EFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EFCCu;
label_15efcc:
    // 0x15efcc: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x15efccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_15efd0:
    // 0x15efd0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15efd4:
    // 0x15efd4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15efd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15efd8:
    // 0x15efd8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15efdc:
    // 0x15efdc: 0x60f809  jalr        $v1
label_15efe0:
    if (ctx->pc == 0x15EFE0u) {
        ctx->pc = 0x15EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFDCu;
        // 0x15efe0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFE4u;
        goto label_15efe4;
    }
    ctx->pc = 0x15EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EFE4u);
        ctx->pc = 0x15EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFDCu;
        // 0x15efe0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFDCu, 0x15EFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EFE4u;
label_15efe4:
    // 0x15efe4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15efe8:
    // 0x15efe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15efe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15efec:
    // 0x15efec: 0xc0552b8  jal         func_154AE0
label_15eff0:
    if (ctx->pc == 0x15EFF0u) {
        ctx->pc = 0x15EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFECu;
        // 0x15eff0: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFF4u;
        goto label_15eff4;
    }
    ctx->pc = 0x15EFECu;
    SET_GPR_U32(ctx, 31, 0x15EFF4u);
    ctx->pc = 0x15EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFECu;
    // 0x15eff0: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15EFECu, 0x15EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFF4u;
label_15eff4:
    // 0x15eff4: 0xc055880  jal         func_156200
label_15eff8:
    if (ctx->pc == 0x15EFF8u) {
        ctx->pc = 0x15EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFF4u;
        // 0x15eff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFFCu;
        goto label_15effc;
    }
    ctx->pc = 0x15EFF4u;
    SET_GPR_U32(ctx, 31, 0x15EFFCu);
    ctx->pc = 0x15EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFF4u;
    // 0x15eff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x15EFF4u, 0x15EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFFCu;
label_15effc:
    // 0x15effc: 0xc055a70  jal         func_1569C0
label_15f000:
    if (ctx->pc == 0x15F000u) {
        ctx->pc = 0x15F004u;
        goto label_15f004;
    }
    ctx->pc = 0x15EFFCu;
    SET_GPR_U32(ctx, 31, 0x15F004u);
    ctx->pc = 0x1569C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569C0u, 0x15EFFCu, 0x15F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F004u;
label_15f004:
    // 0x15f004: 0xc07f88a  jal         func_1FE228
label_15f008:
    if (ctx->pc == 0x15F008u) {
        ctx->pc = 0x15F00Cu;
        goto label_15f00c;
    }
    ctx->pc = 0x15F004u;
    SET_GPR_U32(ctx, 31, 0x15F00Cu);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x15F004u, 0x15F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F00Cu;
label_15f00c:
    // 0x15f00c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_15f010:
    if (ctx->pc == 0x15F010u) {
        ctx->pc = 0x15F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F00Cu;
        // 0x15f010: 0x8e4200dc  lw          $v0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F014u;
        goto label_15f014;
    }
    ctx->pc = 0x15F00Cu;
    {
        const bool branch_taken_0x15f00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F00Cu;
        // 0x15f010: 0x8e4200dc  lw          $v0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f00c) {
            ctx->pc = 0x15F06Cu;
            goto label_15f06c;
        }
    }
    ctx->pc = 0x15F014u;
label_15f014:
    // 0x15f014: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_15f018:
    if (ctx->pc == 0x15F018u) {
        ctx->pc = 0x15F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F014u;
        // 0x15f018: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F01Cu;
        goto label_15f01c;
    }
    ctx->pc = 0x15F014u;
    {
        const bool branch_taken_0x15f014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F014u;
        // 0x15f018: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f014) {
            ctx->pc = 0x15F074u;
            goto label_15f074;
        }
    }
    ctx->pc = 0x15F01Cu;
label_15f01c:
    // 0x15f01c: 0xc07f87a  jal         func_1FE1E8
label_15f020:
    if (ctx->pc == 0x15F020u) {
        ctx->pc = 0x15F024u;
        goto label_15f024;
    }
    ctx->pc = 0x15F01Cu;
    SET_GPR_U32(ctx, 31, 0x15F024u);
    ctx->pc = 0x1FE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1E8u, 0x15F01Cu, 0x15F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F024u;
label_15f024:
    // 0x15f024: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_15f028:
    if (ctx->pc == 0x15F028u) {
        ctx->pc = 0x15F02Cu;
        goto label_15f02c;
    }
    ctx->pc = 0x15F024u;
    {
        const bool branch_taken_0x15f024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f024) {
            ctx->pc = 0x15F04Cu;
            goto label_15f04c;
        }
    }
    ctx->pc = 0x15F02Cu;
label_15f02c:
    // 0x15f02c: 0xc04414a  jal         func_110528
label_15f030:
    if (ctx->pc == 0x15F030u) {
        ctx->pc = 0x15F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F02Cu;
        // 0x15f030: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F034u;
        goto label_15f034;
    }
    ctx->pc = 0x15F02Cu;
    SET_GPR_U32(ctx, 31, 0x15F034u);
    ctx->pc = 0x15F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F02Cu;
    // 0x15f030: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110528u, 0x15F02Cu, 0x15F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F034u;
label_15f034:
    // 0x15f034: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x15f034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_15f038:
    // 0x15f038: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15f038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15f03c:
    // 0x15f03c: 0xc062c5a  jal         func_18B168
label_15f040:
    if (ctx->pc == 0x15F040u) {
        ctx->pc = 0x15F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F03Cu;
        // 0x15f040: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F044u;
        goto label_15f044;
    }
    ctx->pc = 0x15F03Cu;
    SET_GPR_U32(ctx, 31, 0x15F044u);
    ctx->pc = 0x15F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F03Cu;
    // 0x15f040: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15F03Cu, 0x15F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F044u;
label_15f044:
    // 0x15f044: 0x10000007  b           . + 4 + (0x7 << 2)
label_15f048:
    if (ctx->pc == 0x15F048u) {
        ctx->pc = 0x15F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F044u;
        // 0x15f048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F04Cu;
        goto label_15f04c;
    }
    ctx->pc = 0x15F044u;
    {
        const bool branch_taken_0x15f044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F044u;
        // 0x15f048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f044) {
            ctx->pc = 0x15F064u;
            goto label_15f064;
        }
    }
    ctx->pc = 0x15F04Cu;
label_15f04c:
    // 0x15f04c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x15f04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_15f050:
    // 0x15f050: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x15f050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_15f054:
    // 0x15f054: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15f054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15f058:
    // 0x15f058: 0xc062c5a  jal         func_18B168
label_15f05c:
    if (ctx->pc == 0x15F05Cu) {
        ctx->pc = 0x15F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F058u;
        // 0x15f05c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F060u;
        goto label_15f060;
    }
    ctx->pc = 0x15F058u;
    SET_GPR_U32(ctx, 31, 0x15F060u);
    ctx->pc = 0x15F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F058u;
    // 0x15f05c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15F058u, 0x15F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F060u;
label_15f060:
    // 0x15f060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f064:
    // 0x15f064: 0x10000007  b           . + 4 + (0x7 << 2)
label_15f068:
    if (ctx->pc == 0x15F068u) {
        ctx->pc = 0x15F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F064u;
        // 0x15f068: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F06Cu;
        goto label_15f06c;
    }
    ctx->pc = 0x15F064u;
    {
        const bool branch_taken_0x15f064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F064u;
        // 0x15f068: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f064) {
            ctx->pc = 0x15F084u;
            goto label_15f084;
        }
    }
    ctx->pc = 0x15F06Cu;
label_15f06c:
    // 0x15f06c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15f070:
    if (ctx->pc == 0x15F070u) {
        ctx->pc = 0x15F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F06Cu;
        // 0x15f070: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F074u;
        goto label_15f074;
    }
    ctx->pc = 0x15F06Cu;
    {
        const bool branch_taken_0x15f06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F06Cu;
        // 0x15f070: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f06c) {
            ctx->pc = 0x15F084u;
            goto label_15f084;
        }
    }
    ctx->pc = 0x15F074u;
label_15f074:
    // 0x15f074: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x15f074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_15f078:
    // 0x15f078: 0x8c6401d4  lw          $a0, 0x1D4($v1)
    ctx->pc = 0x15f078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_15f07c:
    // 0x15f07c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_15f080:
    if (ctx->pc == 0x15F080u) {
        ctx->pc = 0x15F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F07Cu;
        // 0x15f080: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F084u;
        goto label_15f084;
    }
    ctx->pc = 0x15F07Cu;
    {
        const bool branch_taken_0x15f07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f07c) {
            ctx->pc = 0x15F080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F07Cu;
            // 0x15f080: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F084u;
            goto label_15f084;
        }
    }
    ctx->pc = 0x15F084u;
label_15f084:
    // 0x15f084: 0xc07f88a  jal         func_1FE228
label_15f088:
    if (ctx->pc == 0x15F088u) {
        ctx->pc = 0x15F08Cu;
        goto label_15f08c;
    }
    ctx->pc = 0x15F084u;
    SET_GPR_U32(ctx, 31, 0x15F08Cu);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x15F084u, 0x15F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F08Cu;
label_15f08c:
    // 0x15f08c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15f090:
    if (ctx->pc == 0x15F090u) {
        ctx->pc = 0x15F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F08Cu;
        // 0x15f090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F094u;
        goto label_15f094;
    }
    ctx->pc = 0x15F08Cu;
    {
        const bool branch_taken_0x15f08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F08Cu;
        // 0x15f090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f08c) {
            ctx->pc = 0x15F0A4u;
            goto label_15f0a4;
        }
    }
    ctx->pc = 0x15F094u;
label_15f094:
    // 0x15f094: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x15f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_15f098:
    // 0x15f098: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_15f09c:
    if (ctx->pc == 0x15F09Cu) {
        ctx->pc = 0x15F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F098u;
        // 0x15f09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0A0u;
        goto label_15f0a0;
    }
    ctx->pc = 0x15F098u;
    {
        const bool branch_taken_0x15f098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F098u;
        // 0x15f09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f098) {
            ctx->pc = 0x15F0A4u;
            goto label_15f0a4;
        }
    }
    ctx->pc = 0x15F0A0u;
label_15f0a0:
    // 0x15f0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f0a4:
    // 0x15f0a4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x15f0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_15f0a8:
    // 0x15f0a8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x15f0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_15f0ac:
    // 0x15f0ac: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x15f0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15f0b0:
    // 0x15f0b0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x15f0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15f0b4:
    // 0x15f0b4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x15f0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15f0b8:
    // 0x15f0b8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x15f0b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15f0bc:
    // 0x15f0bc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x15f0bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15f0c0:
    // 0x15f0c0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x15f0c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15f0c4:
    // 0x15f0c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15f0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15f0c8:
    // 0x15f0c8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x15f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_15f0cc:
    // 0x15f0cc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x15f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15f0d0:
    // 0x15f0d0: 0x3e00008  jr          $ra
label_15f0d4:
    if (ctx->pc == 0x15F0D4u) {
        ctx->pc = 0x15F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0D0u;
        // 0x15f0d4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0D8u;
        goto label_fallthrough_0x15f0d0;
    }
    ctx->pc = 0x15F0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0D0u;
        // 0x15f0d4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15f0d0:
    ctx->pc = 0x15F0D8u;
}
