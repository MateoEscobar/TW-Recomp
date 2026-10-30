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

// Function: sub_003EFDA8
// Address: 0x3efda8 - 0x3f01d8
void sub_003EFDA8_0x3efda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFDA8_0x3efda8");
#endif

    switch (ctx->pc) {
        case 0x3efda8u: goto label_3efda8;
        case 0x3efdacu: goto label_3efdac;
        case 0x3efdb0u: goto label_3efdb0;
        case 0x3efdb4u: goto label_3efdb4;
        case 0x3efdb8u: goto label_3efdb8;
        case 0x3efdbcu: goto label_3efdbc;
        case 0x3efdc0u: goto label_3efdc0;
        case 0x3efdc4u: goto label_3efdc4;
        case 0x3efdc8u: goto label_3efdc8;
        case 0x3efdccu: goto label_3efdcc;
        case 0x3efdd0u: goto label_3efdd0;
        case 0x3efdd4u: goto label_3efdd4;
        case 0x3efdd8u: goto label_3efdd8;
        case 0x3efddcu: goto label_3efddc;
        case 0x3efde0u: goto label_3efde0;
        case 0x3efde4u: goto label_3efde4;
        case 0x3efde8u: goto label_3efde8;
        case 0x3efdecu: goto label_3efdec;
        case 0x3efdf0u: goto label_3efdf0;
        case 0x3efdf4u: goto label_3efdf4;
        case 0x3efdf8u: goto label_3efdf8;
        case 0x3efdfcu: goto label_3efdfc;
        case 0x3efe00u: goto label_3efe00;
        case 0x3efe04u: goto label_3efe04;
        case 0x3efe08u: goto label_3efe08;
        case 0x3efe0cu: goto label_3efe0c;
        case 0x3efe10u: goto label_3efe10;
        case 0x3efe14u: goto label_3efe14;
        case 0x3efe18u: goto label_3efe18;
        case 0x3efe1cu: goto label_3efe1c;
        case 0x3efe20u: goto label_3efe20;
        case 0x3efe24u: goto label_3efe24;
        case 0x3efe28u: goto label_3efe28;
        case 0x3efe2cu: goto label_3efe2c;
        case 0x3efe30u: goto label_3efe30;
        case 0x3efe34u: goto label_3efe34;
        case 0x3efe38u: goto label_3efe38;
        case 0x3efe3cu: goto label_3efe3c;
        case 0x3efe40u: goto label_3efe40;
        case 0x3efe44u: goto label_3efe44;
        case 0x3efe48u: goto label_3efe48;
        case 0x3efe4cu: goto label_3efe4c;
        case 0x3efe50u: goto label_3efe50;
        case 0x3efe54u: goto label_3efe54;
        case 0x3efe58u: goto label_3efe58;
        case 0x3efe5cu: goto label_3efe5c;
        case 0x3efe60u: goto label_3efe60;
        case 0x3efe64u: goto label_3efe64;
        case 0x3efe68u: goto label_3efe68;
        case 0x3efe6cu: goto label_3efe6c;
        case 0x3efe70u: goto label_3efe70;
        case 0x3efe74u: goto label_3efe74;
        case 0x3efe78u: goto label_3efe78;
        case 0x3efe7cu: goto label_3efe7c;
        case 0x3efe80u: goto label_3efe80;
        case 0x3efe84u: goto label_3efe84;
        case 0x3efe88u: goto label_3efe88;
        case 0x3efe8cu: goto label_3efe8c;
        case 0x3efe90u: goto label_3efe90;
        case 0x3efe94u: goto label_3efe94;
        case 0x3efe98u: goto label_3efe98;
        case 0x3efe9cu: goto label_3efe9c;
        case 0x3efea0u: goto label_3efea0;
        case 0x3efea4u: goto label_3efea4;
        case 0x3efea8u: goto label_3efea8;
        case 0x3efeacu: goto label_3efeac;
        case 0x3efeb0u: goto label_3efeb0;
        case 0x3efeb4u: goto label_3efeb4;
        case 0x3efeb8u: goto label_3efeb8;
        case 0x3efebcu: goto label_3efebc;
        case 0x3efec0u: goto label_3efec0;
        case 0x3efec4u: goto label_3efec4;
        case 0x3efec8u: goto label_3efec8;
        case 0x3efeccu: goto label_3efecc;
        case 0x3efed0u: goto label_3efed0;
        case 0x3efed4u: goto label_3efed4;
        case 0x3efed8u: goto label_3efed8;
        case 0x3efedcu: goto label_3efedc;
        case 0x3efee0u: goto label_3efee0;
        case 0x3efee4u: goto label_3efee4;
        case 0x3efee8u: goto label_3efee8;
        case 0x3efeecu: goto label_3efeec;
        case 0x3efef0u: goto label_3efef0;
        case 0x3efef4u: goto label_3efef4;
        case 0x3efef8u: goto label_3efef8;
        case 0x3efefcu: goto label_3efefc;
        case 0x3eff00u: goto label_3eff00;
        case 0x3eff04u: goto label_3eff04;
        case 0x3eff08u: goto label_3eff08;
        case 0x3eff0cu: goto label_3eff0c;
        case 0x3eff10u: goto label_3eff10;
        case 0x3eff14u: goto label_3eff14;
        case 0x3eff18u: goto label_3eff18;
        case 0x3eff1cu: goto label_3eff1c;
        case 0x3eff20u: goto label_3eff20;
        case 0x3eff24u: goto label_3eff24;
        case 0x3eff28u: goto label_3eff28;
        case 0x3eff2cu: goto label_3eff2c;
        case 0x3eff30u: goto label_3eff30;
        case 0x3eff34u: goto label_3eff34;
        case 0x3eff38u: goto label_3eff38;
        case 0x3eff3cu: goto label_3eff3c;
        case 0x3eff40u: goto label_3eff40;
        case 0x3eff44u: goto label_3eff44;
        case 0x3eff48u: goto label_3eff48;
        case 0x3eff4cu: goto label_3eff4c;
        case 0x3eff50u: goto label_3eff50;
        case 0x3eff54u: goto label_3eff54;
        case 0x3eff58u: goto label_3eff58;
        case 0x3eff5cu: goto label_3eff5c;
        case 0x3eff60u: goto label_3eff60;
        case 0x3eff64u: goto label_3eff64;
        case 0x3eff68u: goto label_3eff68;
        case 0x3eff6cu: goto label_3eff6c;
        case 0x3eff70u: goto label_3eff70;
        case 0x3eff74u: goto label_3eff74;
        case 0x3eff78u: goto label_3eff78;
        case 0x3eff7cu: goto label_3eff7c;
        case 0x3eff80u: goto label_3eff80;
        case 0x3eff84u: goto label_3eff84;
        case 0x3eff88u: goto label_3eff88;
        case 0x3eff8cu: goto label_3eff8c;
        case 0x3eff90u: goto label_3eff90;
        case 0x3eff94u: goto label_3eff94;
        case 0x3eff98u: goto label_3eff98;
        case 0x3eff9cu: goto label_3eff9c;
        case 0x3effa0u: goto label_3effa0;
        case 0x3effa4u: goto label_3effa4;
        case 0x3effa8u: goto label_3effa8;
        case 0x3effacu: goto label_3effac;
        case 0x3effb0u: goto label_3effb0;
        case 0x3effb4u: goto label_3effb4;
        case 0x3effb8u: goto label_3effb8;
        case 0x3effbcu: goto label_3effbc;
        case 0x3effc0u: goto label_3effc0;
        case 0x3effc4u: goto label_3effc4;
        case 0x3effc8u: goto label_3effc8;
        case 0x3effccu: goto label_3effcc;
        case 0x3effd0u: goto label_3effd0;
        case 0x3effd4u: goto label_3effd4;
        case 0x3effd8u: goto label_3effd8;
        case 0x3effdcu: goto label_3effdc;
        case 0x3effe0u: goto label_3effe0;
        case 0x3effe4u: goto label_3effe4;
        case 0x3effe8u: goto label_3effe8;
        case 0x3effecu: goto label_3effec;
        case 0x3efff0u: goto label_3efff0;
        case 0x3efff4u: goto label_3efff4;
        case 0x3efff8u: goto label_3efff8;
        case 0x3efffcu: goto label_3efffc;
        case 0x3f0000u: goto label_3f0000;
        case 0x3f0004u: goto label_3f0004;
        case 0x3f0008u: goto label_3f0008;
        case 0x3f000cu: goto label_3f000c;
        case 0x3f0010u: goto label_3f0010;
        case 0x3f0014u: goto label_3f0014;
        case 0x3f0018u: goto label_3f0018;
        case 0x3f001cu: goto label_3f001c;
        case 0x3f0020u: goto label_3f0020;
        case 0x3f0024u: goto label_3f0024;
        case 0x3f0028u: goto label_3f0028;
        case 0x3f002cu: goto label_3f002c;
        case 0x3f0030u: goto label_3f0030;
        case 0x3f0034u: goto label_3f0034;
        case 0x3f0038u: goto label_3f0038;
        case 0x3f003cu: goto label_3f003c;
        case 0x3f0040u: goto label_3f0040;
        case 0x3f0044u: goto label_3f0044;
        case 0x3f0048u: goto label_3f0048;
        case 0x3f004cu: goto label_3f004c;
        case 0x3f0050u: goto label_3f0050;
        case 0x3f0054u: goto label_3f0054;
        case 0x3f0058u: goto label_3f0058;
        case 0x3f005cu: goto label_3f005c;
        case 0x3f0060u: goto label_3f0060;
        case 0x3f0064u: goto label_3f0064;
        case 0x3f0068u: goto label_3f0068;
        case 0x3f006cu: goto label_3f006c;
        case 0x3f0070u: goto label_3f0070;
        case 0x3f0074u: goto label_3f0074;
        case 0x3f0078u: goto label_3f0078;
        case 0x3f007cu: goto label_3f007c;
        case 0x3f0080u: goto label_3f0080;
        case 0x3f0084u: goto label_3f0084;
        case 0x3f0088u: goto label_3f0088;
        case 0x3f008cu: goto label_3f008c;
        case 0x3f0090u: goto label_3f0090;
        case 0x3f0094u: goto label_3f0094;
        case 0x3f0098u: goto label_3f0098;
        case 0x3f009cu: goto label_3f009c;
        case 0x3f00a0u: goto label_3f00a0;
        case 0x3f00a4u: goto label_3f00a4;
        case 0x3f00a8u: goto label_3f00a8;
        case 0x3f00acu: goto label_3f00ac;
        case 0x3f00b0u: goto label_3f00b0;
        case 0x3f00b4u: goto label_3f00b4;
        case 0x3f00b8u: goto label_3f00b8;
        case 0x3f00bcu: goto label_3f00bc;
        case 0x3f00c0u: goto label_3f00c0;
        case 0x3f00c4u: goto label_3f00c4;
        case 0x3f00c8u: goto label_3f00c8;
        case 0x3f00ccu: goto label_3f00cc;
        case 0x3f00d0u: goto label_3f00d0;
        case 0x3f00d4u: goto label_3f00d4;
        case 0x3f00d8u: goto label_3f00d8;
        case 0x3f00dcu: goto label_3f00dc;
        case 0x3f00e0u: goto label_3f00e0;
        case 0x3f00e4u: goto label_3f00e4;
        case 0x3f00e8u: goto label_3f00e8;
        case 0x3f00ecu: goto label_3f00ec;
        case 0x3f00f0u: goto label_3f00f0;
        case 0x3f00f4u: goto label_3f00f4;
        case 0x3f00f8u: goto label_3f00f8;
        case 0x3f00fcu: goto label_3f00fc;
        case 0x3f0100u: goto label_3f0100;
        case 0x3f0104u: goto label_3f0104;
        case 0x3f0108u: goto label_3f0108;
        case 0x3f010cu: goto label_3f010c;
        case 0x3f0110u: goto label_3f0110;
        case 0x3f0114u: goto label_3f0114;
        case 0x3f0118u: goto label_3f0118;
        case 0x3f011cu: goto label_3f011c;
        case 0x3f0120u: goto label_3f0120;
        case 0x3f0124u: goto label_3f0124;
        case 0x3f0128u: goto label_3f0128;
        case 0x3f012cu: goto label_3f012c;
        case 0x3f0130u: goto label_3f0130;
        case 0x3f0134u: goto label_3f0134;
        case 0x3f0138u: goto label_3f0138;
        case 0x3f013cu: goto label_3f013c;
        case 0x3f0140u: goto label_3f0140;
        case 0x3f0144u: goto label_3f0144;
        case 0x3f0148u: goto label_3f0148;
        case 0x3f014cu: goto label_3f014c;
        case 0x3f0150u: goto label_3f0150;
        case 0x3f0154u: goto label_3f0154;
        case 0x3f0158u: goto label_3f0158;
        case 0x3f015cu: goto label_3f015c;
        case 0x3f0160u: goto label_3f0160;
        case 0x3f0164u: goto label_3f0164;
        case 0x3f0168u: goto label_3f0168;
        case 0x3f016cu: goto label_3f016c;
        case 0x3f0170u: goto label_3f0170;
        case 0x3f0174u: goto label_3f0174;
        case 0x3f0178u: goto label_3f0178;
        case 0x3f017cu: goto label_3f017c;
        case 0x3f0180u: goto label_3f0180;
        case 0x3f0184u: goto label_3f0184;
        case 0x3f0188u: goto label_3f0188;
        case 0x3f018cu: goto label_3f018c;
        case 0x3f0190u: goto label_3f0190;
        case 0x3f0194u: goto label_3f0194;
        case 0x3f0198u: goto label_3f0198;
        case 0x3f019cu: goto label_3f019c;
        case 0x3f01a0u: goto label_3f01a0;
        case 0x3f01a4u: goto label_3f01a4;
        case 0x3f01a8u: goto label_3f01a8;
        case 0x3f01acu: goto label_3f01ac;
        case 0x3f01b0u: goto label_3f01b0;
        case 0x3f01b4u: goto label_3f01b4;
        case 0x3f01b8u: goto label_3f01b8;
        case 0x3f01bcu: goto label_3f01bc;
        case 0x3f01c0u: goto label_3f01c0;
        case 0x3f01c4u: goto label_3f01c4;
        case 0x3f01c8u: goto label_3f01c8;
        case 0x3f01ccu: goto label_3f01cc;
        case 0x3f01d0u: goto label_3f01d0;
        case 0x3f01d4u: goto label_3f01d4;
        default: break;
    }

    ctx->pc = 0x3efda8u;

label_3efda8:
    // 0x3efda8: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x3efda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
label_3efdac:
    // 0x3efdac: 0x7fb30460  sq          $s3, 0x460($sp)
    ctx->pc = 0x3efdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 19));
label_3efdb0:
    // 0x3efdb0: 0x7fb40450  sq          $s4, 0x450($sp)
    ctx->pc = 0x3efdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 20));
label_3efdb4:
    // 0x3efdb4: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x3efdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
label_3efdb8:
    // 0x3efdb8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3efdb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3efdbc:
    // 0x3efdbc: 0x7fb10480  sq          $s1, 0x480($sp)
    ctx->pc = 0x3efdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 17));
label_3efdc0:
    // 0x3efdc0: 0x7fb20470  sq          $s2, 0x470($sp)
    ctx->pc = 0x3efdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 18));
label_3efdc4:
    // 0x3efdc4: 0x7fb50440  sq          $s5, 0x440($sp)
    ctx->pc = 0x3efdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 21));
label_3efdc8:
    // 0x3efdc8: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3efdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
label_3efdcc:
    // 0x3efdcc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3efdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3efdd0:
    // 0x3efdd0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3efdd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3efdd4:
    // 0x3efdd4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3efdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3efdd8:
    // 0x3efdd8: 0x40f809  jalr        $v0
label_3efddc:
    if (ctx->pc == 0x3EFDDCu) {
        ctx->pc = 0x3EFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDD8u;
        // 0x3efddc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFDE0u;
        goto label_3efde0;
    }
    ctx->pc = 0x3EFDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EFDE0u);
        ctx->pc = 0x3EFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDD8u;
        // 0x3efddc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFDD8u, 0x3EFDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EFDE0u;
label_3efde0:
    // 0x3efde0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3efde0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3efde4:
    // 0x3efde4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3efde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3efde8:
    // 0x3efde8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3efdec:
    if (ctx->pc == 0x3EFDECu) {
        ctx->pc = 0x3EFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDE8u;
        // 0x3efdec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFDF0u;
        goto label_3efdf0;
    }
    ctx->pc = 0x3EFDE8u;
    {
        const bool branch_taken_0x3efde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDE8u;
        // 0x3efdec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efde8) {
            ctx->pc = 0x3EFE08u;
            goto label_3efe08;
        }
    }
    ctx->pc = 0x3EFDF0u;
label_3efdf0:
    // 0x3efdf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3efdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3efdf4:
    // 0x3efdf4: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3efdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3efdf8:
    // 0x3efdf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3efdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3efdfc:
    // 0x3efdfc: 0xc0e637e  jal         func_398DF8
label_3efe00:
    if (ctx->pc == 0x3EFE00u) {
        ctx->pc = 0x3EFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDFCu;
        // 0x3efe00: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFE04u;
        goto label_3efe04;
    }
    ctx->pc = 0x3EFDFCu;
    SET_GPR_U32(ctx, 31, 0x3EFE04u);
    ctx->pc = 0x3EFE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFDFCu;
    // 0x3efe00: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3EFDFCu, 0x3EFE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFE04u;
label_3efe04:
    // 0x3efe04: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3efe04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3efe08:
    // 0x3efe08: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3efe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3efe0c:
    // 0x3efe0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3efe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3efe10:
    // 0x3efe10: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_3efe14:
    if (ctx->pc == 0x3EFE14u) {
        ctx->pc = 0x3EFE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE10u;
        // 0x3efe14: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFE18u;
        goto label_3efe18;
    }
    ctx->pc = 0x3EFE10u;
    {
        const bool branch_taken_0x3efe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EFE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE10u;
        // 0x3efe14: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe10) {
            ctx->pc = 0x3EFE30u;
            goto label_3efe30;
        }
    }
    ctx->pc = 0x3EFE18u;
label_3efe18:
    // 0x3efe18: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3efe18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3efe1c:
    // 0x3efe1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3efe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3efe20:
    // 0x3efe20: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_3efe24:
    if (ctx->pc == 0x3EFE24u) {
        ctx->pc = 0x3EFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE20u;
        // 0x3efe24: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFE28u;
        goto label_3efe28;
    }
    ctx->pc = 0x3EFE20u;
    {
        const bool branch_taken_0x3efe20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE20u;
        // 0x3efe24: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe20) {
            ctx->pc = 0x3EFE40u;
            goto label_3efe40;
        }
    }
    ctx->pc = 0x3EFE28u;
label_3efe28:
    // 0x3efe28: 0x10000005  b           . + 4 + (0x5 << 2)
label_3efe2c:
    if (ctx->pc == 0x3EFE2Cu) {
        ctx->pc = 0x3EFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE28u;
        // 0x3efe2c: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFE30u;
        goto label_3efe30;
    }
    ctx->pc = 0x3EFE28u;
    {
        const bool branch_taken_0x3efe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE28u;
        // 0x3efe2c: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe28) {
            ctx->pc = 0x3EFE40u;
            goto label_3efe40;
        }
    }
    ctx->pc = 0x3EFE30u;
label_3efe30:
    // 0x3efe30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3efe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3efe34:
    // 0x3efe34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3efe38:
    if (ctx->pc == 0x3EFE38u) {
        ctx->pc = 0x3EFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE34u;
        // 0x3efe38: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFE3Cu;
        goto label_3efe3c;
    }
    ctx->pc = 0x3EFE34u;
    {
        const bool branch_taken_0x3efe34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE34u;
        // 0x3efe38: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe34) {
            ctx->pc = 0x3EFE40u;
            goto label_3efe40;
        }
    }
    ctx->pc = 0x3EFE3Cu;
label_3efe3c:
    // 0x3efe3c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x3efe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_3efe40:
    // 0x3efe40: 0x3c01c40a  lui         $at, 0xC40A
    ctx->pc = 0x3efe40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50186 << 16));
label_3efe44:
    // 0x3efe44: 0x3421fe14  ori         $at, $at, 0xFE14
    ctx->pc = 0x3efe44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65044);
label_3efe48:
    // 0x3efe48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3efe48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3efe4c:
    // 0x3efe4c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3efe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3efe50:
    // 0x3efe50: 0x3c01c373  lui         $at, 0xC373
    ctx->pc = 0x3efe50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50035 << 16));
label_3efe54:
    // 0x3efe54: 0x3421a666  ori         $at, $at, 0xA666
    ctx->pc = 0x3efe54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42598);
label_3efe58:
    // 0x3efe58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3efe58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3efe5c:
    // 0x3efe5c: 0x3c01bdf5  lui         $at, 0xBDF5
    ctx->pc = 0x3efe5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48629 << 16));
label_3efe60:
    // 0x3efe60: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3efe60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3efe64:
    // 0x3efe64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3efe64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3efe68:
    // 0x3efe68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3efe68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3efe6c:
    // 0x3efe6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3efe6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3efe70:
    // 0x3efe70: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3efe70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3efe74:
    // 0x3efe74: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3efe74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3efe78:
    // 0x3efe78: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x3efe78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3efe7c:
    // 0x3efe7c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3efe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3efe80:
    // 0x3efe80: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3efe80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3efe84:
    // 0x3efe84: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3efe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3efe88:
    // 0x3efe88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3efe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3efe8c:
    // 0x3efe8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_3efe90:
    if (ctx->pc == 0x3EFE90u) {
        ctx->pc = 0x3EFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE8Cu;
        // 0x3efe90: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFE94u;
        goto label_3efe94;
    }
    ctx->pc = 0x3EFE8Cu;
    {
        const bool branch_taken_0x3efe8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3EFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE8Cu;
        // 0x3efe90: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe8c) {
            ctx->pc = 0x3EFEA8u;
            goto label_3efea8;
        }
    }
    ctx->pc = 0x3EFE94u;
label_3efe94:
    // 0x3efe94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3efe94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3efe98:
    // 0x3efe98: 0x0  nop
    ctx->pc = 0x3efe98u;
    // NOP
label_3efe9c:
    // 0x3efe9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3efe9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3efea0:
    // 0x3efea0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3efea4:
    if (ctx->pc == 0x3EFEA4u) {
        ctx->pc = 0x3EFEA8u;
        goto label_3efea8;
    }
    ctx->pc = 0x3EFEA0u;
    {
        const bool branch_taken_0x3efea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efea0) {
            ctx->pc = 0x3EFEC4u;
            goto label_3efec4;
        }
    }
    ctx->pc = 0x3EFEA8u;
label_3efea8:
    // 0x3efea8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3efea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3efeac:
    // 0x3efeac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3efeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3efeb0:
    // 0x3efeb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3efeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3efeb4:
    // 0x3efeb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3efeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3efeb8:
    // 0x3efeb8: 0x0  nop
    ctx->pc = 0x3efeb8u;
    // NOP
label_3efebc:
    // 0x3efebc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3efebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3efec0:
    // 0x3efec0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3efec0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3efec4:
    // 0x3efec4: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x3efec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
label_3efec8:
    // 0x3efec8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3efec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3efecc:
    // 0x3efecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3efeccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3efed0:
    // 0x3efed0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3efed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3efed4:
    // 0x3efed4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3efed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3efed8:
    // 0x3efed8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3efed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3efedc:
    // 0x3efedc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3efedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3efee0:
    // 0x3efee0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3efee0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3efee4:
    // 0x3efee4: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x3efee4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
label_3efee8:
    // 0x3efee8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3efee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3efeec:
    // 0x3efeec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3efeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3efef0:
    // 0x3efef0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3efef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3efef4:
    // 0x3efef4: 0x14620061  bne         $v1, $v0, . + 4 + (0x61 << 2)
label_3efef8:
    if (ctx->pc == 0x3EFEF8u) {
        ctx->pc = 0x3EFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFEF4u;
        // 0x3efef8: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFEFCu;
        goto label_3efefc;
    }
    ctx->pc = 0x3EFEF4u;
    {
        const bool branch_taken_0x3efef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFEF4u;
        // 0x3efef8: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efef4) {
            ctx->pc = 0x3F007Cu;
            goto label_3f007c;
        }
    }
    ctx->pc = 0x3EFEFCu;
label_3efefc:
    // 0x3efefc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3efefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3eff00:
    // 0x3eff00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3eff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3eff04:
    // 0x3eff04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3eff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3eff08:
    // 0x3eff08: 0x0  nop
    ctx->pc = 0x3eff08u;
    // NOP
label_3eff0c:
    // 0x3eff0c: 0x0  nop
    ctx->pc = 0x3eff0cu;
    // NOP
label_3eff10:
    // 0x3eff10: 0x0  nop
    ctx->pc = 0x3eff10u;
    // NOP
label_3eff14:
    // 0x3eff14: 0x0  nop
    ctx->pc = 0x3eff14u;
    // NOP
label_3eff18:
    // 0x3eff18: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3eff1c:
    if (ctx->pc == 0x3EFF1Cu) {
        ctx->pc = 0x3EFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF18u;
        // 0x3eff1c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFF20u;
        goto label_3eff20;
    }
    ctx->pc = 0x3EFF18u;
    {
        const bool branch_taken_0x3eff18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF18u;
        // 0x3eff1c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eff18) {
            ctx->pc = 0x3EFF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eff08;
        }
    }
    ctx->pc = 0x3EFF20u;
label_3eff20:
    // 0x3eff20: 0xc138ddc  jal         func_4E3770
label_3eff24:
    if (ctx->pc == 0x3EFF24u) {
        ctx->pc = 0x3EFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF20u;
        // 0x3eff24: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFF28u;
        goto label_3eff28;
    }
    ctx->pc = 0x3EFF20u;
    SET_GPR_U32(ctx, 31, 0x3EFF28u);
    ctx->pc = 0x3EFF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFF20u;
    // 0x3eff24: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3EFF20u, 0x3EFF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFF28u;
label_3eff28:
    // 0x3eff28: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3eff28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3eff2c:
    // 0x3eff2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3eff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3eff30:
    // 0x3eff30: 0xc0cd4ee  jal         func_3353B8
label_3eff34:
    if (ctx->pc == 0x3EFF34u) {
        ctx->pc = 0x3EFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF30u;
        // 0x3eff34: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFF38u;
        goto label_3eff38;
    }
    ctx->pc = 0x3EFF30u;
    SET_GPR_U32(ctx, 31, 0x3EFF38u);
    ctx->pc = 0x3EFF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFF30u;
    // 0x3eff34: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EFF30u, 0x3EFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFF38u;
label_3eff38:
    // 0x3eff38: 0x24420017  addiu       $v0, $v0, 0x17
    ctx->pc = 0x3eff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
label_3eff3c:
    // 0x3eff3c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3eff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3eff40:
    // 0x3eff40: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3eff40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3eff44:
    // 0x3eff44: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3eff44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3eff48:
    // 0x3eff48: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3eff48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3eff4c:
    // 0x3eff4c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3eff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3eff50:
    // 0x3eff50: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3eff50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3eff54:
    // 0x3eff54: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3eff54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3eff58:
    // 0x3eff58: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3eff58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eff5c:
    // 0x3eff5c: 0x24845e90  addiu       $a0, $a0, 0x5E90
    ctx->pc = 0x3eff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24208));
label_3eff60:
    // 0x3eff60: 0xc0e94ee  jal         func_3A53B8
label_3eff64:
    if (ctx->pc == 0x3EFF64u) {
        ctx->pc = 0x3EFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF60u;
        // 0x3eff64: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFF68u;
        goto label_3eff68;
    }
    ctx->pc = 0x3EFF60u;
    SET_GPR_U32(ctx, 31, 0x3EFF68u);
    ctx->pc = 0x3EFF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFF60u;
    // 0x3eff64: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53B8u, 0x3EFF60u, 0x3EFF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFF68u;
label_3eff68:
    // 0x3eff68: 0xc047e6c  jal         func_11F9B0
label_3eff6c:
    if (ctx->pc == 0x3EFF6Cu) {
        ctx->pc = 0x3EFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF68u;
        // 0x3eff6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFF70u;
        goto label_3eff70;
    }
    ctx->pc = 0x3EFF68u;
    SET_GPR_U32(ctx, 31, 0x3EFF70u);
    ctx->pc = 0x3EFF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFF68u;
    // 0x3eff6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3EFF68u, 0x3EFF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFF70u;
label_3eff70:
    // 0x3eff70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eff74:
    // 0x3eff74: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3eff74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3eff78:
    // 0x3eff78: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3eff78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3eff7c:
    // 0x3eff7c: 0xa0f809  jalr        $a1
label_3eff80:
    if (ctx->pc == 0x3EFF80u) {
        ctx->pc = 0x3EFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF7Cu;
        // 0x3eff80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFF84u;
        goto label_3eff84;
    }
    ctx->pc = 0x3EFF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3EFF84u);
        ctx->pc = 0x3EFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFF7Cu;
        // 0x3eff80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFF7Cu, 0x3EFF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EFF84u;
label_3eff84:
    // 0x3eff84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3eff84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3eff88:
    // 0x3eff88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3eff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eff8c:
    // 0x3eff8c: 0x3c01c372  lui         $at, 0xC372
    ctx->pc = 0x3eff8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50034 << 16));
label_3eff90:
    // 0x3eff90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3eff90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eff94:
    // 0x3eff94: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3eff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3eff98:
    // 0x3eff98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3eff98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3eff9c:
    // 0x3eff9c: 0x92620020  lbu         $v0, 0x20($s3)
    ctx->pc = 0x3eff9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_3effa0:
    // 0x3effa0: 0x54440018  bnel        $v0, $a0, . + 4 + (0x18 << 2)
label_3effa4:
    if (ctx->pc == 0x3EFFA4u) {
        ctx->pc = 0x3EFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFA0u;
        // 0x3effa4: 0x92630020  lbu         $v1, 0x20($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFFA8u;
        goto label_3effa8;
    }
    ctx->pc = 0x3EFFA0u;
    {
        const bool branch_taken_0x3effa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3effa0) {
            ctx->pc = 0x3EFFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFFA0u;
            // 0x3effa4: 0x92630020  lbu         $v1, 0x20($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0004u;
            goto label_3f0004;
        }
    }
    ctx->pc = 0x3EFFA8u;
label_3effa8:
    // 0x3effa8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3effa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3effac:
    // 0x3effac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3effb0:
    if (ctx->pc == 0x3EFFB0u) {
        ctx->pc = 0x3EFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFACu;
        // 0x3effb0: 0x26700018  addiu       $s0, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFFB4u;
        goto label_3effb4;
    }
    ctx->pc = 0x3EFFACu;
    {
        const bool branch_taken_0x3effac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFACu;
        // 0x3effb0: 0x26700018  addiu       $s0, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3effac) {
            ctx->pc = 0x3F0000u;
            goto label_3f0000;
        }
    }
    ctx->pc = 0x3EFFB4u;
label_3effb4:
    // 0x3effb4: 0xc043d5e  jal         func_10F578
label_3effb8:
    if (ctx->pc == 0x3EFFB8u) {
        ctx->pc = 0x3EFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFB4u;
        // 0x3effb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFFBCu;
        goto label_3effbc;
    }
    ctx->pc = 0x3EFFB4u;
    SET_GPR_U32(ctx, 31, 0x3EFFBCu);
    ctx->pc = 0x3EFFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFFB4u;
    // 0x3effb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3EFFB4u, 0x3EFFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFFBCu;
label_3effbc:
    // 0x3effbc: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_3effc0:
    if (ctx->pc == 0x3EFFC0u) {
        ctx->pc = 0x3EFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFBCu;
        // 0x3effc0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFFC4u;
        goto label_3effc4;
    }
    ctx->pc = 0x3EFFBCu;
    {
        const bool branch_taken_0x3effbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3effbc) {
            ctx->pc = 0x3EFFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFFBCu;
            // 0x3effc0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0080u;
            goto label_3f0080;
        }
    }
    ctx->pc = 0x3EFFC4u;
label_3effc4:
    // 0x3effc4: 0xc043d5e  jal         func_10F578
label_3effc8:
    if (ctx->pc == 0x3EFFC8u) {
        ctx->pc = 0x3EFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFC4u;
        // 0x3effc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFFCCu;
        goto label_3effcc;
    }
    ctx->pc = 0x3EFFC4u;
    SET_GPR_U32(ctx, 31, 0x3EFFCCu);
    ctx->pc = 0x3EFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFFC4u;
    // 0x3effc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3EFFC4u, 0x3EFFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFFCCu;
label_3effcc:
    // 0x3effcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3effccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3effd0:
    // 0x3effd0: 0xc046cf0  jal         func_11B3C0
label_3effd4:
    if (ctx->pc == 0x3EFFD4u) {
        ctx->pc = 0x3EFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFD0u;
        // 0x3effd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFFD8u;
        goto label_3effd8;
    }
    ctx->pc = 0x3EFFD0u;
    SET_GPR_U32(ctx, 31, 0x3EFFD8u);
    ctx->pc = 0x3EFFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFFD0u;
    // 0x3effd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B3C0u, 0x3EFFD0u, 0x3EFFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFFD8u;
label_3effd8:
    // 0x3effd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3effdc:
    if (ctx->pc == 0x3EFFDCu) {
        ctx->pc = 0x3EFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFD8u;
        // 0x3effdc: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFFE0u;
        goto label_3effe0;
    }
    ctx->pc = 0x3EFFD8u;
    {
        const bool branch_taken_0x3effd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFD8u;
        // 0x3effdc: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3effd8) {
            ctx->pc = 0x3EFFECu;
            goto label_3effec;
        }
    }
    ctx->pc = 0x3EFFE0u;
label_3effe0:
    // 0x3effe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3effe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3effe4:
    // 0x3effe4: 0xc046ca6  jal         func_11B298
label_3effe8:
    if (ctx->pc == 0x3EFFE8u) {
        ctx->pc = 0x3EFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFE4u;
        // 0x3effe8: 0x7e0200c0  sq          $v0, 0xC0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFFECu;
        goto label_3effec;
    }
    ctx->pc = 0x3EFFE4u;
    SET_GPR_U32(ctx, 31, 0x3EFFECu);
    ctx->pc = 0x3EFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFFE4u;
    // 0x3effe8: 0x7e0200c0  sq          $v0, 0xC0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B298u, 0x3EFFE4u, 0x3EFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFFECu;
label_3effec:
    // 0x3effec: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x3effecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_3efff0:
    // 0x3efff0: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x3efff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_3efff4:
    // 0x3efff4: 0xa2600020  sb          $zero, 0x20($s3)
    ctx->pc = 0x3efff4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 0));
label_3efff8:
    // 0x3efff8: 0x10000020  b           . + 4 + (0x20 << 2)
label_3efffc:
    if (ctx->pc == 0x3EFFFCu) {
        ctx->pc = 0x3EFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFF8u;
        // 0x3efffc: 0xae63001c  sw          $v1, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0000u;
        goto label_3f0000;
    }
    ctx->pc = 0x3EFFF8u;
    {
        const bool branch_taken_0x3efff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFFF8u;
        // 0x3efffc: 0xae63001c  sw          $v1, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efff8) {
            ctx->pc = 0x3F007Cu;
            goto label_3f007c;
        }
    }
    ctx->pc = 0x3F0000u;
label_3f0000:
    // 0x3f0000: 0x92630020  lbu         $v1, 0x20($s3)
    ctx->pc = 0x3f0000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_3f0004:
    // 0x3f0004: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f0004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f0008:
    // 0x3f0008: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_3f000c:
    if (ctx->pc == 0x3F000Cu) {
        ctx->pc = 0x3F000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0008u;
        // 0x3f000c: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0010u;
        goto label_3f0010;
    }
    ctx->pc = 0x3F0008u;
    {
        const bool branch_taken_0x3f0008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0008u;
        // 0x3f000c: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0008) {
            ctx->pc = 0x3F006Cu;
            goto label_3f006c;
        }
    }
    ctx->pc = 0x3F0010u;
label_3f0010:
    // 0x3f0010: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3f0010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3f0014:
    // 0x3f0014: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3f0018:
    if (ctx->pc == 0x3F0018u) {
        ctx->pc = 0x3F0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0014u;
        // 0x3f0018: 0x2670001c  addiu       $s0, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F001Cu;
        goto label_3f001c;
    }
    ctx->pc = 0x3F0014u;
    {
        const bool branch_taken_0x3f0014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0014u;
        // 0x3f0018: 0x2670001c  addiu       $s0, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0014) {
            ctx->pc = 0x3F0068u;
            goto label_3f0068;
        }
    }
    ctx->pc = 0x3F001Cu;
label_3f001c:
    // 0x3f001c: 0xc043d5e  jal         func_10F578
label_3f0020:
    if (ctx->pc == 0x3F0020u) {
        ctx->pc = 0x3F0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F001Cu;
        // 0x3f0020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0024u;
        goto label_3f0024;
    }
    ctx->pc = 0x3F001Cu;
    SET_GPR_U32(ctx, 31, 0x3F0024u);
    ctx->pc = 0x3F0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F001Cu;
    // 0x3f0020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3F001Cu, 0x3F0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0024u;
label_3f0024:
    // 0x3f0024: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3f0028:
    if (ctx->pc == 0x3F0028u) {
        ctx->pc = 0x3F0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0024u;
        // 0x3f0028: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F002Cu;
        goto label_3f002c;
    }
    ctx->pc = 0x3F0024u;
    {
        const bool branch_taken_0x3f0024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0024) {
            ctx->pc = 0x3F0028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0024u;
            // 0x3f0028: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0080u;
            goto label_3f0080;
        }
    }
    ctx->pc = 0x3F002Cu;
label_3f002c:
    // 0x3f002c: 0xc043d5e  jal         func_10F578
label_3f0030:
    if (ctx->pc == 0x3F0030u) {
        ctx->pc = 0x3F0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F002Cu;
        // 0x3f0030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0034u;
        goto label_3f0034;
    }
    ctx->pc = 0x3F002Cu;
    SET_GPR_U32(ctx, 31, 0x3F0034u);
    ctx->pc = 0x3F0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F002Cu;
    // 0x3f0030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3F002Cu, 0x3F0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0034u;
label_3f0034:
    // 0x3f0034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0038:
    // 0x3f0038: 0xc046cf0  jal         func_11B3C0
label_3f003c:
    if (ctx->pc == 0x3F003Cu) {
        ctx->pc = 0x3F003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0038u;
        // 0x3f003c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0040u;
        goto label_3f0040;
    }
    ctx->pc = 0x3F0038u;
    SET_GPR_U32(ctx, 31, 0x3F0040u);
    ctx->pc = 0x3F003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0038u;
    // 0x3f003c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B3C0u, 0x3F0038u, 0x3F0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0040u;
label_3f0040:
    // 0x3f0040: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f0044:
    if (ctx->pc == 0x3F0044u) {
        ctx->pc = 0x3F0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0040u;
        // 0x3f0044: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0048u;
        goto label_3f0048;
    }
    ctx->pc = 0x3F0040u;
    {
        const bool branch_taken_0x3f0040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0040u;
        // 0x3f0044: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0040) {
            ctx->pc = 0x3F0054u;
            goto label_3f0054;
        }
    }
    ctx->pc = 0x3F0048u;
label_3f0048:
    // 0x3f0048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f004c:
    // 0x3f004c: 0xc046ca6  jal         func_11B298
label_3f0050:
    if (ctx->pc == 0x3F0050u) {
        ctx->pc = 0x3F0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F004Cu;
        // 0x3f0050: 0x7e0200c0  sq          $v0, 0xC0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0054u;
        goto label_3f0054;
    }
    ctx->pc = 0x3F004Cu;
    SET_GPR_U32(ctx, 31, 0x3F0054u);
    ctx->pc = 0x3F0050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F004Cu;
    // 0x3f0050: 0x7e0200c0  sq          $v0, 0xC0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B298u, 0x3F004Cu, 0x3F0054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0054u;
label_3f0054:
    // 0x3f0054: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x3f0054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_3f0058:
    // 0x3f0058: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x3f0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_3f005c:
    // 0x3f005c: 0xa2600020  sb          $zero, 0x20($s3)
    ctx->pc = 0x3f005cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 0));
label_3f0060:
    // 0x3f0060: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f0064:
    if (ctx->pc == 0x3F0064u) {
        ctx->pc = 0x3F0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0060u;
        // 0x3f0064: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0068u;
        goto label_3f0068;
    }
    ctx->pc = 0x3F0060u;
    {
        const bool branch_taken_0x3f0060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0060u;
        // 0x3f0064: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0060) {
            ctx->pc = 0x3F007Cu;
            goto label_3f007c;
        }
    }
    ctx->pc = 0x3F0068u;
label_3f0068:
    // 0x3f0068: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x3f0068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_3f006c:
    // 0x3f006c: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x3f006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_3f0070:
    // 0x3f0070: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x3f0070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_3f0074:
    // 0x3f0074: 0x8c448690  lw          $a0, -0x7970($v0)
    ctx->pc = 0x3f0074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_3f0078:
    // 0x3f0078: 0xae64001c  sw          $a0, 0x1C($s3)
    ctx->pc = 0x3f0078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 4));
label_3f007c:
    // 0x3f007c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3f007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3f0080:
    // 0x3f0080: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3f0080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3f0084:
    // 0x3f0084: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3f0084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3f0088:
    // 0x3f0088: 0x54620038  bnel        $v1, $v0, . + 4 + (0x38 << 2)
label_3f008c:
    if (ctx->pc == 0x3F008Cu) {
        ctx->pc = 0x3F008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0088u;
        // 0x3f008c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0090u;
        goto label_3f0090;
    }
    ctx->pc = 0x3F0088u;
    {
        const bool branch_taken_0x3f0088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0088) {
            ctx->pc = 0x3F008Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0088u;
            // 0x3f008c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F016Cu;
            goto label_3f016c;
        }
    }
    ctx->pc = 0x3F0090u;
label_3f0090:
    // 0x3f0090: 0xc043d5e  jal         func_10F578
label_3f0094:
    if (ctx->pc == 0x3F0094u) {
        ctx->pc = 0x3F0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0090u;
        // 0x3f0094: 0x26640018  addiu       $a0, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0098u;
        goto label_3f0098;
    }
    ctx->pc = 0x3F0090u;
    SET_GPR_U32(ctx, 31, 0x3F0098u);
    ctx->pc = 0x3F0094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0090u;
    // 0x3f0094: 0x26640018  addiu       $a0, $s3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3F0090u, 0x3F0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0098u;
label_3f0098:
    // 0x3f0098: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3f009c:
    if (ctx->pc == 0x3F009Cu) {
        ctx->pc = 0x3F009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0098u;
        // 0x3f009c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F00A0u;
        goto label_3f00a0;
    }
    ctx->pc = 0x3F0098u;
    {
        const bool branch_taken_0x3f0098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0098u;
        // 0x3f009c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0098) {
            ctx->pc = 0x3F00FCu;
            goto label_3f00fc;
        }
    }
    ctx->pc = 0x3F00A0u;
label_3f00a0:
    // 0x3f00a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3f00a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3f00a4:
    // 0x3f00a4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f00a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f00a8:
    // 0x3f00a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3f00a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f00ac:
    // 0x3f00ac: 0x261046e0  addiu       $s0, $s0, 0x46E0
    ctx->pc = 0x3f00acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18144));
label_3f00b0:
    // 0x3f00b0: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3f00b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3f00b4:
    // 0x3f00b4: 0xa2620020  sb          $v0, 0x20($s3)
    ctx->pc = 0x3f00b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 2));
label_3f00b8:
    // 0x3f00b8: 0xc0cd4ee  jal         func_3353B8
label_3f00bc:
    if (ctx->pc == 0x3F00BCu) {
        ctx->pc = 0x3F00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00B8u;
        // 0x3f00bc: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F00C0u;
        goto label_3f00c0;
    }
    ctx->pc = 0x3F00B8u;
    SET_GPR_U32(ctx, 31, 0x3F00C0u);
    ctx->pc = 0x3F00BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F00B8u;
    // 0x3f00bc: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F00B8u, 0x3F00C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F00C0u;
label_3f00c0:
    // 0x3f00c0: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x3f00c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f00c4:
    // 0x3f00c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f00c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f00c8:
    // 0x3f00c8: 0xc047e6c  jal         func_11F9B0
label_3f00cc:
    if (ctx->pc == 0x3F00CCu) {
        ctx->pc = 0x3F00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00C8u;
        // 0x3f00cc: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F00D0u;
        goto label_3f00d0;
    }
    ctx->pc = 0x3F00C8u;
    SET_GPR_U32(ctx, 31, 0x3F00D0u);
    ctx->pc = 0x3F00CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F00C8u;
    // 0x3f00cc: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3F00C8u, 0x3F00D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F00D0u;
label_3f00d0:
    // 0x3f00d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3f00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f00d4:
    // 0x3f00d4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3f00d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3f00d8:
    // 0x3f00d8: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3f00d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3f00dc:
    // 0x3f00dc: 0xa0f809  jalr        $a1
label_3f00e0:
    if (ctx->pc == 0x3F00E0u) {
        ctx->pc = 0x3F00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00DCu;
        // 0x3f00e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F00E4u;
        goto label_3f00e4;
    }
    ctx->pc = 0x3F00DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3F00E4u);
        ctx->pc = 0x3F00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00DCu;
        // 0x3f00e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F00DCu, 0x3F00E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F00E4u;
label_3f00e4:
    // 0x3f00e4: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x3f00e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_3f00e8:
    // 0x3f00e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3f00e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f00ec:
    // 0x3f00ec: 0xc04406e  jal         func_1101B8
label_3f00f0:
    if (ctx->pc == 0x3F00F0u) {
        ctx->pc = 0x3F00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00ECu;
        // 0x3f00f0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F00F4u;
        goto label_3f00f4;
    }
    ctx->pc = 0x3F00ECu;
    SET_GPR_U32(ctx, 31, 0x3F00F4u);
    ctx->pc = 0x3F00F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F00ECu;
    // 0x3f00f0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1101B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1101B8u, 0x3F00ECu, 0x3F00F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F00F4u;
label_3f00f4:
    // 0x3f00f4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3f00f8:
    if (ctx->pc == 0x3F00F8u) {
        ctx->pc = 0x3F00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00F4u;
        // 0x3f00f8: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F00FCu;
        goto label_3f00fc;
    }
    ctx->pc = 0x3F00F4u;
    {
        const bool branch_taken_0x3f00f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00F4u;
        // 0x3f00f8: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f00f4) {
            ctx->pc = 0x3F0168u;
            goto label_3f0168;
        }
    }
    ctx->pc = 0x3F00FCu;
label_3f00fc:
    // 0x3f00fc: 0xc043d5e  jal         func_10F578
label_3f0100:
    if (ctx->pc == 0x3F0100u) {
        ctx->pc = 0x3F0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00FCu;
        // 0x3f0100: 0x2664001c  addiu       $a0, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0104u;
        goto label_3f0104;
    }
    ctx->pc = 0x3F00FCu;
    SET_GPR_U32(ctx, 31, 0x3F0104u);
    ctx->pc = 0x3F0100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F00FCu;
    // 0x3f0100: 0x2664001c  addiu       $a0, $s3, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3F00FCu, 0x3F0104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0104u;
label_3f0104:
    // 0x3f0104: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_3f0108:
    if (ctx->pc == 0x3F0108u) {
        ctx->pc = 0x3F0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0104u;
        // 0x3f0108: 0xa2600020  sb          $zero, 0x20($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F010Cu;
        goto label_3f010c;
    }
    ctx->pc = 0x3F0104u;
    {
        const bool branch_taken_0x3f0104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f0104) {
            ctx->pc = 0x3F0108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0104u;
            // 0x3f0108: 0xa2600020  sb          $zero, 0x20($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0168u;
            goto label_3f0168;
        }
    }
    ctx->pc = 0x3F010Cu;
label_3f010c:
    // 0x3f010c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f0110:
    // 0x3f0110: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3f0110u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3f0114:
    // 0x3f0114: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f0114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f0118:
    // 0x3f0118: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3f0118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f011c:
    // 0x3f011c: 0x261046e0  addiu       $s0, $s0, 0x46E0
    ctx->pc = 0x3f011cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18144));
label_3f0120:
    // 0x3f0120: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3f0120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3f0124:
    // 0x3f0124: 0xa2620020  sb          $v0, 0x20($s3)
    ctx->pc = 0x3f0124u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 2));
label_3f0128:
    // 0x3f0128: 0xc0cd4ee  jal         func_3353B8
label_3f012c:
    if (ctx->pc == 0x3F012Cu) {
        ctx->pc = 0x3F012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0128u;
        // 0x3f012c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0130u;
        goto label_3f0130;
    }
    ctx->pc = 0x3F0128u;
    SET_GPR_U32(ctx, 31, 0x3F0130u);
    ctx->pc = 0x3F012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0128u;
    // 0x3f012c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F0128u, 0x3F0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0130u;
label_3f0130:
    // 0x3f0130: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x3f0130u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f0134:
    // 0x3f0134: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f0134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0138:
    // 0x3f0138: 0xc047e6c  jal         func_11F9B0
label_3f013c:
    if (ctx->pc == 0x3F013Cu) {
        ctx->pc = 0x3F013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0138u;
        // 0x3f013c: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0140u;
        goto label_3f0140;
    }
    ctx->pc = 0x3F0138u;
    SET_GPR_U32(ctx, 31, 0x3F0140u);
    ctx->pc = 0x3F013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0138u;
    // 0x3f013c: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3F0138u, 0x3F0140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0140u;
label_3f0140:
    // 0x3f0140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3f0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0144:
    // 0x3f0144: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3f0144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3f0148:
    // 0x3f0148: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3f0148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3f014c:
    // 0x3f014c: 0xa0f809  jalr        $a1
label_3f0150:
    if (ctx->pc == 0x3F0150u) {
        ctx->pc = 0x3F0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F014Cu;
        // 0x3f0150: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0154u;
        goto label_3f0154;
    }
    ctx->pc = 0x3F014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3F0154u);
        ctx->pc = 0x3F0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F014Cu;
        // 0x3f0150: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F014Cu, 0x3F0154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0154u;
label_3f0154:
    // 0x3f0154: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x3f0154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_3f0158:
    // 0x3f0158: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3f0158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f015c:
    // 0x3f015c: 0xc04406e  jal         func_1101B8
label_3f0160:
    if (ctx->pc == 0x3F0160u) {
        ctx->pc = 0x3F0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F015Cu;
        // 0x3f0160: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0164u;
        goto label_3f0164;
    }
    ctx->pc = 0x3F015Cu;
    SET_GPR_U32(ctx, 31, 0x3F0164u);
    ctx->pc = 0x3F0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F015Cu;
    // 0x3f0160: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1101B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1101B8u, 0x3F015Cu, 0x3F0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0164u;
label_3f0164:
    // 0x3f0164: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x3f0164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_3f0168:
    // 0x3f0168: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3f0168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3f016c:
    // 0x3f016c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f0170:
    // 0x3f0170: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3f0174:
    if (ctx->pc == 0x3F0174u) {
        ctx->pc = 0x3F0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0170u;
        // 0x3f0174: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0178u;
        goto label_3f0178;
    }
    ctx->pc = 0x3F0170u;
    {
        const bool branch_taken_0x3f0170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0170) {
            ctx->pc = 0x3F0174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0170u;
            // 0x3f0174: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0178u;
            goto label_3f0178;
        }
    }
    ctx->pc = 0x3F0178u;
label_3f0178:
    // 0x3f0178: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x3f0178u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3f017c:
    // 0x3f017c: 0x1810  mfhi        $v1
    ctx->pc = 0x3f017cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3f0180:
    // 0x3f0180: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_3f0184:
    if (ctx->pc == 0x3F0184u) {
        ctx->pc = 0x3F0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0180u;
        // 0x3f0184: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0188u;
        goto label_3f0188;
    }
    ctx->pc = 0x3F0180u;
    {
        const bool branch_taken_0x3f0180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0180u;
        // 0x3f0184: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0180) {
            ctx->pc = 0x3F01B0u;
            goto label_3f01b0;
        }
    }
    ctx->pc = 0x3F0188u;
label_3f0188:
    // 0x3f0188: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x3f0188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3f018c:
    // 0x3f018c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3f018cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3f0190:
    // 0x3f0190: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f0190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f0194:
    // 0x3f0194: 0x24845ea0  addiu       $a0, $a0, 0x5EA0
    ctx->pc = 0x3f0194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24224));
label_3f0198:
    // 0x3f0198: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f0198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f019c:
    // 0x3f019c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3f019cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3f01a0:
    // 0x3f01a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3f01a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f01a4:
    // 0x3f01a4: 0xc0e94ee  jal         func_3A53B8
label_3f01a8:
    if (ctx->pc == 0x3F01A8u) {
        ctx->pc = 0x3F01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F01A4u;
        // 0x3f01a8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F01ACu;
        goto label_3f01ac;
    }
    ctx->pc = 0x3F01A4u;
    SET_GPR_U32(ctx, 31, 0x3F01ACu);
    ctx->pc = 0x3F01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F01A4u;
    // 0x3f01a8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53B8u, 0x3F01A4u, 0x3F01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F01ACu;
label_3f01ac:
    // 0x3f01ac: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x3f01acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3f01b0:
    // 0x3f01b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f01b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f01b4:
    // 0x3f01b4: 0x7bb10480  lq          $s1, 0x480($sp)
    ctx->pc = 0x3f01b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3f01b8:
    // 0x3f01b8: 0x7bb20470  lq          $s2, 0x470($sp)
    ctx->pc = 0x3f01b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3f01bc:
    // 0x3f01bc: 0x7bb30460  lq          $s3, 0x460($sp)
    ctx->pc = 0x3f01bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3f01c0:
    // 0x3f01c0: 0x7bb40450  lq          $s4, 0x450($sp)
    ctx->pc = 0x3f01c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3f01c4:
    // 0x3f01c4: 0x7bb50440  lq          $s5, 0x440($sp)
    ctx->pc = 0x3f01c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3f01c8:
    // 0x3f01c8: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x3f01c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_3f01cc:
    // 0x3f01cc: 0x3e00008  jr          $ra
label_3f01d0:
    if (ctx->pc == 0x3F01D0u) {
        ctx->pc = 0x3F01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F01CCu;
        // 0x3f01d0: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F01D4u;
        goto label_3f01d4;
    }
    ctx->pc = 0x3F01CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F01CCu;
        // 0x3f01d0: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F01CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F01D4u;
label_3f01d4:
    // 0x3f01d4: 0x0  nop
    ctx->pc = 0x3f01d4u;
    // NOP
    ctx->pc = 0x3f01d8u;
}
