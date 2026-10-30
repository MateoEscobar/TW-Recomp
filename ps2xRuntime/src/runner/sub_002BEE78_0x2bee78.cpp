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

// Function: sub_002BEE78
// Address: 0x2bee78 - 0x2bf118
void sub_002BEE78_0x2bee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEE78_0x2bee78");
#endif

    switch (ctx->pc) {
        case 0x2bee78u: goto label_2bee78;
        case 0x2bee7cu: goto label_2bee7c;
        case 0x2bee80u: goto label_2bee80;
        case 0x2bee84u: goto label_2bee84;
        case 0x2bee88u: goto label_2bee88;
        case 0x2bee8cu: goto label_2bee8c;
        case 0x2bee90u: goto label_2bee90;
        case 0x2bee94u: goto label_2bee94;
        case 0x2bee98u: goto label_2bee98;
        case 0x2bee9cu: goto label_2bee9c;
        case 0x2beea0u: goto label_2beea0;
        case 0x2beea4u: goto label_2beea4;
        case 0x2beea8u: goto label_2beea8;
        case 0x2beeacu: goto label_2beeac;
        case 0x2beeb0u: goto label_2beeb0;
        case 0x2beeb4u: goto label_2beeb4;
        case 0x2beeb8u: goto label_2beeb8;
        case 0x2beebcu: goto label_2beebc;
        case 0x2beec0u: goto label_2beec0;
        case 0x2beec4u: goto label_2beec4;
        case 0x2beec8u: goto label_2beec8;
        case 0x2beeccu: goto label_2beecc;
        case 0x2beed0u: goto label_2beed0;
        case 0x2beed4u: goto label_2beed4;
        case 0x2beed8u: goto label_2beed8;
        case 0x2beedcu: goto label_2beedc;
        case 0x2beee0u: goto label_2beee0;
        case 0x2beee4u: goto label_2beee4;
        case 0x2beee8u: goto label_2beee8;
        case 0x2beeecu: goto label_2beeec;
        case 0x2beef0u: goto label_2beef0;
        case 0x2beef4u: goto label_2beef4;
        case 0x2beef8u: goto label_2beef8;
        case 0x2beefcu: goto label_2beefc;
        case 0x2bef00u: goto label_2bef00;
        case 0x2bef04u: goto label_2bef04;
        case 0x2bef08u: goto label_2bef08;
        case 0x2bef0cu: goto label_2bef0c;
        case 0x2bef10u: goto label_2bef10;
        case 0x2bef14u: goto label_2bef14;
        case 0x2bef18u: goto label_2bef18;
        case 0x2bef1cu: goto label_2bef1c;
        case 0x2bef20u: goto label_2bef20;
        case 0x2bef24u: goto label_2bef24;
        case 0x2bef28u: goto label_2bef28;
        case 0x2bef2cu: goto label_2bef2c;
        case 0x2bef30u: goto label_2bef30;
        case 0x2bef34u: goto label_2bef34;
        case 0x2bef38u: goto label_2bef38;
        case 0x2bef3cu: goto label_2bef3c;
        case 0x2bef40u: goto label_2bef40;
        case 0x2bef44u: goto label_2bef44;
        case 0x2bef48u: goto label_2bef48;
        case 0x2bef4cu: goto label_2bef4c;
        case 0x2bef50u: goto label_2bef50;
        case 0x2bef54u: goto label_2bef54;
        case 0x2bef58u: goto label_2bef58;
        case 0x2bef5cu: goto label_2bef5c;
        case 0x2bef60u: goto label_2bef60;
        case 0x2bef64u: goto label_2bef64;
        case 0x2bef68u: goto label_2bef68;
        case 0x2bef6cu: goto label_2bef6c;
        case 0x2bef70u: goto label_2bef70;
        case 0x2bef74u: goto label_2bef74;
        case 0x2bef78u: goto label_2bef78;
        case 0x2bef7cu: goto label_2bef7c;
        case 0x2bef80u: goto label_2bef80;
        case 0x2bef84u: goto label_2bef84;
        case 0x2bef88u: goto label_2bef88;
        case 0x2bef8cu: goto label_2bef8c;
        case 0x2bef90u: goto label_2bef90;
        case 0x2bef94u: goto label_2bef94;
        case 0x2bef98u: goto label_2bef98;
        case 0x2bef9cu: goto label_2bef9c;
        case 0x2befa0u: goto label_2befa0;
        case 0x2befa4u: goto label_2befa4;
        case 0x2befa8u: goto label_2befa8;
        case 0x2befacu: goto label_2befac;
        case 0x2befb0u: goto label_2befb0;
        case 0x2befb4u: goto label_2befb4;
        case 0x2befb8u: goto label_2befb8;
        case 0x2befbcu: goto label_2befbc;
        case 0x2befc0u: goto label_2befc0;
        case 0x2befc4u: goto label_2befc4;
        case 0x2befc8u: goto label_2befc8;
        case 0x2befccu: goto label_2befcc;
        case 0x2befd0u: goto label_2befd0;
        case 0x2befd4u: goto label_2befd4;
        case 0x2befd8u: goto label_2befd8;
        case 0x2befdcu: goto label_2befdc;
        case 0x2befe0u: goto label_2befe0;
        case 0x2befe4u: goto label_2befe4;
        case 0x2befe8u: goto label_2befe8;
        case 0x2befecu: goto label_2befec;
        case 0x2beff0u: goto label_2beff0;
        case 0x2beff4u: goto label_2beff4;
        case 0x2beff8u: goto label_2beff8;
        case 0x2beffcu: goto label_2beffc;
        case 0x2bf000u: goto label_2bf000;
        case 0x2bf004u: goto label_2bf004;
        case 0x2bf008u: goto label_2bf008;
        case 0x2bf00cu: goto label_2bf00c;
        case 0x2bf010u: goto label_2bf010;
        case 0x2bf014u: goto label_2bf014;
        case 0x2bf018u: goto label_2bf018;
        case 0x2bf01cu: goto label_2bf01c;
        case 0x2bf020u: goto label_2bf020;
        case 0x2bf024u: goto label_2bf024;
        case 0x2bf028u: goto label_2bf028;
        case 0x2bf02cu: goto label_2bf02c;
        case 0x2bf030u: goto label_2bf030;
        case 0x2bf034u: goto label_2bf034;
        case 0x2bf038u: goto label_2bf038;
        case 0x2bf03cu: goto label_2bf03c;
        case 0x2bf040u: goto label_2bf040;
        case 0x2bf044u: goto label_2bf044;
        case 0x2bf048u: goto label_2bf048;
        case 0x2bf04cu: goto label_2bf04c;
        case 0x2bf050u: goto label_2bf050;
        case 0x2bf054u: goto label_2bf054;
        case 0x2bf058u: goto label_2bf058;
        case 0x2bf05cu: goto label_2bf05c;
        case 0x2bf060u: goto label_2bf060;
        case 0x2bf064u: goto label_2bf064;
        case 0x2bf068u: goto label_2bf068;
        case 0x2bf06cu: goto label_2bf06c;
        case 0x2bf070u: goto label_2bf070;
        case 0x2bf074u: goto label_2bf074;
        case 0x2bf078u: goto label_2bf078;
        case 0x2bf07cu: goto label_2bf07c;
        case 0x2bf080u: goto label_2bf080;
        case 0x2bf084u: goto label_2bf084;
        case 0x2bf088u: goto label_2bf088;
        case 0x2bf08cu: goto label_2bf08c;
        case 0x2bf090u: goto label_2bf090;
        case 0x2bf094u: goto label_2bf094;
        case 0x2bf098u: goto label_2bf098;
        case 0x2bf09cu: goto label_2bf09c;
        case 0x2bf0a0u: goto label_2bf0a0;
        case 0x2bf0a4u: goto label_2bf0a4;
        case 0x2bf0a8u: goto label_2bf0a8;
        case 0x2bf0acu: goto label_2bf0ac;
        case 0x2bf0b0u: goto label_2bf0b0;
        case 0x2bf0b4u: goto label_2bf0b4;
        case 0x2bf0b8u: goto label_2bf0b8;
        case 0x2bf0bcu: goto label_2bf0bc;
        case 0x2bf0c0u: goto label_2bf0c0;
        case 0x2bf0c4u: goto label_2bf0c4;
        case 0x2bf0c8u: goto label_2bf0c8;
        case 0x2bf0ccu: goto label_2bf0cc;
        case 0x2bf0d0u: goto label_2bf0d0;
        case 0x2bf0d4u: goto label_2bf0d4;
        case 0x2bf0d8u: goto label_2bf0d8;
        case 0x2bf0dcu: goto label_2bf0dc;
        case 0x2bf0e0u: goto label_2bf0e0;
        case 0x2bf0e4u: goto label_2bf0e4;
        case 0x2bf0e8u: goto label_2bf0e8;
        case 0x2bf0ecu: goto label_2bf0ec;
        case 0x2bf0f0u: goto label_2bf0f0;
        case 0x2bf0f4u: goto label_2bf0f4;
        case 0x2bf0f8u: goto label_2bf0f8;
        case 0x2bf0fcu: goto label_2bf0fc;
        case 0x2bf100u: goto label_2bf100;
        case 0x2bf104u: goto label_2bf104;
        case 0x2bf108u: goto label_2bf108;
        case 0x2bf10cu: goto label_2bf10c;
        case 0x2bf110u: goto label_2bf110;
        case 0x2bf114u: goto label_2bf114;
        default: break;
    }

    ctx->pc = 0x2bee78u;

label_2bee78:
    // 0x2bee78: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2bee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2bee7c:
    // 0x2bee7c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2bee7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2bee80:
    // 0x2bee80: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2bee80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2bee84:
    // 0x2bee84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2bee84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bee88:
    // 0x2bee88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2bee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2bee8c:
    // 0x2bee8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bee8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bee90:
    // 0x2bee90: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2bee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2bee94:
    // 0x2bee94: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2bee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2bee98:
    // 0x2bee98: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2bee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2bee9c:
    // 0x2bee9c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2bee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2beea0:
    // 0x2beea0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2beea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2beea4:
    // 0x2beea4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2beea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2beea8:
    // 0x2beea8: 0x8c55020c  lw          $s5, 0x20C($v0)
    ctx->pc = 0x2beea8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2beeac:
    // 0x2beeac: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2beeacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2beeb0:
    // 0x2beeb0: 0xc05959e  jal         func_165678
label_2beeb4:
    if (ctx->pc == 0x2BEEB4u) {
        ctx->pc = 0x2BEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEB0u;
        // 0x2beeb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEEB8u;
        goto label_2beeb8;
    }
    ctx->pc = 0x2BEEB0u;
    SET_GPR_U32(ctx, 31, 0x2BEEB8u);
    ctx->pc = 0x2BEEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEEB0u;
    // 0x2beeb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2BEEB0u, 0x2BEEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEEB8u;
label_2beeb8:
    // 0x2beeb8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2beeb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2beebc:
    // 0x2beebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2beebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2beec0:
    // 0x2beec0: 0xc088fa8  jal         func_223EA0
label_2beec4:
    if (ctx->pc == 0x2BEEC4u) {
        ctx->pc = 0x2BEEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEC0u;
        // 0x2beec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEEC8u;
        goto label_2beec8;
    }
    ctx->pc = 0x2BEEC0u;
    SET_GPR_U32(ctx, 31, 0x2BEEC8u);
    ctx->pc = 0x2BEEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEEC0u;
    // 0x2beec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2BEEC0u, 0x2BEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEEC8u;
label_2beec8:
    // 0x2beec8: 0x10500088  beq         $v0, $s0, . + 4 + (0x88 << 2)
label_2beecc:
    if (ctx->pc == 0x2BEECCu) {
        ctx->pc = 0x2BEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEC8u;
        // 0x2beecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEED0u;
        goto label_2beed0;
    }
    ctx->pc = 0x2BEEC8u;
    {
        const bool branch_taken_0x2beec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEC8u;
        // 0x2beecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beec8) {
            ctx->pc = 0x2BF0ECu;
            goto label_2bf0ec;
        }
    }
    ctx->pc = 0x2BEED0u;
label_2beed0:
    // 0x2beed0: 0xc089000  jal         func_224000
label_2beed4:
    if (ctx->pc == 0x2BEED4u) {
        ctx->pc = 0x2BEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEED0u;
        // 0x2beed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEED8u;
        goto label_2beed8;
    }
    ctx->pc = 0x2BEED0u;
    SET_GPR_U32(ctx, 31, 0x2BEED8u);
    ctx->pc = 0x2BEED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEED0u;
    // 0x2beed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2BEED0u, 0x2BEED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEED8u;
label_2beed8:
    // 0x2beed8: 0x10500084  beq         $v0, $s0, . + 4 + (0x84 << 2)
label_2beedc:
    if (ctx->pc == 0x2BEEDCu) {
        ctx->pc = 0x2BEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEED8u;
        // 0x2beedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEEE0u;
        goto label_2beee0;
    }
    ctx->pc = 0x2BEED8u;
    {
        const bool branch_taken_0x2beed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEED8u;
        // 0x2beedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beed8) {
            ctx->pc = 0x2BF0ECu;
            goto label_2bf0ec;
        }
    }
    ctx->pc = 0x2BEEE0u;
label_2beee0:
    // 0x2beee0: 0x52c00083  beql        $s6, $zero, . + 4 + (0x83 << 2)
label_2beee4:
    if (ctx->pc == 0x2BEEE4u) {
        ctx->pc = 0x2BEEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEE0u;
        // 0x2beee4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEEE8u;
        goto label_2beee8;
    }
    ctx->pc = 0x2BEEE0u;
    {
        const bool branch_taken_0x2beee0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beee0) {
            ctx->pc = 0x2BEEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEEE0u;
            // 0x2beee4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF0F0u;
            goto label_2bf0f0;
        }
    }
    ctx->pc = 0x2BEEE8u;
label_2beee8:
    // 0x2beee8: 0x8ea50040  lw          $a1, 0x40($s5)
    ctx->pc = 0x2beee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_2beeec:
    // 0x2beeec: 0x50a00080  beql        $a1, $zero, . + 4 + (0x80 << 2)
label_2beef0:
    if (ctx->pc == 0x2BEEF0u) {
        ctx->pc = 0x2BEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEECu;
        // 0x2beef0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEEF4u;
        goto label_2beef4;
    }
    ctx->pc = 0x2BEEECu;
    {
        const bool branch_taken_0x2beeec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beeec) {
            ctx->pc = 0x2BEEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEEECu;
            // 0x2beef0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF0F0u;
            goto label_2bf0f0;
        }
    }
    ctx->pc = 0x2BEEF4u;
label_2beef4:
    // 0x2beef4: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2beef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2beef8:
    // 0x2beef8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2beef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2beefc:
    // 0x2beefc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2beefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2bef00:
    // 0x2bef00: 0x40f809  jalr        $v0
label_2bef04:
    if (ctx->pc == 0x2BEF04u) {
        ctx->pc = 0x2BEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF00u;
        // 0x2bef04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF08u;
        goto label_2bef08;
    }
    ctx->pc = 0x2BEF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BEF08u);
        ctx->pc = 0x2BEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF00u;
        // 0x2bef04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEF00u, 0x2BEF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BEF08u;
label_2bef08:
    // 0x2bef08: 0x38420026  xori        $v0, $v0, 0x26
    ctx->pc = 0x2bef08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)38);
label_2bef0c:
    // 0x2bef0c: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_2bef10:
    if (ctx->pc == 0x2BEF10u) {
        ctx->pc = 0x2BEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF0Cu;
        // 0x2bef10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF14u;
        goto label_2bef14;
    }
    ctx->pc = 0x2BEF0Cu;
    {
        const bool branch_taken_0x2bef0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF0Cu;
        // 0x2bef10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef0c) {
            ctx->pc = 0x2BF0ECu;
            goto label_2bf0ec;
        }
    }
    ctx->pc = 0x2BEF14u;
label_2bef14:
    // 0x2bef14: 0x8ea40040  lw          $a0, 0x40($s5)
    ctx->pc = 0x2bef14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_2bef18:
    // 0x2bef18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bef1c:
    // 0x2bef1c: 0x84820028  lh          $v0, 0x28($a0)
    ctx->pc = 0x2bef1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
label_2bef20:
    // 0x2bef20: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_2bef24:
    if (ctx->pc == 0x2BEF24u) {
        ctx->pc = 0x2BEF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF20u;
        // 0x2bef24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF28u;
        goto label_2bef28;
    }
    ctx->pc = 0x2BEF20u;
    {
        const bool branch_taken_0x2bef20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BEF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF20u;
        // 0x2bef24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef20) {
            ctx->pc = 0x2BEF34u;
            goto label_2bef34;
        }
    }
    ctx->pc = 0x2BEF28u;
label_2bef28:
    // 0x2bef28: 0xc0c8550  jal         func_321540
label_2bef2c:
    if (ctx->pc == 0x2BEF2Cu) {
        ctx->pc = 0x2BEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF28u;
        // 0x2bef2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF30u;
        goto label_2bef30;
    }
    ctx->pc = 0x2BEF28u;
    SET_GPR_U32(ctx, 31, 0x2BEF30u);
    ctx->pc = 0x2BEF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF28u;
    // 0x2bef2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321540u, 0x2BEF28u, 0x2BEF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF30u;
label_2bef30:
    // 0x2bef30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bef30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bef34:
    // 0x2bef34: 0x5620005e  bnel        $s1, $zero, . + 4 + (0x5E << 2)
label_2bef38:
    if (ctx->pc == 0x2BEF38u) {
        ctx->pc = 0x2BEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF34u;
        // 0x2bef38: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF3Cu;
        goto label_2bef3c;
    }
    ctx->pc = 0x2BEF34u;
    {
        const bool branch_taken_0x2bef34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bef34) {
            ctx->pc = 0x2BEF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEF34u;
            // 0x2bef38: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF0B0u;
            goto label_2bf0b0;
        }
    }
    ctx->pc = 0x2BEF3Cu;
label_2bef3c:
    // 0x2bef3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2bef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2bef40:
    // 0x2bef40: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x2bef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2bef44:
    // 0x2bef44: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2bef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2bef48:
    // 0x2bef48: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_2bef4c:
    if (ctx->pc == 0x2BEF4Cu) {
        ctx->pc = 0x2BEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF48u;
        // 0x2bef4c: 0x8c540048  lw          $s4, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF50u;
        goto label_2bef50;
    }
    ctx->pc = 0x2BEF48u;
    {
        const bool branch_taken_0x2bef48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF48u;
        // 0x2bef4c: 0x8c540048  lw          $s4, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef48) {
            ctx->pc = 0x2BEF9Cu;
            goto label_2bef9c;
        }
    }
    ctx->pc = 0x2BEF50u;
label_2bef50:
    // 0x2bef50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bef54:
    // 0x2bef54: 0x241101f4  addiu       $s1, $zero, 0x1F4
    ctx->pc = 0x2bef54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2bef58:
    // 0x2bef58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2bef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bef5c:
    // 0x2bef5c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bef5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bef60:
    // 0x2bef60: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2bef60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2bef64:
    // 0x2bef64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bef68:
    // 0x2bef68: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2bef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2bef6c:
    // 0x2bef6c: 0x40f809  jalr        $v0
label_2bef70:
    if (ctx->pc == 0x2BEF70u) {
        ctx->pc = 0x2BEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF6Cu;
        // 0x2bef70: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF74u;
        goto label_2bef74;
    }
    ctx->pc = 0x2BEF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BEF74u);
        ctx->pc = 0x2BEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF6Cu;
        // 0x2bef70: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEF6Cu, 0x2BEF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BEF74u;
label_2bef74:
    // 0x2bef74: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2bef74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2bef78:
    // 0x2bef78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bef7c:
    // 0x2bef7c: 0xc137882  jal         func_4DE208
label_2bef80:
    if (ctx->pc == 0x2BEF80u) {
        ctx->pc = 0x2BEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF7Cu;
        // 0x2bef80: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF84u;
        goto label_2bef84;
    }
    ctx->pc = 0x2BEF7Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF84u);
    ctx->pc = 0x2BEF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF7Cu;
    // 0x2bef80: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x2BEF7Cu, 0x2BEF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF84u;
label_2bef84:
    // 0x2bef84: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
label_2bef88:
    if (ctx->pc == 0x2BEF88u) {
        ctx->pc = 0x2BEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF84u;
        // 0x2bef88: 0x518818  mult        $s1, $v0, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF8Cu;
        goto label_2bef8c;
    }
    ctx->pc = 0x2BEF84u;
    {
        const bool branch_taken_0x2bef84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2bef84) {
            ctx->pc = 0x2BEF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEF84u;
            // 0x2bef88: 0x518818  mult        $s1, $v0, $s1 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEF8Cu;
            goto label_2bef8c;
        }
    }
    ctx->pc = 0x2BEF8Cu;
label_2bef8c:
    // 0x2bef8c: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x2bef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_2bef90:
    // 0x2bef90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bef90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bef94:
    // 0x2bef94: 0x10000055  b           . + 4 + (0x55 << 2)
label_2bef98:
    if (ctx->pc == 0x2BEF98u) {
        ctx->pc = 0x2BEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF94u;
        // 0x2bef98: 0xae630024  sw          $v1, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEF9Cu;
        goto label_2bef9c;
    }
    ctx->pc = 0x2BEF94u;
    {
        const bool branch_taken_0x2bef94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF94u;
        // 0x2bef98: 0xae630024  sw          $v1, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef94) {
            ctx->pc = 0x2BF0ECu;
            goto label_2bf0ec;
        }
    }
    ctx->pc = 0x2BEF9Cu;
label_2bef9c:
    // 0x2bef9c: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x2bef9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2befa0:
    // 0x2befa0: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_2befa4:
    if (ctx->pc == 0x2BEFA4u) {
        ctx->pc = 0x2BEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFA0u;
        // 0x2befa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEFA8u;
        goto label_2befa8;
    }
    ctx->pc = 0x2BEFA0u;
    {
        const bool branch_taken_0x2befa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFA0u;
        // 0x2befa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2befa0) {
            ctx->pc = 0x2BF0ECu;
            goto label_2bf0ec;
        }
    }
    ctx->pc = 0x2BEFA8u;
label_2befa8:
    // 0x2befa8: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2befa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_2befac:
    // 0x2befac: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2befacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2befb0:
    // 0x2befb0: 0x24674780  addiu       $a3, $v1, 0x4780
    ctx->pc = 0x2befb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 18304));
label_2befb4:
    // 0x2befb4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x2befb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2befb8:
    // 0x2befb8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x2befb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2befbc:
    // 0x2befbc: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x2befbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2befc0:
    // 0x2befc0: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x2befc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2befc4:
    // 0x2befc4: 0x2442f2b0  addiu       $v0, $v0, -0xD50
    ctx->pc = 0x2befc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963888));
label_2befc8:
    // 0x2befc8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2befc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2befcc:
    // 0x2befcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2befccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2befd0:
    // 0x2befd0: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x2befd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_2befd4:
    // 0x2befd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2befd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2befd8:
    // 0x2befd8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2befd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2befdc:
    // 0x2befdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2befdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2befe0:
    // 0x2befe0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2befe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2befe4:
    // 0x2befe4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2befe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2befe8:
    // 0x2befe8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2befe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2befec:
    // 0x2befec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2befecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2beff0:
    // 0x2beff0: 0x6bab0017  ldl         $t3, 0x17($sp)
    ctx->pc = 0x2beff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_2beff4:
    // 0x2beff4: 0x6fab0010  ldr         $t3, 0x10($sp)
    ctx->pc = 0x2beff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_2beff8:
    // 0x2beff8: 0xb3ab000b  sdl         $t3, 0xB($sp)
    ctx->pc = 0x2beff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2beffc:
    // 0x2beffc: 0xb7ab0004  sdr         $t3, 0x4($sp)
    ctx->pc = 0x2beffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bf000:
    // 0x2bf000: 0xc0a757c  jal         func_29D5F0
label_2bf004:
    if (ctx->pc == 0x2BF004u) {
        ctx->pc = 0x2BF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF000u;
        // 0x2bf004: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF008u;
        goto label_2bf008;
    }
    ctx->pc = 0x2BF000u;
    SET_GPR_U32(ctx, 31, 0x2BF008u);
    ctx->pc = 0x2BF004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF000u;
    // 0x2bf004: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2BF000u, 0x2BF008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF008u;
label_2bf008:
    // 0x2bf008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf00c:
    // 0x2bf00c: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_2bf010:
    if (ctx->pc == 0x2BF010u) {
        ctx->pc = 0x2BF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF00Cu;
        // 0x2bf010: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF014u;
        goto label_2bf014;
    }
    ctx->pc = 0x2BF00Cu;
    {
        const bool branch_taken_0x2bf00c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF00Cu;
        // 0x2bf010: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf00c) {
            ctx->pc = 0x2BF094u;
            goto label_2bf094;
        }
    }
    ctx->pc = 0x2BF014u;
label_2bf014:
    // 0x2bf014: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2bf014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2bf018:
    // 0x2bf018: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bf018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf01c:
    // 0x2bf01c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2bf01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2bf020:
    // 0x2bf020: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2bf020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bf024:
    // 0x2bf024: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2bf024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2bf028:
    // 0x2bf028: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2bf028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_2bf02c:
    // 0x2bf02c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2bf02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2bf030:
    // 0x2bf030: 0xc094904  jal         func_252410
label_2bf034:
    if (ctx->pc == 0x2BF034u) {
        ctx->pc = 0x2BF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF030u;
        // 0x2bf034: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF038u;
        goto label_2bf038;
    }
    ctx->pc = 0x2BF030u;
    SET_GPR_U32(ctx, 31, 0x2BF038u);
    ctx->pc = 0x2BF034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF030u;
    // 0x2bf034: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x2BF030u, 0x2BF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF038u;
label_2bf038:
    // 0x2bf038: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2bf038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2bf03c:
    // 0x2bf03c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2bf03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2bf040:
    // 0x2bf040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf044:
    // 0x2bf044: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x2bf044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_2bf048:
    // 0x2bf048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bf048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf04c:
    // 0x2bf04c: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x2bf04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2bf050:
    // 0x2bf050: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2bf050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2bf054:
    // 0x2bf054: 0xc136d6c  jal         func_4DB5B0
label_2bf058:
    if (ctx->pc == 0x2BF058u) {
        ctx->pc = 0x2BF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF054u;
        // 0x2bf058: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF05Cu;
        goto label_2bf05c;
    }
    ctx->pc = 0x2BF054u;
    SET_GPR_U32(ctx, 31, 0x2BF05Cu);
    ctx->pc = 0x2BF058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF054u;
    // 0x2bf058: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2BF054u, 0x2BF05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF05Cu;
label_2bf05c:
    // 0x2bf05c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2bf05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2bf060:
    // 0x2bf060: 0xc0e409a  jal         func_390268
label_2bf064:
    if (ctx->pc == 0x2BF064u) {
        ctx->pc = 0x2BF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF060u;
        // 0x2bf064: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF068u;
        goto label_2bf068;
    }
    ctx->pc = 0x2BF060u;
    SET_GPR_U32(ctx, 31, 0x2BF068u);
    ctx->pc = 0x2BF064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF060u;
    // 0x2bf064: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BF060u, 0x2BF068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF068u;
label_2bf068:
    // 0x2bf068: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2bf06c:
    if (ctx->pc == 0x2BF06Cu) {
        ctx->pc = 0x2BF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF068u;
        // 0x2bf06c: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF070u;
        goto label_2bf070;
    }
    ctx->pc = 0x2BF068u;
    {
        const bool branch_taken_0x2bf068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF068u;
        // 0x2bf06c: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf068) {
            ctx->pc = 0x2BF094u;
            goto label_2bf094;
        }
    }
    ctx->pc = 0x2BF070u;
label_2bf070:
    // 0x2bf070: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2bf070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2bf074:
    // 0x2bf074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf078:
    // 0x2bf078: 0x0  nop
    ctx->pc = 0x2bf078u;
    // NOP
label_2bf07c:
    // 0x2bf07c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf07cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bf080:
    // 0x2bf080: 0x0  nop
    ctx->pc = 0x2bf080u;
    // NOP
label_2bf084:
    // 0x2bf084: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2bf088:
    if (ctx->pc == 0x2BF088u) {
        ctx->pc = 0x2BF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF084u;
        // 0x2bf088: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF08Cu;
        goto label_2bf08c;
    }
    ctx->pc = 0x2BF084u;
    {
        const bool branch_taken_0x2bf084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF084u;
        // 0x2bf088: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf084) {
            ctx->pc = 0x2BF098u;
            goto label_2bf098;
        }
    }
    ctx->pc = 0x2BF08Cu;
label_2bf08c:
    // 0x2bf08c: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x2bf08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
label_2bf090:
    // 0x2bf090: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bf090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf094:
    // 0x2bf094: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2bf094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2bf098:
    // 0x2bf098: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x2bf098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
label_2bf09c:
    // 0x2bf09c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2bf0a0:
    if (ctx->pc == 0x2BF0A0u) {
        ctx->pc = 0x2BF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF09Cu;
        // 0x2bf0a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF0A4u;
        goto label_2bf0a4;
    }
    ctx->pc = 0x2BF09Cu;
    {
        const bool branch_taken_0x2bf09c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF09Cu;
        // 0x2bf0a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf09c) {
            ctx->pc = 0x2BF0ACu;
            goto label_2bf0ac;
        }
    }
    ctx->pc = 0x2BF0A4u;
label_2bf0a4:
    // 0x2bf0a4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2bf0a8:
    if (ctx->pc == 0x2BF0A8u) {
        ctx->pc = 0x2BF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0A4u;
        // 0x2bf0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF0ACu;
        goto label_2bf0ac;
    }
    ctx->pc = 0x2BF0A4u;
    {
        const bool branch_taken_0x2bf0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0A4u;
        // 0x2bf0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0a4) {
            ctx->pc = 0x2BF0ECu;
            goto label_2bf0ec;
        }
    }
    ctx->pc = 0x2BF0ACu;
label_2bf0ac:
    // 0x2bf0ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bf0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bf0b0:
    // 0x2bf0b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf0b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf0b4:
    // 0x2bf0b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf0b8:
    // 0x2bf0b8: 0x40f809  jalr        $v0
label_2bf0bc:
    if (ctx->pc == 0x2BF0BCu) {
        ctx->pc = 0x2BF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0B8u;
        // 0x2bf0bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF0C0u;
        goto label_2bf0c0;
    }
    ctx->pc = 0x2BF0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF0C0u);
        ctx->pc = 0x2BF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0B8u;
        // 0x2bf0bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF0B8u, 0x2BF0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF0C0u;
label_2bf0c0:
    // 0x2bf0c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bf0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bf0c4:
    // 0x2bf0c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf0c8:
    // 0x2bf0c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bf0c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bf0cc:
    // 0x2bf0cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bf0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bf0d0:
    // 0x2bf0d0: 0x40f809  jalr        $v0
label_2bf0d4:
    if (ctx->pc == 0x2BF0D4u) {
        ctx->pc = 0x2BF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0D0u;
        // 0x2bf0d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF0D8u;
        goto label_2bf0d8;
    }
    ctx->pc = 0x2BF0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF0D8u);
        ctx->pc = 0x2BF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0D0u;
        // 0x2bf0d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF0D0u, 0x2BF0D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF0D8u;
label_2bf0d8:
    // 0x2bf0d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bf0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf0dc:
    // 0x2bf0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf0e0:
    // 0x2bf0e0: 0xc0b71c2  jal         func_2DC708
label_2bf0e4:
    if (ctx->pc == 0x2BF0E4u) {
        ctx->pc = 0x2BF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0E0u;
        // 0x2bf0e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF0E8u;
        goto label_2bf0e8;
    }
    ctx->pc = 0x2BF0E0u;
    SET_GPR_U32(ctx, 31, 0x2BF0E8u);
    ctx->pc = 0x2BF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0E0u;
    // 0x2bf0e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2BF0E0u, 0x2BF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0E8u;
label_2bf0e8:
    // 0x2bf0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf0ec:
    // 0x2bf0ec: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2bf0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2bf0f0:
    // 0x2bf0f0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2bf0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2bf0f4:
    // 0x2bf0f4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2bf0f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2bf0f8:
    // 0x2bf0f8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2bf0f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2bf0fc:
    // 0x2bf0fc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2bf0fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bf100:
    // 0x2bf100: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2bf100u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bf104:
    // 0x2bf104: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2bf104u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bf108:
    // 0x2bf108: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bf108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bf10c:
    // 0x2bf10c: 0x3e00008  jr          $ra
label_2bf110:
    if (ctx->pc == 0x2BF110u) {
        ctx->pc = 0x2BF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF10Cu;
        // 0x2bf110: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF114u;
        goto label_2bf114;
    }
    ctx->pc = 0x2BF10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF10Cu;
        // 0x2bf110: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF114u;
label_2bf114:
    // 0x2bf114: 0x0  nop
    ctx->pc = 0x2bf114u;
    // NOP
    ctx->pc = 0x2bf118u;
}
