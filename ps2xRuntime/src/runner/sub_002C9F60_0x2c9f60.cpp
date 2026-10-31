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

// Function: sub_002C9F60
// Address: 0x2c9f60 - 0x2ca260
void sub_002C9F60_0x2c9f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9F60_0x2c9f60");
#endif

    switch (ctx->pc) {
        case 0x2c9f60u: goto label_2c9f60;
        case 0x2c9f64u: goto label_2c9f64;
        case 0x2c9f68u: goto label_2c9f68;
        case 0x2c9f6cu: goto label_2c9f6c;
        case 0x2c9f70u: goto label_2c9f70;
        case 0x2c9f74u: goto label_2c9f74;
        case 0x2c9f78u: goto label_2c9f78;
        case 0x2c9f7cu: goto label_2c9f7c;
        case 0x2c9f80u: goto label_2c9f80;
        case 0x2c9f84u: goto label_2c9f84;
        case 0x2c9f88u: goto label_2c9f88;
        case 0x2c9f8cu: goto label_2c9f8c;
        case 0x2c9f90u: goto label_2c9f90;
        case 0x2c9f94u: goto label_2c9f94;
        case 0x2c9f98u: goto label_2c9f98;
        case 0x2c9f9cu: goto label_2c9f9c;
        case 0x2c9fa0u: goto label_2c9fa0;
        case 0x2c9fa4u: goto label_2c9fa4;
        case 0x2c9fa8u: goto label_2c9fa8;
        case 0x2c9facu: goto label_2c9fac;
        case 0x2c9fb0u: goto label_2c9fb0;
        case 0x2c9fb4u: goto label_2c9fb4;
        case 0x2c9fb8u: goto label_2c9fb8;
        case 0x2c9fbcu: goto label_2c9fbc;
        case 0x2c9fc0u: goto label_2c9fc0;
        case 0x2c9fc4u: goto label_2c9fc4;
        case 0x2c9fc8u: goto label_2c9fc8;
        case 0x2c9fccu: goto label_2c9fcc;
        case 0x2c9fd0u: goto label_2c9fd0;
        case 0x2c9fd4u: goto label_2c9fd4;
        case 0x2c9fd8u: goto label_2c9fd8;
        case 0x2c9fdcu: goto label_2c9fdc;
        case 0x2c9fe0u: goto label_2c9fe0;
        case 0x2c9fe4u: goto label_2c9fe4;
        case 0x2c9fe8u: goto label_2c9fe8;
        case 0x2c9fecu: goto label_2c9fec;
        case 0x2c9ff0u: goto label_2c9ff0;
        case 0x2c9ff4u: goto label_2c9ff4;
        case 0x2c9ff8u: goto label_2c9ff8;
        case 0x2c9ffcu: goto label_2c9ffc;
        case 0x2ca000u: goto label_2ca000;
        case 0x2ca004u: goto label_2ca004;
        case 0x2ca008u: goto label_2ca008;
        case 0x2ca00cu: goto label_2ca00c;
        case 0x2ca010u: goto label_2ca010;
        case 0x2ca014u: goto label_2ca014;
        case 0x2ca018u: goto label_2ca018;
        case 0x2ca01cu: goto label_2ca01c;
        case 0x2ca020u: goto label_2ca020;
        case 0x2ca024u: goto label_2ca024;
        case 0x2ca028u: goto label_2ca028;
        case 0x2ca02cu: goto label_2ca02c;
        case 0x2ca030u: goto label_2ca030;
        case 0x2ca034u: goto label_2ca034;
        case 0x2ca038u: goto label_2ca038;
        case 0x2ca03cu: goto label_2ca03c;
        case 0x2ca040u: goto label_2ca040;
        case 0x2ca044u: goto label_2ca044;
        case 0x2ca048u: goto label_2ca048;
        case 0x2ca04cu: goto label_2ca04c;
        case 0x2ca050u: goto label_2ca050;
        case 0x2ca054u: goto label_2ca054;
        case 0x2ca058u: goto label_2ca058;
        case 0x2ca05cu: goto label_2ca05c;
        case 0x2ca060u: goto label_2ca060;
        case 0x2ca064u: goto label_2ca064;
        case 0x2ca068u: goto label_2ca068;
        case 0x2ca06cu: goto label_2ca06c;
        case 0x2ca070u: goto label_2ca070;
        case 0x2ca074u: goto label_2ca074;
        case 0x2ca078u: goto label_2ca078;
        case 0x2ca07cu: goto label_2ca07c;
        case 0x2ca080u: goto label_2ca080;
        case 0x2ca084u: goto label_2ca084;
        case 0x2ca088u: goto label_2ca088;
        case 0x2ca08cu: goto label_2ca08c;
        case 0x2ca090u: goto label_2ca090;
        case 0x2ca094u: goto label_2ca094;
        case 0x2ca098u: goto label_2ca098;
        case 0x2ca09cu: goto label_2ca09c;
        case 0x2ca0a0u: goto label_2ca0a0;
        case 0x2ca0a4u: goto label_2ca0a4;
        case 0x2ca0a8u: goto label_2ca0a8;
        case 0x2ca0acu: goto label_2ca0ac;
        case 0x2ca0b0u: goto label_2ca0b0;
        case 0x2ca0b4u: goto label_2ca0b4;
        case 0x2ca0b8u: goto label_2ca0b8;
        case 0x2ca0bcu: goto label_2ca0bc;
        case 0x2ca0c0u: goto label_2ca0c0;
        case 0x2ca0c4u: goto label_2ca0c4;
        case 0x2ca0c8u: goto label_2ca0c8;
        case 0x2ca0ccu: goto label_2ca0cc;
        case 0x2ca0d0u: goto label_2ca0d0;
        case 0x2ca0d4u: goto label_2ca0d4;
        case 0x2ca0d8u: goto label_2ca0d8;
        case 0x2ca0dcu: goto label_2ca0dc;
        case 0x2ca0e0u: goto label_2ca0e0;
        case 0x2ca0e4u: goto label_2ca0e4;
        case 0x2ca0e8u: goto label_2ca0e8;
        case 0x2ca0ecu: goto label_2ca0ec;
        case 0x2ca0f0u: goto label_2ca0f0;
        case 0x2ca0f4u: goto label_2ca0f4;
        case 0x2ca0f8u: goto label_2ca0f8;
        case 0x2ca0fcu: goto label_2ca0fc;
        case 0x2ca100u: goto label_2ca100;
        case 0x2ca104u: goto label_2ca104;
        case 0x2ca108u: goto label_2ca108;
        case 0x2ca10cu: goto label_2ca10c;
        case 0x2ca110u: goto label_2ca110;
        case 0x2ca114u: goto label_2ca114;
        case 0x2ca118u: goto label_2ca118;
        case 0x2ca11cu: goto label_2ca11c;
        case 0x2ca120u: goto label_2ca120;
        case 0x2ca124u: goto label_2ca124;
        case 0x2ca128u: goto label_2ca128;
        case 0x2ca12cu: goto label_2ca12c;
        case 0x2ca130u: goto label_2ca130;
        case 0x2ca134u: goto label_2ca134;
        case 0x2ca138u: goto label_2ca138;
        case 0x2ca13cu: goto label_2ca13c;
        case 0x2ca140u: goto label_2ca140;
        case 0x2ca144u: goto label_2ca144;
        case 0x2ca148u: goto label_2ca148;
        case 0x2ca14cu: goto label_2ca14c;
        case 0x2ca150u: goto label_2ca150;
        case 0x2ca154u: goto label_2ca154;
        case 0x2ca158u: goto label_2ca158;
        case 0x2ca15cu: goto label_2ca15c;
        case 0x2ca160u: goto label_2ca160;
        case 0x2ca164u: goto label_2ca164;
        case 0x2ca168u: goto label_2ca168;
        case 0x2ca16cu: goto label_2ca16c;
        case 0x2ca170u: goto label_2ca170;
        case 0x2ca174u: goto label_2ca174;
        case 0x2ca178u: goto label_2ca178;
        case 0x2ca17cu: goto label_2ca17c;
        case 0x2ca180u: goto label_2ca180;
        case 0x2ca184u: goto label_2ca184;
        case 0x2ca188u: goto label_2ca188;
        case 0x2ca18cu: goto label_2ca18c;
        case 0x2ca190u: goto label_2ca190;
        case 0x2ca194u: goto label_2ca194;
        case 0x2ca198u: goto label_2ca198;
        case 0x2ca19cu: goto label_2ca19c;
        case 0x2ca1a0u: goto label_2ca1a0;
        case 0x2ca1a4u: goto label_2ca1a4;
        case 0x2ca1a8u: goto label_2ca1a8;
        case 0x2ca1acu: goto label_2ca1ac;
        case 0x2ca1b0u: goto label_2ca1b0;
        case 0x2ca1b4u: goto label_2ca1b4;
        case 0x2ca1b8u: goto label_2ca1b8;
        case 0x2ca1bcu: goto label_2ca1bc;
        case 0x2ca1c0u: goto label_2ca1c0;
        case 0x2ca1c4u: goto label_2ca1c4;
        case 0x2ca1c8u: goto label_2ca1c8;
        case 0x2ca1ccu: goto label_2ca1cc;
        case 0x2ca1d0u: goto label_2ca1d0;
        case 0x2ca1d4u: goto label_2ca1d4;
        case 0x2ca1d8u: goto label_2ca1d8;
        case 0x2ca1dcu: goto label_2ca1dc;
        case 0x2ca1e0u: goto label_2ca1e0;
        case 0x2ca1e4u: goto label_2ca1e4;
        case 0x2ca1e8u: goto label_2ca1e8;
        case 0x2ca1ecu: goto label_2ca1ec;
        case 0x2ca1f0u: goto label_2ca1f0;
        case 0x2ca1f4u: goto label_2ca1f4;
        case 0x2ca1f8u: goto label_2ca1f8;
        case 0x2ca1fcu: goto label_2ca1fc;
        case 0x2ca200u: goto label_2ca200;
        case 0x2ca204u: goto label_2ca204;
        case 0x2ca208u: goto label_2ca208;
        case 0x2ca20cu: goto label_2ca20c;
        case 0x2ca210u: goto label_2ca210;
        case 0x2ca214u: goto label_2ca214;
        case 0x2ca218u: goto label_2ca218;
        case 0x2ca21cu: goto label_2ca21c;
        case 0x2ca220u: goto label_2ca220;
        case 0x2ca224u: goto label_2ca224;
        case 0x2ca228u: goto label_2ca228;
        case 0x2ca22cu: goto label_2ca22c;
        case 0x2ca230u: goto label_2ca230;
        case 0x2ca234u: goto label_2ca234;
        case 0x2ca238u: goto label_2ca238;
        case 0x2ca23cu: goto label_2ca23c;
        case 0x2ca240u: goto label_2ca240;
        case 0x2ca244u: goto label_2ca244;
        case 0x2ca248u: goto label_2ca248;
        case 0x2ca24cu: goto label_2ca24c;
        case 0x2ca250u: goto label_2ca250;
        case 0x2ca254u: goto label_2ca254;
        case 0x2ca258u: goto label_2ca258;
        case 0x2ca25cu: goto label_2ca25c;
        default: break;
    }

    ctx->pc = 0x2c9f60u;

label_2c9f60:
    // 0x2c9f60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c9f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2c9f64:
    // 0x2c9f64: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c9f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2c9f68:
    // 0x2c9f68: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c9f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2c9f6c:
    // 0x2c9f6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c9f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9f70:
    // 0x2c9f70: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c9f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2c9f74:
    // 0x2c9f74: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c9f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2c9f78:
    // 0x2c9f78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c9f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2c9f7c:
    // 0x2c9f7c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2c9f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2c9f80:
    // 0x2c9f80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c9f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c9f84:
    // 0x2c9f84: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c9f84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2c9f88:
    // 0x2c9f88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9f8c:
    // 0x2c9f8c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2c9f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9f90:
    // 0x2c9f90: 0xc08bfa0  jal         func_22FE80
label_2c9f94:
    if (ctx->pc == 0x2C9F94u) {
        ctx->pc = 0x2C9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F90u;
        // 0x2c9f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9F98u;
        goto label_2c9f98;
    }
    ctx->pc = 0x2C9F90u;
    SET_GPR_U32(ctx, 31, 0x2C9F98u);
    ctx->pc = 0x2C9F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9F90u;
    // 0x2c9f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2C9F90u, 0x2C9F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F98u;
label_2c9f98:
    // 0x2c9f98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9f9c:
    // 0x2c9f9c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2c9f9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2c9fa0:
    // 0x2c9fa0: 0x1c6000a5  bgtz        $v1, . + 4 + (0xA5 << 2)
label_2c9fa4:
    if (ctx->pc == 0x2C9FA4u) {
        ctx->pc = 0x2C9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FA0u;
        // 0x2c9fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9FA8u;
        goto label_2c9fa8;
    }
    ctx->pc = 0x2C9FA0u;
    {
        const bool branch_taken_0x2c9fa0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2C9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FA0u;
        // 0x2c9fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fa0) {
            ctx->pc = 0x2CA238u;
            goto label_2ca238;
        }
    }
    ctx->pc = 0x2C9FA8u;
label_2c9fa8:
    // 0x2c9fa8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c9fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2c9fac:
    // 0x2c9fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9fb0:
    // 0x2c9fb0: 0x34a5fbff  ori         $a1, $a1, 0xFBFF
    ctx->pc = 0x2c9fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
label_2c9fb4:
    // 0x2c9fb4: 0xc0a7c8c  jal         func_29F230
label_2c9fb8:
    if (ctx->pc == 0x2C9FB8u) {
        ctx->pc = 0x2C9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FB4u;
        // 0x2c9fb8: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9FBCu;
        goto label_2c9fbc;
    }
    ctx->pc = 0x2C9FB4u;
    SET_GPR_U32(ctx, 31, 0x2C9FBCu);
    ctx->pc = 0x2C9FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FB4u;
    // 0x2c9fb8: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2C9FB4u, 0x2C9FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FBCu;
label_2c9fbc:
    // 0x2c9fbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c9fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9fc0:
    // 0x2c9fc0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c9fc4:
    // 0x2c9fc4: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2c9fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c9fc8:
    // 0x2c9fc8: 0x24744b00  addiu       $s4, $v1, 0x4B00
    ctx->pc = 0x2c9fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c9fcc:
    // 0x2c9fcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c9fd0:
    // 0x2c9fd0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c9fd4:
    // 0x2c9fd4: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2c9fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2c9fd8:
    // 0x2c9fd8: 0xc0cdb38  jal         func_336CE0
label_2c9fdc:
    if (ctx->pc == 0x2C9FDCu) {
        ctx->pc = 0x2C9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FD8u;
        // 0x2c9fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9FE0u;
        goto label_2c9fe0;
    }
    ctx->pc = 0x2C9FD8u;
    SET_GPR_U32(ctx, 31, 0x2C9FE0u);
    ctx->pc = 0x2C9FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FD8u;
    // 0x2c9fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C9FD8u, 0x2C9FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FE0u;
label_2c9fe0:
    // 0x2c9fe0: 0x12600057  beqz        $s3, . + 4 + (0x57 << 2)
label_2c9fe4:
    if (ctx->pc == 0x2C9FE4u) {
        ctx->pc = 0x2C9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FE0u;
        // 0x2c9fe4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9FE8u;
        goto label_2c9fe8;
    }
    ctx->pc = 0x2C9FE0u;
    {
        const bool branch_taken_0x2c9fe0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FE0u;
        // 0x2c9fe4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fe0) {
            ctx->pc = 0x2CA140u;
            goto label_2ca140;
        }
    }
    ctx->pc = 0x2C9FE8u;
label_2c9fe8:
    // 0x2c9fe8: 0xc08a08a  jal         func_228228
label_2c9fec:
    if (ctx->pc == 0x2C9FECu) {
        ctx->pc = 0x2C9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FE8u;
        // 0x2c9fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9FF0u;
        goto label_2c9ff0;
    }
    ctx->pc = 0x2C9FE8u;
    SET_GPR_U32(ctx, 31, 0x2C9FF0u);
    ctx->pc = 0x2C9FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FE8u;
    // 0x2c9fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2C9FE8u, 0x2C9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FF0u;
label_2c9ff0:
    // 0x2c9ff0: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_2c9ff4:
    if (ctx->pc == 0x2C9FF4u) {
        ctx->pc = 0x2C9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FF0u;
        // 0x2c9ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9FF8u;
        goto label_2c9ff8;
    }
    ctx->pc = 0x2C9FF0u;
    {
        const bool branch_taken_0x2c9ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FF0u;
        // 0x2c9ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ff0) {
            ctx->pc = 0x2CA10Cu;
            goto label_2ca10c;
        }
    }
    ctx->pc = 0x2C9FF8u;
label_2c9ff8:
    // 0x2c9ff8: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2c9ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2c9ffc:
    // 0x2c9ffc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ca000:
    // 0x2ca000: 0xc0cdb38  jal         func_336CE0
label_2ca004:
    if (ctx->pc == 0x2CA004u) {
        ctx->pc = 0x2CA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA000u;
        // 0x2ca004: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA008u;
        goto label_2ca008;
    }
    ctx->pc = 0x2CA000u;
    SET_GPR_U32(ctx, 31, 0x2CA008u);
    ctx->pc = 0x2CA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA000u;
    // 0x2ca004: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CA000u, 0x2CA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA008u;
label_2ca008:
    // 0x2ca008: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca00c:
    // 0x2ca00c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2ca00cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_2ca010:
    // 0x2ca010: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2ca010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2ca014:
    // 0x2ca014: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ca014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ca018:
    // 0x2ca018: 0xc4820140  lwc1        $f2, 0x140($a0)
    ctx->pc = 0x2ca018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ca01c:
    // 0x2ca01c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ca01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2ca020:
    // 0x2ca020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ca024:
    // 0x2ca024: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2ca024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca028:
    // 0x2ca028: 0x0  nop
    ctx->pc = 0x2ca028u;
    // NOP
label_2ca02c:
    // 0x2ca02c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_2ca030:
    if (ctx->pc == 0x2CA030u) {
        ctx->pc = 0x2CA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA02Cu;
        // 0x2ca030: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA034u;
        goto label_2ca034;
    }
    ctx->pc = 0x2CA02Cu;
    {
        const bool branch_taken_0x2ca02c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA02Cu;
        // 0x2ca030: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca02c) {
            ctx->pc = 0x2CA0C4u;
            goto label_2ca0c4;
        }
    }
    ctx->pc = 0x2CA034u;
label_2ca034:
    // 0x2ca034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca038:
    // 0x2ca038: 0xc0a33f8  jal         func_28CFE0
label_2ca03c:
    if (ctx->pc == 0x2CA03Cu) {
        ctx->pc = 0x2CA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA038u;
        // 0x2ca03c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA040u;
        goto label_2ca040;
    }
    ctx->pc = 0x2CA038u;
    SET_GPR_U32(ctx, 31, 0x2CA040u);
    ctx->pc = 0x2CA03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA038u;
    // 0x2ca03c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2CA038u, 0x2CA040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA040u;
label_2ca040:
    // 0x2ca040: 0xc0a36c8  jal         func_28DB20
label_2ca044:
    if (ctx->pc == 0x2CA044u) {
        ctx->pc = 0x2CA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA040u;
        // 0x2ca044: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA048u;
        goto label_2ca048;
    }
    ctx->pc = 0x2CA040u;
    SET_GPR_U32(ctx, 31, 0x2CA048u);
    ctx->pc = 0x2CA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA040u;
    // 0x2ca044: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2CA040u, 0x2CA048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA048u;
label_2ca048:
    // 0x2ca048: 0xc0a367c  jal         func_28D9F0
label_2ca04c:
    if (ctx->pc == 0x2CA04Cu) {
        ctx->pc = 0x2CA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA048u;
        // 0x2ca04c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA050u;
        goto label_2ca050;
    }
    ctx->pc = 0x2CA048u;
    SET_GPR_U32(ctx, 31, 0x2CA050u);
    ctx->pc = 0x2CA04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA048u;
    // 0x2ca04c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CA048u, 0x2CA050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA050u;
label_2ca050:
    // 0x2ca050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca054:
    // 0x2ca054: 0x12000078  beqz        $s0, . + 4 + (0x78 << 2)
label_2ca058:
    if (ctx->pc == 0x2CA058u) {
        ctx->pc = 0x2CA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA054u;
        // 0x2ca058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA05Cu;
        goto label_2ca05c;
    }
    ctx->pc = 0x2CA054u;
    {
        const bool branch_taken_0x2ca054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA054u;
        // 0x2ca058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca054) {
            ctx->pc = 0x2CA238u;
            goto label_2ca238;
        }
    }
    ctx->pc = 0x2CA05Cu;
label_2ca05c:
    // 0x2ca05c: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2ca05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2ca060:
    // 0x2ca060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ca064:
    // 0x2ca064: 0x0  nop
    ctx->pc = 0x2ca064u;
    // NOP
label_2ca068:
    // 0x2ca068: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ca068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca06c:
    // 0x2ca06c: 0x0  nop
    ctx->pc = 0x2ca06cu;
    // NOP
label_2ca070:
    // 0x2ca070: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2ca074:
    if (ctx->pc == 0x2CA074u) {
        ctx->pc = 0x2CA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA070u;
        // 0x2ca074: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA078u;
        goto label_2ca078;
    }
    ctx->pc = 0x2CA070u;
    {
        const bool branch_taken_0x2ca070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA070u;
        // 0x2ca074: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca070) {
            ctx->pc = 0x2CA07Cu;
            goto label_2ca07c;
        }
    }
    ctx->pc = 0x2CA078u;
label_2ca078:
    // 0x2ca078: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2ca078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ca07c:
    // 0x2ca07c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ca07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ca080:
    // 0x2ca080: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ca080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ca084:
    // 0x2ca084: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ca084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ca088:
    // 0x2ca088: 0x40f809  jalr        $v0
label_2ca08c:
    if (ctx->pc == 0x2CA08Cu) {
        ctx->pc = 0x2CA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA088u;
        // 0x2ca08c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA090u;
        goto label_2ca090;
    }
    ctx->pc = 0x2CA088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CA090u);
        ctx->pc = 0x2CA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA088u;
        // 0x2ca08c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA088u, 0x2CA090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CA090u;
label_2ca090:
    // 0x2ca090: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca094:
    // 0x2ca094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca098:
    // 0x2ca098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ca09c:
    // 0x2ca09c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ca09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ca0a0:
    // 0x2ca0a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ca0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ca0a4:
    // 0x2ca0a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ca0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ca0a8:
    // 0x2ca0a8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2ca0a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca0ac:
    // 0x2ca0ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ca0acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca0b0:
    // 0x2ca0b0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ca0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ca0b4:
    // 0x2ca0b4: 0xc0bee7a  jal         func_2FB9E8
label_2ca0b8:
    if (ctx->pc == 0x2CA0B8u) {
        ctx->pc = 0x2CA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0B4u;
        // 0x2ca0b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA0BCu;
        goto label_2ca0bc;
    }
    ctx->pc = 0x2CA0B4u;
    SET_GPR_U32(ctx, 31, 0x2CA0BCu);
    ctx->pc = 0x2CA0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0B4u;
    // 0x2ca0b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2CA0B4u, 0x2CA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0BCu;
label_2ca0bc:
    // 0x2ca0bc: 0x1000005e  b           . + 4 + (0x5E << 2)
label_2ca0c0:
    if (ctx->pc == 0x2CA0C0u) {
        ctx->pc = 0x2CA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0BCu;
        // 0x2ca0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA0C4u;
        goto label_2ca0c4;
    }
    ctx->pc = 0x2CA0BCu;
    {
        const bool branch_taken_0x2ca0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0BCu;
        // 0x2ca0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0bc) {
            ctx->pc = 0x2CA238u;
            goto label_2ca238;
        }
    }
    ctx->pc = 0x2CA0C4u;
label_2ca0c4:
    // 0x2ca0c4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ca0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2ca0c8:
    // 0x2ca0c8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2ca0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca0cc:
    // 0x2ca0cc: 0x0  nop
    ctx->pc = 0x2ca0ccu;
    // NOP
label_2ca0d0:
    // 0x2ca0d0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2ca0d4:
    if (ctx->pc == 0x2CA0D4u) {
        ctx->pc = 0x2CA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0D0u;
        // 0x2ca0d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA0D8u;
        goto label_2ca0d8;
    }
    ctx->pc = 0x2CA0D0u;
    {
        const bool branch_taken_0x2ca0d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0D0u;
        // 0x2ca0d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0d0) {
            ctx->pc = 0x2CA10Cu;
            goto label_2ca10c;
        }
    }
    ctx->pc = 0x2CA0D8u;
label_2ca0d8:
    // 0x2ca0d8: 0xc088fa8  jal         func_223EA0
label_2ca0dc:
    if (ctx->pc == 0x2CA0DCu) {
        ctx->pc = 0x2CA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0D8u;
        // 0x2ca0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA0E0u;
        goto label_2ca0e0;
    }
    ctx->pc = 0x2CA0D8u;
    SET_GPR_U32(ctx, 31, 0x2CA0E0u);
    ctx->pc = 0x2CA0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0D8u;
    // 0x2ca0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2CA0D8u, 0x2CA0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0E0u;
label_2ca0e0:
    // 0x2ca0e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2ca0e4:
    if (ctx->pc == 0x2CA0E4u) {
        ctx->pc = 0x2CA0E8u;
        goto label_2ca0e8;
    }
    ctx->pc = 0x2CA0E0u;
    {
        const bool branch_taken_0x2ca0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca0e0) {
            ctx->pc = 0x2CA10Cu;
            goto label_2ca10c;
        }
    }
    ctx->pc = 0x2CA0E8u;
label_2ca0e8:
    // 0x2ca0e8: 0xc089000  jal         func_224000
label_2ca0ec:
    if (ctx->pc == 0x2CA0ECu) {
        ctx->pc = 0x2CA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0E8u;
        // 0x2ca0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA0F0u;
        goto label_2ca0f0;
    }
    ctx->pc = 0x2CA0E8u;
    SET_GPR_U32(ctx, 31, 0x2CA0F0u);
    ctx->pc = 0x2CA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0E8u;
    // 0x2ca0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2CA0E8u, 0x2CA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0F0u;
label_2ca0f0:
    // 0x2ca0f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2ca0f4:
    if (ctx->pc == 0x2CA0F4u) {
        ctx->pc = 0x2CA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0F0u;
        // 0x2ca0f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA0F8u;
        goto label_2ca0f8;
    }
    ctx->pc = 0x2CA0F0u;
    {
        const bool branch_taken_0x2ca0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0F0u;
        // 0x2ca0f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0f0) {
            ctx->pc = 0x2CA10Cu;
            goto label_2ca10c;
        }
    }
    ctx->pc = 0x2CA0F8u;
label_2ca0f8:
    // 0x2ca0f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca0fc:
    // 0x2ca0fc: 0xc0a33f8  jal         func_28CFE0
label_2ca100:
    if (ctx->pc == 0x2CA100u) {
        ctx->pc = 0x2CA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0FCu;
        // 0x2ca100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA104u;
        goto label_2ca104;
    }
    ctx->pc = 0x2CA0FCu;
    SET_GPR_U32(ctx, 31, 0x2CA104u);
    ctx->pc = 0x2CA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA0FCu;
    // 0x2ca100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2CA0FCu, 0x2CA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA104u;
label_2ca104:
    // 0x2ca104: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2ca108:
    if (ctx->pc == 0x2CA108u) {
        ctx->pc = 0x2CA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA104u;
        // 0x2ca108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA10Cu;
        goto label_2ca10c;
    }
    ctx->pc = 0x2CA104u;
    {
        const bool branch_taken_0x2ca104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA104u;
        // 0x2ca108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca104) {
            ctx->pc = 0x2CA238u;
            goto label_2ca238;
        }
    }
    ctx->pc = 0x2CA10Cu;
label_2ca10c:
    // 0x2ca10c: 0xc0a4e54  jal         func_293950
label_2ca110:
    if (ctx->pc == 0x2CA110u) {
        ctx->pc = 0x2CA114u;
        goto label_2ca114;
    }
    ctx->pc = 0x2CA10Cu;
    SET_GPR_U32(ctx, 31, 0x2CA114u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CA10Cu, 0x2CA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA114u;
label_2ca114:
    // 0x2ca114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca118:
    // 0x2ca118: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2ca11c:
    if (ctx->pc == 0x2CA11Cu) {
        ctx->pc = 0x2CA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA118u;
        // 0x2ca11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA120u;
        goto label_2ca120;
    }
    ctx->pc = 0x2CA118u;
    {
        const bool branch_taken_0x2ca118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA118u;
        // 0x2ca11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca118) {
            ctx->pc = 0x2CA12Cu;
            goto label_2ca12c;
        }
    }
    ctx->pc = 0x2CA120u;
label_2ca120:
    // 0x2ca120: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca124:
    // 0x2ca124: 0xc0b2898  jal         func_2CA260
label_2ca128:
    if (ctx->pc == 0x2CA128u) {
        ctx->pc = 0x2CA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA124u;
        // 0x2ca128: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA12Cu;
        goto label_2ca12c;
    }
    ctx->pc = 0x2CA124u;
    SET_GPR_U32(ctx, 31, 0x2CA12Cu);
    ctx->pc = 0x2CA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA124u;
    // 0x2ca128: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA260u, 0x2CA124u, 0x2CA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA12Cu;
label_2ca12c:
    // 0x2ca12c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca130:
    // 0x2ca130: 0xc0a35d6  jal         func_28D758
label_2ca134:
    if (ctx->pc == 0x2CA134u) {
        ctx->pc = 0x2CA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA130u;
        // 0x2ca134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA138u;
        goto label_2ca138;
    }
    ctx->pc = 0x2CA130u;
    SET_GPR_U32(ctx, 31, 0x2CA138u);
    ctx->pc = 0x2CA134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA130u;
    // 0x2ca134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2CA130u, 0x2CA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA138u;
label_2ca138:
    // 0x2ca138: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2ca13c:
    if (ctx->pc == 0x2CA13Cu) {
        ctx->pc = 0x2CA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA138u;
        // 0x2ca13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA140u;
        goto label_2ca140;
    }
    ctx->pc = 0x2CA138u;
    {
        const bool branch_taken_0x2ca138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA138u;
        // 0x2ca13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca138) {
            ctx->pc = 0x2CA238u;
            goto label_2ca238;
        }
    }
    ctx->pc = 0x2CA140u;
label_2ca140:
    // 0x2ca140: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ca140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2ca144:
    // 0x2ca144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ca148:
    // 0x2ca148: 0x0  nop
    ctx->pc = 0x2ca148u;
    // NOP
label_2ca14c:
    // 0x2ca14c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ca14cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca150:
    // 0x2ca150: 0x0  nop
    ctx->pc = 0x2ca150u;
    // NOP
label_2ca154:
    // 0x2ca154: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_2ca158:
    if (ctx->pc == 0x2CA158u) {
        ctx->pc = 0x2CA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA154u;
        // 0x2ca158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA15Cu;
        goto label_2ca15c;
    }
    ctx->pc = 0x2CA154u;
    {
        const bool branch_taken_0x2ca154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA154u;
        // 0x2ca158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca154) {
            ctx->pc = 0x2CA238u;
            goto label_2ca238;
        }
    }
    ctx->pc = 0x2CA15Cu;
label_2ca15c:
    // 0x2ca15c: 0xc0a3678  jal         func_28D9E0
label_2ca160:
    if (ctx->pc == 0x2CA160u) {
        ctx->pc = 0x2CA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA15Cu;
        // 0x2ca160: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA164u;
        goto label_2ca164;
    }
    ctx->pc = 0x2CA15Cu;
    SET_GPR_U32(ctx, 31, 0x2CA164u);
    ctx->pc = 0x2CA160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA15Cu;
    // 0x2ca160: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2CA15Cu, 0x2CA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA164u;
label_2ca164:
    // 0x2ca164: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca168:
    // 0x2ca168: 0xc0a36c8  jal         func_28DB20
label_2ca16c:
    if (ctx->pc == 0x2CA16Cu) {
        ctx->pc = 0x2CA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA168u;
        // 0x2ca16c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA170u;
        goto label_2ca170;
    }
    ctx->pc = 0x2CA168u;
    SET_GPR_U32(ctx, 31, 0x2CA170u);
    ctx->pc = 0x2CA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA168u;
    // 0x2ca16c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2CA168u, 0x2CA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA170u;
label_2ca170:
    // 0x2ca170: 0xc0a367c  jal         func_28D9F0
label_2ca174:
    if (ctx->pc == 0x2CA174u) {
        ctx->pc = 0x2CA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA170u;
        // 0x2ca174: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA178u;
        goto label_2ca178;
    }
    ctx->pc = 0x2CA170u;
    SET_GPR_U32(ctx, 31, 0x2CA178u);
    ctx->pc = 0x2CA174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA170u;
    // 0x2ca174: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CA170u, 0x2CA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA178u;
label_2ca178:
    // 0x2ca178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca17c:
    // 0x2ca17c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_2ca180:
    if (ctx->pc == 0x2CA180u) {
        ctx->pc = 0x2CA184u;
        goto label_2ca184;
    }
    ctx->pc = 0x2CA17Cu;
    {
        const bool branch_taken_0x2ca17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca17c) {
            ctx->pc = 0x2CA1CCu;
            goto label_2ca1cc;
        }
    }
    ctx->pc = 0x2CA184u;
label_2ca184:
    // 0x2ca184: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2ca184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2ca188:
    // 0x2ca188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ca188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ca18c:
    // 0x2ca18c: 0x0  nop
    ctx->pc = 0x2ca18cu;
    // NOP
label_2ca190:
    // 0x2ca190: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ca190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ca194:
    // 0x2ca194: 0x0  nop
    ctx->pc = 0x2ca194u;
    // NOP
label_2ca198:
    // 0x2ca198: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2ca19c:
    if (ctx->pc == 0x2CA19Cu) {
        ctx->pc = 0x2CA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA198u;
        // 0x2ca19c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1A0u;
        goto label_2ca1a0;
    }
    ctx->pc = 0x2CA198u;
    {
        const bool branch_taken_0x2ca198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA198u;
        // 0x2ca19c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca198) {
            ctx->pc = 0x2CA1A4u;
            goto label_2ca1a4;
        }
    }
    ctx->pc = 0x2CA1A0u;
label_2ca1a0:
    // 0x2ca1a0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2ca1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ca1a4:
    // 0x2ca1a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ca1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ca1a8:
    // 0x2ca1a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca1ac:
    // 0x2ca1ac: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2ca1acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ca1b0:
    // 0x2ca1b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ca1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ca1b4:
    // 0x2ca1b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ca1b8:
    // 0x2ca1b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ca1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ca1bc:
    // 0x2ca1bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ca1bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca1c0:
    // 0x2ca1c0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ca1c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ca1c4:
    // 0x2ca1c4: 0xc0bee7a  jal         func_2FB9E8
label_2ca1c8:
    if (ctx->pc == 0x2CA1C8u) {
        ctx->pc = 0x2CA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1C4u;
        // 0x2ca1c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1CCu;
        goto label_2ca1cc;
    }
    ctx->pc = 0x2CA1C4u;
    SET_GPR_U32(ctx, 31, 0x2CA1CCu);
    ctx->pc = 0x2CA1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1C4u;
    // 0x2ca1c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2CA1C4u, 0x2CA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1CCu;
label_2ca1cc:
    // 0x2ca1cc: 0xc0a367c  jal         func_28D9F0
label_2ca1d0:
    if (ctx->pc == 0x2CA1D0u) {
        ctx->pc = 0x2CA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1CCu;
        // 0x2ca1d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1D4u;
        goto label_2ca1d4;
    }
    ctx->pc = 0x2CA1CCu;
    SET_GPR_U32(ctx, 31, 0x2CA1D4u);
    ctx->pc = 0x2CA1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1CCu;
    // 0x2ca1d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CA1CCu, 0x2CA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1D4u;
label_2ca1d4:
    // 0x2ca1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca1d8:
    // 0x2ca1d8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_2ca1dc:
    if (ctx->pc == 0x2CA1DCu) {
        ctx->pc = 0x2CA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1D8u;
        // 0x2ca1dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1E0u;
        goto label_2ca1e0;
    }
    ctx->pc = 0x2CA1D8u;
    {
        const bool branch_taken_0x2ca1d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1D8u;
        // 0x2ca1dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1d8) {
            ctx->pc = 0x2CA238u;
            goto label_2ca238;
        }
    }
    ctx->pc = 0x2CA1E0u;
label_2ca1e0:
    // 0x2ca1e0: 0xc0e40a2  jal         func_390288
label_2ca1e4:
    if (ctx->pc == 0x2CA1E4u) {
        ctx->pc = 0x2CA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1E0u;
        // 0x2ca1e4: 0x26440028  addiu       $a0, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1E8u;
        goto label_2ca1e8;
    }
    ctx->pc = 0x2CA1E0u;
    SET_GPR_U32(ctx, 31, 0x2CA1E8u);
    ctx->pc = 0x2CA1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1E0u;
    // 0x2ca1e4: 0x26440028  addiu       $a0, $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2CA1E0u, 0x2CA1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1E8u;
label_2ca1e8:
    // 0x2ca1e8: 0xc10587a  jal         func_4161E8
label_2ca1ec:
    if (ctx->pc == 0x2CA1ECu) {
        ctx->pc = 0x2CA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1E8u;
        // 0x2ca1ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1F0u;
        goto label_2ca1f0;
    }
    ctx->pc = 0x2CA1E8u;
    SET_GPR_U32(ctx, 31, 0x2CA1F0u);
    ctx->pc = 0x2CA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1E8u;
    // 0x2ca1ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2CA1E8u, 0x2CA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1F0u;
label_2ca1f0:
    // 0x2ca1f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ca1f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ca1f4:
    // 0x2ca1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca1f8:
    // 0x2ca1f8: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x2ca1f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_2ca1fc:
    // 0x2ca1fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ca1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ca200:
    // 0x2ca200: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2ca200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2ca204:
    // 0x2ca204: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ca204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2ca208:
    // 0x2ca208: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ca208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ca20c:
    // 0x2ca20c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ca20cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2ca210:
    // 0x2ca210: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2ca210u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2ca214:
    // 0x2ca214: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ca214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ca218:
    // 0x2ca218: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ca218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ca21c:
    // 0x2ca21c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ca21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ca220:
    // 0x2ca220: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ca220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca224:
    // 0x2ca224: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2ca224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2ca228:
    // 0x2ca228: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2ca228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2ca22c:
    // 0x2ca22c: 0xc0bf800  jal         func_2FE000
label_2ca230:
    if (ctx->pc == 0x2CA230u) {
        ctx->pc = 0x2CA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA22Cu;
        // 0x2ca230: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA234u;
        goto label_2ca234;
    }
    ctx->pc = 0x2CA22Cu;
    SET_GPR_U32(ctx, 31, 0x2CA234u);
    ctx->pc = 0x2CA230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA22Cu;
    // 0x2ca230: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CA22Cu, 0x2CA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA234u;
label_2ca234:
    // 0x2ca234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca238:
    // 0x2ca238: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2ca238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ca23c:
    // 0x2ca23c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2ca23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ca240:
    // 0x2ca240: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2ca240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ca244:
    // 0x2ca244: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2ca244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ca248:
    // 0x2ca248: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ca248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ca24c:
    // 0x2ca24c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2ca24cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ca250:
    // 0x2ca250: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ca250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ca254:
    // 0x2ca254: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2ca254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ca258:
    // 0x2ca258: 0x3e00008  jr          $ra
label_2ca25c:
    if (ctx->pc == 0x2CA25Cu) {
        ctx->pc = 0x2CA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA258u;
        // 0x2ca25c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA260u;
        goto label_fallthrough_0x2ca258;
    }
    ctx->pc = 0x2CA258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA258u;
        // 0x2ca25c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ca258:
    ctx->pc = 0x2CA260u;
}
