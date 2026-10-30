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

// Function: sub_003DDD70
// Address: 0x3ddd70 - 0x3de0b8
void sub_003DDD70_0x3ddd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDD70_0x3ddd70");
#endif

    switch (ctx->pc) {
        case 0x3ddd70u: goto label_3ddd70;
        case 0x3ddd74u: goto label_3ddd74;
        case 0x3ddd78u: goto label_3ddd78;
        case 0x3ddd7cu: goto label_3ddd7c;
        case 0x3ddd80u: goto label_3ddd80;
        case 0x3ddd84u: goto label_3ddd84;
        case 0x3ddd88u: goto label_3ddd88;
        case 0x3ddd8cu: goto label_3ddd8c;
        case 0x3ddd90u: goto label_3ddd90;
        case 0x3ddd94u: goto label_3ddd94;
        case 0x3ddd98u: goto label_3ddd98;
        case 0x3ddd9cu: goto label_3ddd9c;
        case 0x3ddda0u: goto label_3ddda0;
        case 0x3ddda4u: goto label_3ddda4;
        case 0x3ddda8u: goto label_3ddda8;
        case 0x3dddacu: goto label_3dddac;
        case 0x3dddb0u: goto label_3dddb0;
        case 0x3dddb4u: goto label_3dddb4;
        case 0x3dddb8u: goto label_3dddb8;
        case 0x3dddbcu: goto label_3dddbc;
        case 0x3dddc0u: goto label_3dddc0;
        case 0x3dddc4u: goto label_3dddc4;
        case 0x3dddc8u: goto label_3dddc8;
        case 0x3dddccu: goto label_3dddcc;
        case 0x3dddd0u: goto label_3dddd0;
        case 0x3dddd4u: goto label_3dddd4;
        case 0x3dddd8u: goto label_3dddd8;
        case 0x3ddddcu: goto label_3ddddc;
        case 0x3ddde0u: goto label_3ddde0;
        case 0x3ddde4u: goto label_3ddde4;
        case 0x3ddde8u: goto label_3ddde8;
        case 0x3dddecu: goto label_3dddec;
        case 0x3dddf0u: goto label_3dddf0;
        case 0x3dddf4u: goto label_3dddf4;
        case 0x3dddf8u: goto label_3dddf8;
        case 0x3dddfcu: goto label_3dddfc;
        case 0x3dde00u: goto label_3dde00;
        case 0x3dde04u: goto label_3dde04;
        case 0x3dde08u: goto label_3dde08;
        case 0x3dde0cu: goto label_3dde0c;
        case 0x3dde10u: goto label_3dde10;
        case 0x3dde14u: goto label_3dde14;
        case 0x3dde18u: goto label_3dde18;
        case 0x3dde1cu: goto label_3dde1c;
        case 0x3dde20u: goto label_3dde20;
        case 0x3dde24u: goto label_3dde24;
        case 0x3dde28u: goto label_3dde28;
        case 0x3dde2cu: goto label_3dde2c;
        case 0x3dde30u: goto label_3dde30;
        case 0x3dde34u: goto label_3dde34;
        case 0x3dde38u: goto label_3dde38;
        case 0x3dde3cu: goto label_3dde3c;
        case 0x3dde40u: goto label_3dde40;
        case 0x3dde44u: goto label_3dde44;
        case 0x3dde48u: goto label_3dde48;
        case 0x3dde4cu: goto label_3dde4c;
        case 0x3dde50u: goto label_3dde50;
        case 0x3dde54u: goto label_3dde54;
        case 0x3dde58u: goto label_3dde58;
        case 0x3dde5cu: goto label_3dde5c;
        case 0x3dde60u: goto label_3dde60;
        case 0x3dde64u: goto label_3dde64;
        case 0x3dde68u: goto label_3dde68;
        case 0x3dde6cu: goto label_3dde6c;
        case 0x3dde70u: goto label_3dde70;
        case 0x3dde74u: goto label_3dde74;
        case 0x3dde78u: goto label_3dde78;
        case 0x3dde7cu: goto label_3dde7c;
        case 0x3dde80u: goto label_3dde80;
        case 0x3dde84u: goto label_3dde84;
        case 0x3dde88u: goto label_3dde88;
        case 0x3dde8cu: goto label_3dde8c;
        case 0x3dde90u: goto label_3dde90;
        case 0x3dde94u: goto label_3dde94;
        case 0x3dde98u: goto label_3dde98;
        case 0x3dde9cu: goto label_3dde9c;
        case 0x3ddea0u: goto label_3ddea0;
        case 0x3ddea4u: goto label_3ddea4;
        case 0x3ddea8u: goto label_3ddea8;
        case 0x3ddeacu: goto label_3ddeac;
        case 0x3ddeb0u: goto label_3ddeb0;
        case 0x3ddeb4u: goto label_3ddeb4;
        case 0x3ddeb8u: goto label_3ddeb8;
        case 0x3ddebcu: goto label_3ddebc;
        case 0x3ddec0u: goto label_3ddec0;
        case 0x3ddec4u: goto label_3ddec4;
        case 0x3ddec8u: goto label_3ddec8;
        case 0x3ddeccu: goto label_3ddecc;
        case 0x3dded0u: goto label_3dded0;
        case 0x3dded4u: goto label_3dded4;
        case 0x3dded8u: goto label_3dded8;
        case 0x3ddedcu: goto label_3ddedc;
        case 0x3ddee0u: goto label_3ddee0;
        case 0x3ddee4u: goto label_3ddee4;
        case 0x3ddee8u: goto label_3ddee8;
        case 0x3ddeecu: goto label_3ddeec;
        case 0x3ddef0u: goto label_3ddef0;
        case 0x3ddef4u: goto label_3ddef4;
        case 0x3ddef8u: goto label_3ddef8;
        case 0x3ddefcu: goto label_3ddefc;
        case 0x3ddf00u: goto label_3ddf00;
        case 0x3ddf04u: goto label_3ddf04;
        case 0x3ddf08u: goto label_3ddf08;
        case 0x3ddf0cu: goto label_3ddf0c;
        case 0x3ddf10u: goto label_3ddf10;
        case 0x3ddf14u: goto label_3ddf14;
        case 0x3ddf18u: goto label_3ddf18;
        case 0x3ddf1cu: goto label_3ddf1c;
        case 0x3ddf20u: goto label_3ddf20;
        case 0x3ddf24u: goto label_3ddf24;
        case 0x3ddf28u: goto label_3ddf28;
        case 0x3ddf2cu: goto label_3ddf2c;
        case 0x3ddf30u: goto label_3ddf30;
        case 0x3ddf34u: goto label_3ddf34;
        case 0x3ddf38u: goto label_3ddf38;
        case 0x3ddf3cu: goto label_3ddf3c;
        case 0x3ddf40u: goto label_3ddf40;
        case 0x3ddf44u: goto label_3ddf44;
        case 0x3ddf48u: goto label_3ddf48;
        case 0x3ddf4cu: goto label_3ddf4c;
        case 0x3ddf50u: goto label_3ddf50;
        case 0x3ddf54u: goto label_3ddf54;
        case 0x3ddf58u: goto label_3ddf58;
        case 0x3ddf5cu: goto label_3ddf5c;
        case 0x3ddf60u: goto label_3ddf60;
        case 0x3ddf64u: goto label_3ddf64;
        case 0x3ddf68u: goto label_3ddf68;
        case 0x3ddf6cu: goto label_3ddf6c;
        case 0x3ddf70u: goto label_3ddf70;
        case 0x3ddf74u: goto label_3ddf74;
        case 0x3ddf78u: goto label_3ddf78;
        case 0x3ddf7cu: goto label_3ddf7c;
        case 0x3ddf80u: goto label_3ddf80;
        case 0x3ddf84u: goto label_3ddf84;
        case 0x3ddf88u: goto label_3ddf88;
        case 0x3ddf8cu: goto label_3ddf8c;
        case 0x3ddf90u: goto label_3ddf90;
        case 0x3ddf94u: goto label_3ddf94;
        case 0x3ddf98u: goto label_3ddf98;
        case 0x3ddf9cu: goto label_3ddf9c;
        case 0x3ddfa0u: goto label_3ddfa0;
        case 0x3ddfa4u: goto label_3ddfa4;
        case 0x3ddfa8u: goto label_3ddfa8;
        case 0x3ddfacu: goto label_3ddfac;
        case 0x3ddfb0u: goto label_3ddfb0;
        case 0x3ddfb4u: goto label_3ddfb4;
        case 0x3ddfb8u: goto label_3ddfb8;
        case 0x3ddfbcu: goto label_3ddfbc;
        case 0x3ddfc0u: goto label_3ddfc0;
        case 0x3ddfc4u: goto label_3ddfc4;
        case 0x3ddfc8u: goto label_3ddfc8;
        case 0x3ddfccu: goto label_3ddfcc;
        case 0x3ddfd0u: goto label_3ddfd0;
        case 0x3ddfd4u: goto label_3ddfd4;
        case 0x3ddfd8u: goto label_3ddfd8;
        case 0x3ddfdcu: goto label_3ddfdc;
        case 0x3ddfe0u: goto label_3ddfe0;
        case 0x3ddfe4u: goto label_3ddfe4;
        case 0x3ddfe8u: goto label_3ddfe8;
        case 0x3ddfecu: goto label_3ddfec;
        case 0x3ddff0u: goto label_3ddff0;
        case 0x3ddff4u: goto label_3ddff4;
        case 0x3ddff8u: goto label_3ddff8;
        case 0x3ddffcu: goto label_3ddffc;
        case 0x3de000u: goto label_3de000;
        case 0x3de004u: goto label_3de004;
        case 0x3de008u: goto label_3de008;
        case 0x3de00cu: goto label_3de00c;
        case 0x3de010u: goto label_3de010;
        case 0x3de014u: goto label_3de014;
        case 0x3de018u: goto label_3de018;
        case 0x3de01cu: goto label_3de01c;
        case 0x3de020u: goto label_3de020;
        case 0x3de024u: goto label_3de024;
        case 0x3de028u: goto label_3de028;
        case 0x3de02cu: goto label_3de02c;
        case 0x3de030u: goto label_3de030;
        case 0x3de034u: goto label_3de034;
        case 0x3de038u: goto label_3de038;
        case 0x3de03cu: goto label_3de03c;
        case 0x3de040u: goto label_3de040;
        case 0x3de044u: goto label_3de044;
        case 0x3de048u: goto label_3de048;
        case 0x3de04cu: goto label_3de04c;
        case 0x3de050u: goto label_3de050;
        case 0x3de054u: goto label_3de054;
        case 0x3de058u: goto label_3de058;
        case 0x3de05cu: goto label_3de05c;
        case 0x3de060u: goto label_3de060;
        case 0x3de064u: goto label_3de064;
        case 0x3de068u: goto label_3de068;
        case 0x3de06cu: goto label_3de06c;
        case 0x3de070u: goto label_3de070;
        case 0x3de074u: goto label_3de074;
        case 0x3de078u: goto label_3de078;
        case 0x3de07cu: goto label_3de07c;
        case 0x3de080u: goto label_3de080;
        case 0x3de084u: goto label_3de084;
        case 0x3de088u: goto label_3de088;
        case 0x3de08cu: goto label_3de08c;
        case 0x3de090u: goto label_3de090;
        case 0x3de094u: goto label_3de094;
        case 0x3de098u: goto label_3de098;
        case 0x3de09cu: goto label_3de09c;
        case 0x3de0a0u: goto label_3de0a0;
        case 0x3de0a4u: goto label_3de0a4;
        case 0x3de0a8u: goto label_3de0a8;
        case 0x3de0acu: goto label_3de0ac;
        case 0x3de0b0u: goto label_3de0b0;
        case 0x3de0b4u: goto label_3de0b4;
        default: break;
    }

    ctx->pc = 0x3ddd70u;

label_3ddd70:
    // 0x3ddd70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3ddd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3ddd74:
    // 0x3ddd74: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3ddd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3ddd78:
    // 0x3ddd78: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3ddd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3ddd7c:
    // 0x3ddd7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ddd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ddd80:
    // 0x3ddd80: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3ddd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3ddd84:
    // 0x3ddd84: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3ddd84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_3ddd88:
    // 0x3ddd88: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3ddd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3ddd8c:
    // 0x3ddd8c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3ddd8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3ddd90:
    // 0x3ddd90: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3ddd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3ddd94:
    // 0x3ddd94: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x3ddd94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_3ddd98:
    // 0x3ddd98: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3ddd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3ddd9c:
    // 0x3ddd9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ddd9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ddda0:
    // 0x3ddda0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3ddda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3ddda4:
    // 0x3ddda4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3ddda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3ddda8:
    // 0x3ddda8: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x3ddda8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dddac:
    // 0x3dddac: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x3dddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_3dddb0:
    // 0x3dddb0: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x3dddb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dddb4:
    // 0x3dddb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3dddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3dddb8:
    // 0x3dddb8: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x3dddb8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dddbc:
    // 0x3dddbc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3dddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3dddc0:
    // 0x3dddc0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dddc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dddc4:
    // 0x3dddc4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dddc8:
    // 0x3dddc8: 0x40f809  jalr        $v0
label_3dddcc:
    if (ctx->pc == 0x3DDDCCu) {
        ctx->pc = 0x3DDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDC8u;
        // 0x3dddcc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDDD0u;
        goto label_3dddd0;
    }
    ctx->pc = 0x3DDDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DDDD0u);
        ctx->pc = 0x3DDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDC8u;
        // 0x3dddcc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDDC8u, 0x3DDDD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DDDD0u;
label_3dddd0:
    // 0x3dddd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3dddd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dddd4:
    // 0x3dddd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3dddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dddd8:
    // 0x3dddd8: 0xc0e858c  jal         func_3A1630
label_3ddddc:
    if (ctx->pc == 0x3DDDDCu) {
        ctx->pc = 0x3DDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDD8u;
        // 0x3ddddc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDDE0u;
        goto label_3ddde0;
    }
    ctx->pc = 0x3DDDD8u;
    SET_GPR_U32(ctx, 31, 0x3DDDE0u);
    ctx->pc = 0x3DDDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDDD8u;
    // 0x3ddddc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DDDD8u, 0x3DDDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDDE0u;
label_3ddde0:
    // 0x3ddde0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3ddde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_3ddde4:
    // 0x3ddde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ddde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ddde8:
    // 0x3ddde8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3ddde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3dddec:
    // 0x3dddec: 0xc0ea14c  jal         func_3A8530
label_3dddf0:
    if (ctx->pc == 0x3DDDF0u) {
        ctx->pc = 0x3DDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDECu;
        // 0x3dddf0: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDDF4u;
        goto label_3dddf4;
    }
    ctx->pc = 0x3DDDECu;
    SET_GPR_U32(ctx, 31, 0x3DDDF4u);
    ctx->pc = 0x3DDDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDDECu;
    // 0x3dddf0: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DDDECu, 0x3DDDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDDF4u;
label_3dddf4:
    // 0x3dddf4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dddf8:
    // 0x3dddf8: 0xc0ea12a  jal         func_3A84A8
label_3dddfc:
    if (ctx->pc == 0x3DDDFCu) {
        ctx->pc = 0x3DDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDF8u;
        // 0x3dddfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE00u;
        goto label_3dde00;
    }
    ctx->pc = 0x3DDDF8u;
    SET_GPR_U32(ctx, 31, 0x3DDE00u);
    ctx->pc = 0x3DDDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDDF8u;
    // 0x3dddfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DDDF8u, 0x3DDE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDE00u;
label_3dde00:
    // 0x3dde00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dde00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dde04:
    // 0x3dde04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dde04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dde08:
    // 0x3dde08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dde08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dde0c:
    // 0x3dde0c: 0xc0ea12a  jal         func_3A84A8
label_3dde10:
    if (ctx->pc == 0x3DDE10u) {
        ctx->pc = 0x3DDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE0Cu;
        // 0x3dde10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE14u;
        goto label_3dde14;
    }
    ctx->pc = 0x3DDE0Cu;
    SET_GPR_U32(ctx, 31, 0x3DDE14u);
    ctx->pc = 0x3DDE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDE0Cu;
    // 0x3dde10: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DDE0Cu, 0x3DDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDE14u;
label_3dde14:
    // 0x3dde14: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dde14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dde18:
    // 0x3dde18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dde18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dde1c:
    // 0x3dde1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3dde1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dde20:
    // 0x3dde20: 0xc0e858c  jal         func_3A1630
label_3dde24:
    if (ctx->pc == 0x3DDE24u) {
        ctx->pc = 0x3DDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE20u;
        // 0x3dde24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE28u;
        goto label_3dde28;
    }
    ctx->pc = 0x3DDE20u;
    SET_GPR_U32(ctx, 31, 0x3DDE28u);
    ctx->pc = 0x3DDE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDE20u;
    // 0x3dde24: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DDE20u, 0x3DDE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDE28u;
label_3dde28:
    // 0x3dde28: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3dde28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dde2c:
    // 0x3dde2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dde2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dde30:
    // 0x3dde30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dde30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dde34:
    // 0x3dde34: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x3dde34u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
label_3dde38:
    // 0x3dde38: 0xc0e9132  jal         func_3A44C8
label_3dde3c:
    if (ctx->pc == 0x3DDE3Cu) {
        ctx->pc = 0x3DDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE38u;
        // 0x3dde3c: 0x7e820010  sq          $v0, 0x10($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE40u;
        goto label_3dde40;
    }
    ctx->pc = 0x3DDE38u;
    SET_GPR_U32(ctx, 31, 0x3DDE40u);
    ctx->pc = 0x3DDE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDE38u;
    // 0x3dde3c: 0x7e820010  sq          $v0, 0x10($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3DDE38u, 0x3DDE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDE40u;
label_3dde40:
    // 0x3dde40: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x3dde40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
label_3dde44:
    // 0x3dde44: 0x263116c0  addiu       $s1, $s1, 0x16C0
    ctx->pc = 0x3dde44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
label_3dde48:
    // 0x3dde48: 0x26521740  addiu       $s2, $s2, 0x1740
    ctx->pc = 0x3dde48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5952));
label_3dde4c:
    // 0x3dde4c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3dde4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3dde50:
    // 0x3dde50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3dde50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3dde54:
    // 0x3dde54: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3dde54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dde58:
    // 0x3dde58: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3dde58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dde5c:
    // 0x3dde5c: 0x2664b8b8  addiu       $a0, $s3, -0x4748
    ctx->pc = 0x3dde5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949048));
label_3dde60:
    // 0x3dde60: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3dde60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3dde64:
    // 0x3dde64: 0x7e830020  sq          $v1, 0x20($s4)
    ctx->pc = 0x3dde64u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
label_3dde68:
    // 0x3dde68: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x3dde68u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
label_3dde6c:
    // 0x3dde6c: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3dde6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3dde70:
    // 0x3dde70: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3dde70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3dde74:
    // 0x3dde74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dde74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dde78:
    // 0x3dde78: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3dde78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3dde7c:
    // 0x3dde7c: 0xc0cd518  jal         func_335460
label_3dde80:
    if (ctx->pc == 0x3DDE80u) {
        ctx->pc = 0x3DDE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE7Cu;
        // 0x3dde80: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE84u;
        goto label_3dde84;
    }
    ctx->pc = 0x3DDE7Cu;
    SET_GPR_U32(ctx, 31, 0x3DDE84u);
    ctx->pc = 0x3DDE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDE7Cu;
    // 0x3dde80: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DDE7Cu, 0x3DDE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDE84u;
label_3dde84:
    // 0x3dde84: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3dde84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3dde88:
    // 0x3dde88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3dde88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3dde8c:
    // 0x3dde8c: 0xc136b24  jal         func_4DAC90
label_3dde90:
    if (ctx->pc == 0x3DDE90u) {
        ctx->pc = 0x3DDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE8Cu;
        // 0x3dde90: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE94u;
        goto label_3dde94;
    }
    ctx->pc = 0x3DDE8Cu;
    SET_GPR_U32(ctx, 31, 0x3DDE94u);
    ctx->pc = 0x3DDE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDE8Cu;
    // 0x3dde90: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DDE8Cu, 0x3DDE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDE94u;
label_3dde94:
    // 0x3dde94: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3dde94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dde98:
    // 0x3dde98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3dde98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3dde9c:
    // 0x3dde9c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3dde9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ddea0:
    // 0x3ddea0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ddea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ddea4:
    // 0x3ddea4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ddea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ddea8:
    // 0x3ddea8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3ddea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ddeac:
    // 0x3ddeac: 0xc136b24  jal         func_4DAC90
label_3ddeb0:
    if (ctx->pc == 0x3DDEB0u) {
        ctx->pc = 0x3DDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEACu;
        // 0x3ddeb0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDEB4u;
        goto label_3ddeb4;
    }
    ctx->pc = 0x3DDEACu;
    SET_GPR_U32(ctx, 31, 0x3DDEB4u);
    ctx->pc = 0x3DDEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDEACu;
    // 0x3ddeb0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DDEACu, 0x3DDEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDEB4u;
label_3ddeb4:
    // 0x3ddeb4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ddeb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ddeb8:
    // 0x3ddeb8: 0x3c03a2ff  lui         $v1, 0xA2FF
    ctx->pc = 0x3ddeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41727 << 16));
label_3ddebc:
    // 0x3ddebc: 0x346327d3  ori         $v1, $v1, 0x27D3
    ctx->pc = 0x3ddebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10195);
label_3ddec0:
    // 0x3ddec0: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x3ddec0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
label_3ddec4:
    // 0x3ddec4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ddec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ddec8:
    // 0x3ddec8: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x3ddec8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_3ddecc:
    // 0x3ddecc: 0x8e8400c4  lw          $a0, 0xC4($s4)
    ctx->pc = 0x3ddeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_3dded0:
    // 0x3dded0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_3dded4:
    if (ctx->pc == 0x3DDED4u) {
        ctx->pc = 0x3DDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDED0u;
        // 0x3dded4: 0x3c023bf6  lui         $v0, 0x3BF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15350 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDED8u;
        goto label_3dded8;
    }
    ctx->pc = 0x3DDED0u;
    {
        const bool branch_taken_0x3dded0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDED0u;
        // 0x3dded4: 0x3c023bf6  lui         $v0, 0x3BF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15350 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dded0) {
            ctx->pc = 0x3DDEF4u;
            goto label_3ddef4;
        }
    }
    ctx->pc = 0x3DDED8u;
label_3dded8:
    // 0x3dded8: 0x34427669  ori         $v0, $v0, 0x7669
    ctx->pc = 0x3dded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30313);
label_3ddedc:
    // 0x3ddedc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_3ddee0:
    if (ctx->pc == 0x3DDEE0u) {
        ctx->pc = 0x3DDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEDCu;
        // 0x3ddee0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDEE4u;
        goto label_3ddee4;
    }
    ctx->pc = 0x3DDEDCu;
    {
        const bool branch_taken_0x3ddedc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEDCu;
        // 0x3ddee0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddedc) {
            ctx->pc = 0x3DDEF8u;
            goto label_3ddef8;
        }
    }
    ctx->pc = 0x3DDEE4u;
label_3ddee4:
    // 0x3ddee4: 0x3c028869  lui         $v0, 0x8869
    ctx->pc = 0x3ddee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34921 << 16));
label_3ddee8:
    // 0x3ddee8: 0x34425784  ori         $v0, $v0, 0x5784
    ctx->pc = 0x3ddee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22404);
label_3ddeec:
    // 0x3ddeec: 0x1482001b  bne         $a0, $v0, . + 4 + (0x1B << 2)
label_3ddef0:
    if (ctx->pc == 0x3DDEF0u) {
        ctx->pc = 0x3DDEF4u;
        goto label_3ddef4;
    }
    ctx->pc = 0x3DDEECu;
    {
        const bool branch_taken_0x3ddeec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ddeec) {
            ctx->pc = 0x3DDF5Cu;
            goto label_3ddf5c;
        }
    }
    ctx->pc = 0x3DDEF4u;
label_3ddef4:
    // 0x3ddef4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ddef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ddef8:
    // 0x3ddef8: 0x3c014053  lui         $at, 0x4053
    ctx->pc = 0x3ddef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16467 << 16));
label_3ddefc:
    // 0x3ddefc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3ddefcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3ddf00:
    // 0x3ddf00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ddf00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ddf04:
    // 0x3ddf04: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x3ddf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_3ddf08:
    // 0x3ddf08: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3ddf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3ddf0c:
    // 0x3ddf0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ddf0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ddf10:
    // 0x3ddf10: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3ddf10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3ddf14:
    // 0x3ddf14: 0x26c4b8b8  addiu       $a0, $s6, -0x4748
    ctx->pc = 0x3ddf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
label_3ddf18:
    // 0x3ddf18: 0xc0cd518  jal         func_335460
label_3ddf1c:
    if (ctx->pc == 0x3DDF1Cu) {
        ctx->pc = 0x3DDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF18u;
        // 0x3ddf1c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDF20u;
        goto label_3ddf20;
    }
    ctx->pc = 0x3DDF18u;
    SET_GPR_U32(ctx, 31, 0x3DDF20u);
    ctx->pc = 0x3DDF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDF18u;
    // 0x3ddf1c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DDF18u, 0x3DDF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDF20u;
label_3ddf20:
    // 0x3ddf20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ddf20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3ddf24:
    // 0x3ddf24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ddf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ddf28:
    // 0x3ddf28: 0xc136b24  jal         func_4DAC90
label_3ddf2c:
    if (ctx->pc == 0x3DDF2Cu) {
        ctx->pc = 0x3DDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF28u;
        // 0x3ddf2c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDF30u;
        goto label_3ddf30;
    }
    ctx->pc = 0x3DDF28u;
    SET_GPR_U32(ctx, 31, 0x3DDF30u);
    ctx->pc = 0x3DDF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDF28u;
    // 0x3ddf2c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DDF28u, 0x3DDF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDF30u;
label_3ddf30:
    // 0x3ddf30: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ddf30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ddf34:
    // 0x3ddf34: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ddf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ddf38:
    // 0x3ddf38: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ddf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ddf3c:
    // 0x3ddf3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ddf3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ddf40:
    // 0x3ddf40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ddf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ddf44:
    // 0x3ddf44: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3ddf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ddf48:
    // 0x3ddf48: 0xc136b24  jal         func_4DAC90
label_3ddf4c:
    if (ctx->pc == 0x3DDF4Cu) {
        ctx->pc = 0x3DDF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF48u;
        // 0x3ddf4c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDF50u;
        goto label_3ddf50;
    }
    ctx->pc = 0x3DDF48u;
    SET_GPR_U32(ctx, 31, 0x3DDF50u);
    ctx->pc = 0x3DDF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDF48u;
    // 0x3ddf4c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DDF48u, 0x3DDF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDF50u;
label_3ddf50:
    // 0x3ddf50: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ddf50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ddf54:
    // 0x3ddf54: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x3ddf54u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
label_3ddf58:
    // 0x3ddf58: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ddf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ddf5c:
    // 0x3ddf5c: 0x3c02ea9c  lui         $v0, 0xEA9C
    ctx->pc = 0x3ddf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60060 << 16));
label_3ddf60:
    // 0x3ddf60: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x3ddf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_3ddf64:
    // 0x3ddf64: 0x34428ab3  ori         $v0, $v0, 0x8AB3
    ctx->pc = 0x3ddf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35507);
label_3ddf68:
    // 0x3ddf68: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_3ddf6c:
    if (ctx->pc == 0x3DDF6Cu) {
        ctx->pc = 0x3DDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF68u;
        // 0x3ddf6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDF70u;
        goto label_3ddf70;
    }
    ctx->pc = 0x3DDF68u;
    {
        const bool branch_taken_0x3ddf68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF68u;
        // 0x3ddf6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddf68) {
            ctx->pc = 0x3DDFD8u;
            goto label_3ddfd8;
        }
    }
    ctx->pc = 0x3DDF70u;
label_3ddf70:
    // 0x3ddf70: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3ddf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3ddf74:
    // 0x3ddf74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ddf74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ddf78:
    // 0x3ddf78: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ddf78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ddf7c:
    // 0x3ddf7c: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x3ddf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_3ddf80:
    // 0x3ddf80: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3ddf80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3ddf84:
    // 0x3ddf84: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3ddf84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3ddf88:
    // 0x3ddf88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ddf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ddf8c:
    // 0x3ddf8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3ddf8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3ddf90:
    // 0x3ddf90: 0x26c4b8b8  addiu       $a0, $s6, -0x4748
    ctx->pc = 0x3ddf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
label_3ddf94:
    // 0x3ddf94: 0xc0cd518  jal         func_335460
label_3ddf98:
    if (ctx->pc == 0x3DDF98u) {
        ctx->pc = 0x3DDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF94u;
        // 0x3ddf98: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDF9Cu;
        goto label_3ddf9c;
    }
    ctx->pc = 0x3DDF94u;
    SET_GPR_U32(ctx, 31, 0x3DDF9Cu);
    ctx->pc = 0x3DDF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDF94u;
    // 0x3ddf98: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DDF94u, 0x3DDF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDF9Cu;
label_3ddf9c:
    // 0x3ddf9c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ddf9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3ddfa0:
    // 0x3ddfa0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ddfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ddfa4:
    // 0x3ddfa4: 0xc136b24  jal         func_4DAC90
label_3ddfa8:
    if (ctx->pc == 0x3DDFA8u) {
        ctx->pc = 0x3DDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFA4u;
        // 0x3ddfa8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDFACu;
        goto label_3ddfac;
    }
    ctx->pc = 0x3DDFA4u;
    SET_GPR_U32(ctx, 31, 0x3DDFACu);
    ctx->pc = 0x3DDFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDFA4u;
    // 0x3ddfa8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DDFA4u, 0x3DDFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDFACu;
label_3ddfac:
    // 0x3ddfac: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ddfacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ddfb0:
    // 0x3ddfb0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ddfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ddfb4:
    // 0x3ddfb4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ddfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ddfb8:
    // 0x3ddfb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ddfb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ddfbc:
    // 0x3ddfbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ddfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ddfc0:
    // 0x3ddfc0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3ddfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ddfc4:
    // 0x3ddfc4: 0xc136b24  jal         func_4DAC90
label_3ddfc8:
    if (ctx->pc == 0x3DDFC8u) {
        ctx->pc = 0x3DDFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFC4u;
        // 0x3ddfc8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDFCCu;
        goto label_3ddfcc;
    }
    ctx->pc = 0x3DDFC4u;
    SET_GPR_U32(ctx, 31, 0x3DDFCCu);
    ctx->pc = 0x3DDFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDFC4u;
    // 0x3ddfc8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DDFC4u, 0x3DDFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDFCCu;
label_3ddfcc:
    // 0x3ddfcc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ddfccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ddfd0:
    // 0x3ddfd0: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x3ddfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
label_3ddfd4:
    // 0x3ddfd4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ddfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ddfd8:
    // 0x3ddfd8: 0x3c028478  lui         $v0, 0x8478
    ctx->pc = 0x3ddfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33912 << 16));
label_3ddfdc:
    // 0x3ddfdc: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x3ddfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_3ddfe0:
    // 0x3ddfe0: 0x3442170e  ori         $v0, $v0, 0x170E
    ctx->pc = 0x3ddfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5902);
label_3ddfe4:
    // 0x3ddfe4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_3ddfe8:
    if (ctx->pc == 0x3DDFE8u) {
        ctx->pc = 0x3DDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFE4u;
        // 0x3ddfe8: 0x3c0275bd  lui         $v0, 0x75BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDFECu;
        goto label_3ddfec;
    }
    ctx->pc = 0x3DDFE4u;
    {
        const bool branch_taken_0x3ddfe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFE4u;
        // 0x3ddfe8: 0x3c0275bd  lui         $v0, 0x75BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddfe4) {
            ctx->pc = 0x3DE014u;
            goto label_3de014;
        }
    }
    ctx->pc = 0x3DDFECu;
label_3ddfec:
    // 0x3ddfec: 0x34426a7e  ori         $v0, $v0, 0x6A7E
    ctx->pc = 0x3ddfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27262);
label_3ddff0:
    // 0x3ddff0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3ddff4:
    if (ctx->pc == 0x3DDFF4u) {
        ctx->pc = 0x3DDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFF0u;
        // 0x3ddff4: 0x3c0271ac  lui         $v0, 0x71AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDFF8u;
        goto label_3ddff8;
    }
    ctx->pc = 0x3DDFF0u;
    {
        const bool branch_taken_0x3ddff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFF0u;
        // 0x3ddff4: 0x3c0271ac  lui         $v0, 0x71AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddff0) {
            ctx->pc = 0x3DE014u;
            goto label_3de014;
        }
    }
    ctx->pc = 0x3DDFF8u;
label_3ddff8:
    // 0x3ddff8: 0x34429023  ori         $v0, $v0, 0x9023
    ctx->pc = 0x3ddff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36899);
label_3ddffc:
    // 0x3ddffc: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_3de000:
    if (ctx->pc == 0x3DE000u) {
        ctx->pc = 0x3DE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFFCu;
        // 0x3de000: 0x26e316c0  addiu       $v1, $s7, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE004u;
        goto label_3de004;
    }
    ctx->pc = 0x3DDFFCu;
    {
        const bool branch_taken_0x3ddffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ddffc) {
            ctx->pc = 0x3DE000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDFFCu;
            // 0x3de000: 0x26e316c0  addiu       $v1, $s7, 0x16C0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5824));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE018u;
            goto label_3de018;
        }
    }
    ctx->pc = 0x3DE004u;
label_3de004:
    // 0x3de004: 0x3c02b948  lui         $v0, 0xB948
    ctx->pc = 0x3de004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47432 << 16));
label_3de008:
    // 0x3de008: 0x3442765a  ori         $v0, $v0, 0x765A
    ctx->pc = 0x3de008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30298);
label_3de00c:
    // 0x3de00c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3de010:
    if (ctx->pc == 0x3DE010u) {
        ctx->pc = 0x3DE014u;
        goto label_3de014;
    }
    ctx->pc = 0x3DE00Cu;
    {
        const bool branch_taken_0x3de00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de00c) {
            ctx->pc = 0x3DE020u;
            goto label_3de020;
        }
    }
    ctx->pc = 0x3DE014u;
label_3de014:
    // 0x3de014: 0x26e316c0  addiu       $v1, $s7, 0x16C0
    ctx->pc = 0x3de014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5824));
label_3de018:
    // 0x3de018: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3de018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3de01c:
    // 0x3de01c: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x3de01cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
label_3de020:
    // 0x3de020: 0x3c02e020  lui         $v0, 0xE020
    ctx->pc = 0x3de020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57376 << 16));
label_3de024:
    // 0x3de024: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x3de024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_3de028:
    // 0x3de028: 0x344269f7  ori         $v0, $v0, 0x69F7
    ctx->pc = 0x3de028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27127);
label_3de02c:
    // 0x3de02c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_3de030:
    if (ctx->pc == 0x3DE030u) {
        ctx->pc = 0x3DE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE02Cu;
        // 0x3de030: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE034u;
        goto label_3de034;
    }
    ctx->pc = 0x3DE02Cu;
    {
        const bool branch_taken_0x3de02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE02Cu;
        // 0x3de030: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de02c) {
            ctx->pc = 0x3DE078u;
            goto label_3de078;
        }
    }
    ctx->pc = 0x3DE034u;
label_3de034:
    // 0x3de034: 0x27c31740  addiu       $v1, $fp, 0x1740
    ctx->pc = 0x3de034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5952));
label_3de038:
    // 0x3de038: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x3de038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
label_3de03c:
    // 0x3de03c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3de03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de040:
    // 0x3de040: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3de040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3de044:
    // 0x3de044: 0x26c4b8b8  addiu       $a0, $s6, -0x4748
    ctx->pc = 0x3de044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
label_3de048:
    // 0x3de048: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x3de048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_3de04c:
    // 0x3de04c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3de04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3de050:
    // 0x3de050: 0xc0cd518  jal         func_335460
label_3de054:
    if (ctx->pc == 0x3DE054u) {
        ctx->pc = 0x3DE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE050u;
        // 0x3de054: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE058u;
        goto label_3de058;
    }
    ctx->pc = 0x3DE050u;
    SET_GPR_U32(ctx, 31, 0x3DE058u);
    ctx->pc = 0x3DE054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE050u;
    // 0x3de054: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DE050u, 0x3DE058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE058u;
label_3de058:
    // 0x3de058: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3de058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3de05c:
    // 0x3de05c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3de05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3de060:
    // 0x3de060: 0xc136b24  jal         func_4DAC90
label_3de064:
    if (ctx->pc == 0x3DE064u) {
        ctx->pc = 0x3DE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE060u;
        // 0x3de064: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE068u;
        goto label_3de068;
    }
    ctx->pc = 0x3DE060u;
    SET_GPR_U32(ctx, 31, 0x3DE068u);
    ctx->pc = 0x3DE064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE060u;
    // 0x3de064: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DE060u, 0x3DE068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE068u;
label_3de068:
    // 0x3de068: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3de068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3de06c:
    // 0x3de06c: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x3de06cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
label_3de070:
    // 0x3de070: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3de070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3de074:
    // 0x3de074: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3de074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3de078:
    // 0x3de078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3de078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3de07c:
    // 0x3de07c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3de07cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3de080:
    // 0x3de080: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x3de080u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_3de084:
    // 0x3de084: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3de084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3de088:
    // 0x3de088: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3de088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3de08c:
    // 0x3de08c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3de08cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3de090:
    // 0x3de090: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3de090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3de094:
    // 0x3de094: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3de094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3de098:
    // 0x3de098: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3de098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3de09c:
    // 0x3de09c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3de09cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3de0a0:
    // 0x3de0a0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3de0a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3de0a4:
    // 0x3de0a4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3de0a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3de0a8:
    // 0x3de0a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3de0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3de0ac:
    // 0x3de0ac: 0x3e00008  jr          $ra
label_3de0b0:
    if (ctx->pc == 0x3DE0B0u) {
        ctx->pc = 0x3DE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0ACu;
        // 0x3de0b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE0B4u;
        goto label_3de0b4;
    }
    ctx->pc = 0x3DE0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0ACu;
        // 0x3de0b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE0B4u;
label_3de0b4:
    // 0x3de0b4: 0x0  nop
    ctx->pc = 0x3de0b4u;
    // NOP
    ctx->pc = 0x3de0b8u;
}
