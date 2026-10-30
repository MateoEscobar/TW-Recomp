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

// Function: sub_003EEEA0
// Address: 0x3eeea0 - 0x3ef188
void sub_003EEEA0_0x3eeea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEEA0_0x3eeea0");
#endif

    switch (ctx->pc) {
        case 0x3eeea0u: goto label_3eeea0;
        case 0x3eeea4u: goto label_3eeea4;
        case 0x3eeea8u: goto label_3eeea8;
        case 0x3eeeacu: goto label_3eeeac;
        case 0x3eeeb0u: goto label_3eeeb0;
        case 0x3eeeb4u: goto label_3eeeb4;
        case 0x3eeeb8u: goto label_3eeeb8;
        case 0x3eeebcu: goto label_3eeebc;
        case 0x3eeec0u: goto label_3eeec0;
        case 0x3eeec4u: goto label_3eeec4;
        case 0x3eeec8u: goto label_3eeec8;
        case 0x3eeeccu: goto label_3eeecc;
        case 0x3eeed0u: goto label_3eeed0;
        case 0x3eeed4u: goto label_3eeed4;
        case 0x3eeed8u: goto label_3eeed8;
        case 0x3eeedcu: goto label_3eeedc;
        case 0x3eeee0u: goto label_3eeee0;
        case 0x3eeee4u: goto label_3eeee4;
        case 0x3eeee8u: goto label_3eeee8;
        case 0x3eeeecu: goto label_3eeeec;
        case 0x3eeef0u: goto label_3eeef0;
        case 0x3eeef4u: goto label_3eeef4;
        case 0x3eeef8u: goto label_3eeef8;
        case 0x3eeefcu: goto label_3eeefc;
        case 0x3eef00u: goto label_3eef00;
        case 0x3eef04u: goto label_3eef04;
        case 0x3eef08u: goto label_3eef08;
        case 0x3eef0cu: goto label_3eef0c;
        case 0x3eef10u: goto label_3eef10;
        case 0x3eef14u: goto label_3eef14;
        case 0x3eef18u: goto label_3eef18;
        case 0x3eef1cu: goto label_3eef1c;
        case 0x3eef20u: goto label_3eef20;
        case 0x3eef24u: goto label_3eef24;
        case 0x3eef28u: goto label_3eef28;
        case 0x3eef2cu: goto label_3eef2c;
        case 0x3eef30u: goto label_3eef30;
        case 0x3eef34u: goto label_3eef34;
        case 0x3eef38u: goto label_3eef38;
        case 0x3eef3cu: goto label_3eef3c;
        case 0x3eef40u: goto label_3eef40;
        case 0x3eef44u: goto label_3eef44;
        case 0x3eef48u: goto label_3eef48;
        case 0x3eef4cu: goto label_3eef4c;
        case 0x3eef50u: goto label_3eef50;
        case 0x3eef54u: goto label_3eef54;
        case 0x3eef58u: goto label_3eef58;
        case 0x3eef5cu: goto label_3eef5c;
        case 0x3eef60u: goto label_3eef60;
        case 0x3eef64u: goto label_3eef64;
        case 0x3eef68u: goto label_3eef68;
        case 0x3eef6cu: goto label_3eef6c;
        case 0x3eef70u: goto label_3eef70;
        case 0x3eef74u: goto label_3eef74;
        case 0x3eef78u: goto label_3eef78;
        case 0x3eef7cu: goto label_3eef7c;
        case 0x3eef80u: goto label_3eef80;
        case 0x3eef84u: goto label_3eef84;
        case 0x3eef88u: goto label_3eef88;
        case 0x3eef8cu: goto label_3eef8c;
        case 0x3eef90u: goto label_3eef90;
        case 0x3eef94u: goto label_3eef94;
        case 0x3eef98u: goto label_3eef98;
        case 0x3eef9cu: goto label_3eef9c;
        case 0x3eefa0u: goto label_3eefa0;
        case 0x3eefa4u: goto label_3eefa4;
        case 0x3eefa8u: goto label_3eefa8;
        case 0x3eefacu: goto label_3eefac;
        case 0x3eefb0u: goto label_3eefb0;
        case 0x3eefb4u: goto label_3eefb4;
        case 0x3eefb8u: goto label_3eefb8;
        case 0x3eefbcu: goto label_3eefbc;
        case 0x3eefc0u: goto label_3eefc0;
        case 0x3eefc4u: goto label_3eefc4;
        case 0x3eefc8u: goto label_3eefc8;
        case 0x3eefccu: goto label_3eefcc;
        case 0x3eefd0u: goto label_3eefd0;
        case 0x3eefd4u: goto label_3eefd4;
        case 0x3eefd8u: goto label_3eefd8;
        case 0x3eefdcu: goto label_3eefdc;
        case 0x3eefe0u: goto label_3eefe0;
        case 0x3eefe4u: goto label_3eefe4;
        case 0x3eefe8u: goto label_3eefe8;
        case 0x3eefecu: goto label_3eefec;
        case 0x3eeff0u: goto label_3eeff0;
        case 0x3eeff4u: goto label_3eeff4;
        case 0x3eeff8u: goto label_3eeff8;
        case 0x3eeffcu: goto label_3eeffc;
        case 0x3ef000u: goto label_3ef000;
        case 0x3ef004u: goto label_3ef004;
        case 0x3ef008u: goto label_3ef008;
        case 0x3ef00cu: goto label_3ef00c;
        case 0x3ef010u: goto label_3ef010;
        case 0x3ef014u: goto label_3ef014;
        case 0x3ef018u: goto label_3ef018;
        case 0x3ef01cu: goto label_3ef01c;
        case 0x3ef020u: goto label_3ef020;
        case 0x3ef024u: goto label_3ef024;
        case 0x3ef028u: goto label_3ef028;
        case 0x3ef02cu: goto label_3ef02c;
        case 0x3ef030u: goto label_3ef030;
        case 0x3ef034u: goto label_3ef034;
        case 0x3ef038u: goto label_3ef038;
        case 0x3ef03cu: goto label_3ef03c;
        case 0x3ef040u: goto label_3ef040;
        case 0x3ef044u: goto label_3ef044;
        case 0x3ef048u: goto label_3ef048;
        case 0x3ef04cu: goto label_3ef04c;
        case 0x3ef050u: goto label_3ef050;
        case 0x3ef054u: goto label_3ef054;
        case 0x3ef058u: goto label_3ef058;
        case 0x3ef05cu: goto label_3ef05c;
        case 0x3ef060u: goto label_3ef060;
        case 0x3ef064u: goto label_3ef064;
        case 0x3ef068u: goto label_3ef068;
        case 0x3ef06cu: goto label_3ef06c;
        case 0x3ef070u: goto label_3ef070;
        case 0x3ef074u: goto label_3ef074;
        case 0x3ef078u: goto label_3ef078;
        case 0x3ef07cu: goto label_3ef07c;
        case 0x3ef080u: goto label_3ef080;
        case 0x3ef084u: goto label_3ef084;
        case 0x3ef088u: goto label_3ef088;
        case 0x3ef08cu: goto label_3ef08c;
        case 0x3ef090u: goto label_3ef090;
        case 0x3ef094u: goto label_3ef094;
        case 0x3ef098u: goto label_3ef098;
        case 0x3ef09cu: goto label_3ef09c;
        case 0x3ef0a0u: goto label_3ef0a0;
        case 0x3ef0a4u: goto label_3ef0a4;
        case 0x3ef0a8u: goto label_3ef0a8;
        case 0x3ef0acu: goto label_3ef0ac;
        case 0x3ef0b0u: goto label_3ef0b0;
        case 0x3ef0b4u: goto label_3ef0b4;
        case 0x3ef0b8u: goto label_3ef0b8;
        case 0x3ef0bcu: goto label_3ef0bc;
        case 0x3ef0c0u: goto label_3ef0c0;
        case 0x3ef0c4u: goto label_3ef0c4;
        case 0x3ef0c8u: goto label_3ef0c8;
        case 0x3ef0ccu: goto label_3ef0cc;
        case 0x3ef0d0u: goto label_3ef0d0;
        case 0x3ef0d4u: goto label_3ef0d4;
        case 0x3ef0d8u: goto label_3ef0d8;
        case 0x3ef0dcu: goto label_3ef0dc;
        case 0x3ef0e0u: goto label_3ef0e0;
        case 0x3ef0e4u: goto label_3ef0e4;
        case 0x3ef0e8u: goto label_3ef0e8;
        case 0x3ef0ecu: goto label_3ef0ec;
        case 0x3ef0f0u: goto label_3ef0f0;
        case 0x3ef0f4u: goto label_3ef0f4;
        case 0x3ef0f8u: goto label_3ef0f8;
        case 0x3ef0fcu: goto label_3ef0fc;
        case 0x3ef100u: goto label_3ef100;
        case 0x3ef104u: goto label_3ef104;
        case 0x3ef108u: goto label_3ef108;
        case 0x3ef10cu: goto label_3ef10c;
        case 0x3ef110u: goto label_3ef110;
        case 0x3ef114u: goto label_3ef114;
        case 0x3ef118u: goto label_3ef118;
        case 0x3ef11cu: goto label_3ef11c;
        case 0x3ef120u: goto label_3ef120;
        case 0x3ef124u: goto label_3ef124;
        case 0x3ef128u: goto label_3ef128;
        case 0x3ef12cu: goto label_3ef12c;
        case 0x3ef130u: goto label_3ef130;
        case 0x3ef134u: goto label_3ef134;
        case 0x3ef138u: goto label_3ef138;
        case 0x3ef13cu: goto label_3ef13c;
        case 0x3ef140u: goto label_3ef140;
        case 0x3ef144u: goto label_3ef144;
        case 0x3ef148u: goto label_3ef148;
        case 0x3ef14cu: goto label_3ef14c;
        case 0x3ef150u: goto label_3ef150;
        case 0x3ef154u: goto label_3ef154;
        case 0x3ef158u: goto label_3ef158;
        case 0x3ef15cu: goto label_3ef15c;
        case 0x3ef160u: goto label_3ef160;
        case 0x3ef164u: goto label_3ef164;
        case 0x3ef168u: goto label_3ef168;
        case 0x3ef16cu: goto label_3ef16c;
        case 0x3ef170u: goto label_3ef170;
        case 0x3ef174u: goto label_3ef174;
        case 0x3ef178u: goto label_3ef178;
        case 0x3ef17cu: goto label_3ef17c;
        case 0x3ef180u: goto label_3ef180;
        case 0x3ef184u: goto label_3ef184;
        default: break;
    }

    ctx->pc = 0x3eeea0u;

label_3eeea0:
    // 0x3eeea0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3eeea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3eeea4:
    // 0x3eeea4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3eeea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3eeea8:
    // 0x3eeea8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3eeea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3eeeac:
    // 0x3eeeac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eeeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eeeb0:
    // 0x3eeeb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3eeeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3eeeb4:
    // 0x3eeeb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eeeb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eeeb8:
    // 0x3eeeb8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3eeeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3eeebc:
    // 0x3eeebc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3eeebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3eeec0:
    // 0x3eeec0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eeec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eeec4:
    // 0x3eeec4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eeec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eeec8:
    // 0x3eeec8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eeec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eeecc:
    // 0x3eeecc: 0x40f809  jalr        $v0
label_3eeed0:
    if (ctx->pc == 0x3EEED0u) {
        ctx->pc = 0x3EEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEECCu;
        // 0x3eeed0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEED4u;
        goto label_3eeed4;
    }
    ctx->pc = 0x3EEECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EEED4u);
        ctx->pc = 0x3EEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEECCu;
        // 0x3eeed0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEECCu, 0x3EEED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EEED4u;
label_3eeed4:
    // 0x3eeed4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3eeed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eeed8:
    // 0x3eeed8: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3eeed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3eeedc:
    // 0x3eeedc: 0xc0e858c  jal         func_3A1630
label_3eeee0:
    if (ctx->pc == 0x3EEEE0u) {
        ctx->pc = 0x3EEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEEDCu;
        // 0x3eeee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEEE4u;
        goto label_3eeee4;
    }
    ctx->pc = 0x3EEEDCu;
    SET_GPR_U32(ctx, 31, 0x3EEEE4u);
    ctx->pc = 0x3EEEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEEDCu;
    // 0x3eeee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EEEDCu, 0x3EEEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEEE4u;
label_3eeee4:
    // 0x3eeee4: 0xc0ea14c  jal         func_3A8530
label_3eeee8:
    if (ctx->pc == 0x3EEEE8u) {
        ctx->pc = 0x3EEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEEE4u;
        // 0x3eeee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEEECu;
        goto label_3eeeec;
    }
    ctx->pc = 0x3EEEE4u;
    SET_GPR_U32(ctx, 31, 0x3EEEECu);
    ctx->pc = 0x3EEEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEEE4u;
    // 0x3eeee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EEEE4u, 0x3EEEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEEECu;
label_3eeeec:
    // 0x3eeeec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3eeeecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eeef0:
    // 0x3eeef0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eeef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eeef4:
    // 0x3eeef4: 0xc0ea12a  jal         func_3A84A8
label_3eeef8:
    if (ctx->pc == 0x3EEEF8u) {
        ctx->pc = 0x3EEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEEF4u;
        // 0x3eeef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEEFCu;
        goto label_3eeefc;
    }
    ctx->pc = 0x3EEEF4u;
    SET_GPR_U32(ctx, 31, 0x3EEEFCu);
    ctx->pc = 0x3EEEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEEF4u;
    // 0x3eeef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EEEF4u, 0x3EEEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEEFCu;
label_3eeefc:
    // 0x3eeefc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eeefcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eef00:
    // 0x3eef00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3eef00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eef04:
    // 0x3eef04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eef08:
    // 0x3eef08: 0xc0ea12a  jal         func_3A84A8
label_3eef0c:
    if (ctx->pc == 0x3EEF0Cu) {
        ctx->pc = 0x3EEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF08u;
        // 0x3eef0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEF10u;
        goto label_3eef10;
    }
    ctx->pc = 0x3EEF08u;
    SET_GPR_U32(ctx, 31, 0x3EEF10u);
    ctx->pc = 0x3EEF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF08u;
    // 0x3eef0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EEF08u, 0x3EEF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF10u;
label_3eef10:
    // 0x3eef10: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3eef10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eef14:
    // 0x3eef14: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x3eef14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_3eef18:
    // 0x3eef18: 0x8c448690  lw          $a0, -0x7970($v0)
    ctx->pc = 0x3eef18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_3eef1c:
    // 0x3eef1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eef20:
    // 0x3eef20: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3eef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3eef24:
    // 0x3eef24: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x3eef24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_3eef28:
    // 0x3eef28: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_3eef2c:
    if (ctx->pc == 0x3EEF2Cu) {
        ctx->pc = 0x3EEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF28u;
        // 0x3eef2c: 0xae250054  sw          $a1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEF30u;
        goto label_3eef30;
    }
    ctx->pc = 0x3EEF28u;
    {
        const bool branch_taken_0x3eef28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF28u;
        // 0x3eef2c: 0xae250054  sw          $a1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eef28) {
            ctx->pc = 0x3EEF58u;
            goto label_3eef58;
        }
    }
    ctx->pc = 0x3EEF30u;
label_3eef30:
    // 0x3eef30: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3eef30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3eef34:
    // 0x3eef34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3eef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eef38:
    // 0x3eef38: 0xc0e896e  jal         func_3A25B8
label_3eef3c:
    if (ctx->pc == 0x3EEF3Cu) {
        ctx->pc = 0x3EEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF38u;
        // 0x3eef3c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEF40u;
        goto label_3eef40;
    }
    ctx->pc = 0x3EEF38u;
    SET_GPR_U32(ctx, 31, 0x3EEF40u);
    ctx->pc = 0x3EEF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF38u;
    // 0x3eef3c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3EEF38u, 0x3EEF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF40u;
label_3eef40:
    // 0x3eef40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3eef40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eef44:
    // 0x3eef44: 0xc0e862e  jal         func_3A18B8
label_3eef48:
    if (ctx->pc == 0x3EEF48u) {
        ctx->pc = 0x3EEF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF44u;
        // 0x3eef48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEF4Cu;
        goto label_3eef4c;
    }
    ctx->pc = 0x3EEF44u;
    SET_GPR_U32(ctx, 31, 0x3EEF4Cu);
    ctx->pc = 0x3EEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF44u;
    // 0x3eef48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3EEF44u, 0x3EEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF4Cu;
label_3eef4c:
    // 0x3eef4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eef4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eef50:
    // 0x3eef50: 0xc0e896c  jal         func_3A25B0
label_3eef54:
    if (ctx->pc == 0x3EEF54u) {
        ctx->pc = 0x3EEF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF50u;
        // 0x3eef54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEF58u;
        goto label_3eef58;
    }
    ctx->pc = 0x3EEF50u;
    SET_GPR_U32(ctx, 31, 0x3EEF58u);
    ctx->pc = 0x3EEF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF50u;
    // 0x3eef54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3EEF50u, 0x3EEF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF58u;
label_3eef58:
    // 0x3eef58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eef58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eef5c:
    // 0x3eef5c: 0xc0e9132  jal         func_3A44C8
label_3eef60:
    if (ctx->pc == 0x3EEF60u) {
        ctx->pc = 0x3EEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF5Cu;
        // 0x3eef60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEF64u;
        goto label_3eef64;
    }
    ctx->pc = 0x3EEF5Cu;
    SET_GPR_U32(ctx, 31, 0x3EEF64u);
    ctx->pc = 0x3EEF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF5Cu;
    // 0x3eef60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EEF5Cu, 0x3EEF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF64u;
label_3eef64:
    // 0x3eef64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eef64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eef68:
    // 0x3eef68: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3eef68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eef6c:
    // 0x3eef6c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3eef6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eef70:
    // 0x3eef70: 0x3c032843  lui         $v1, 0x2843
    ctx->pc = 0x3eef70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10307 << 16));
label_3eef74:
    // 0x3eef74: 0x346320ce  ori         $v1, $v1, 0x20CE
    ctx->pc = 0x3eef74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8398);
label_3eef78:
    // 0x3eef78: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x3eef78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
label_3eef7c:
    // 0x3eef7c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3eef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3eef80:
    // 0x3eef80: 0x12030014  beq         $s0, $v1, . + 4 + (0x14 << 2)
label_3eef84:
    if (ctx->pc == 0x3EEF84u) {
        ctx->pc = 0x3EEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF80u;
        // 0x3eef84: 0xae3000c4  sw          $s0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEF88u;
        goto label_3eef88;
    }
    ctx->pc = 0x3EEF80u;
    {
        const bool branch_taken_0x3eef80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF80u;
        // 0x3eef84: 0xae3000c4  sw          $s0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eef80) {
            ctx->pc = 0x3EEFD4u;
            goto label_3eefd4;
        }
    }
    ctx->pc = 0x3EEF88u;
label_3eef88:
    // 0x3eef88: 0x3c026369  lui         $v0, 0x6369
    ctx->pc = 0x3eef88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25449 << 16));
label_3eef8c:
    // 0x3eef8c: 0x34428efe  ori         $v0, $v0, 0x8EFE
    ctx->pc = 0x3eef8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36606);
label_3eef90:
    // 0x3eef90: 0x52020011  beql        $s0, $v0, . + 4 + (0x11 << 2)
label_3eef94:
    if (ctx->pc == 0x3EEF94u) {
        ctx->pc = 0x3EEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF90u;
        // 0x3eef94: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEF98u;
        goto label_3eef98;
    }
    ctx->pc = 0x3EEF90u;
    {
        const bool branch_taken_0x3eef90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3eef90) {
            ctx->pc = 0x3EEF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEF90u;
            // 0x3eef94: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEFD8u;
            goto label_3eefd8;
        }
    }
    ctx->pc = 0x3EEF98u;
label_3eef98:
    // 0x3eef98: 0x3c02a145  lui         $v0, 0xA145
    ctx->pc = 0x3eef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41285 << 16));
label_3eef9c:
    // 0x3eef9c: 0x34422599  ori         $v0, $v0, 0x2599
    ctx->pc = 0x3eef9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9625);
label_3eefa0:
    // 0x3eefa0: 0x5202000d  beql        $s0, $v0, . + 4 + (0xD << 2)
label_3eefa4:
    if (ctx->pc == 0x3EEFA4u) {
        ctx->pc = 0x3EEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFA0u;
        // 0x3eefa4: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEFA8u;
        goto label_3eefa8;
    }
    ctx->pc = 0x3EEFA0u;
    {
        const bool branch_taken_0x3eefa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3eefa0) {
            ctx->pc = 0x3EEFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEFA0u;
            // 0x3eefa4: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEFD8u;
            goto label_3eefd8;
        }
    }
    ctx->pc = 0x3EEFA8u;
label_3eefa8:
    // 0x3eefa8: 0x3c0285ef  lui         $v0, 0x85EF
    ctx->pc = 0x3eefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34287 << 16));
label_3eefac:
    // 0x3eefac: 0x3442eece  ori         $v0, $v0, 0xEECE
    ctx->pc = 0x3eefacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61134);
label_3eefb0:
    // 0x3eefb0: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3eefb4:
    if (ctx->pc == 0x3EEFB4u) {
        ctx->pc = 0x3EEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFB0u;
        // 0x3eefb4: 0x3c0262e8  lui         $v0, 0x62E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25320 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEFB8u;
        goto label_3eefb8;
    }
    ctx->pc = 0x3EEFB0u;
    {
        const bool branch_taken_0x3eefb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFB0u;
        // 0x3eefb4: 0x3c0262e8  lui         $v0, 0x62E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eefb0) {
            ctx->pc = 0x3EEFD4u;
            goto label_3eefd4;
        }
    }
    ctx->pc = 0x3EEFB8u;
label_3eefb8:
    // 0x3eefb8: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x3eefb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_3eefbc:
    // 0x3eefbc: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
label_3eefc0:
    if (ctx->pc == 0x3EEFC0u) {
        ctx->pc = 0x3EEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFBCu;
        // 0x3eefc0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEFC4u;
        goto label_3eefc4;
    }
    ctx->pc = 0x3EEFBCu;
    {
        const bool branch_taken_0x3eefbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3eefbc) {
            ctx->pc = 0x3EEFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEFBCu;
            // 0x3eefc0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEFD8u;
            goto label_3eefd8;
        }
    }
    ctx->pc = 0x3EEFC4u;
label_3eefc4:
    // 0x3eefc4: 0x3c02f8e6  lui         $v0, 0xF8E6
    ctx->pc = 0x3eefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63718 << 16));
label_3eefc8:
    // 0x3eefc8: 0x3442d900  ori         $v0, $v0, 0xD900
    ctx->pc = 0x3eefc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55552);
label_3eefcc:
    // 0x3eefcc: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3eefd0:
    if (ctx->pc == 0x3EEFD0u) {
        ctx->pc = 0x3EEFD4u;
        goto label_3eefd4;
    }
    ctx->pc = 0x3EEFCCu;
    {
        const bool branch_taken_0x3eefcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eefcc) {
            ctx->pc = 0x3EEFE0u;
            goto label_3eefe0;
        }
    }
    ctx->pc = 0x3EEFD4u;
label_3eefd4:
    // 0x3eefd4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3eefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3eefd8:
    // 0x3eefd8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3eefd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_3eefdc:
    // 0x3eefdc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3eefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3eefe0:
    // 0x3eefe0: 0x3c02fcbe  lui         $v0, 0xFCBE
    ctx->pc = 0x3eefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64702 << 16));
label_3eefe4:
    // 0x3eefe4: 0x34429fbb  ori         $v0, $v0, 0x9FBB
    ctx->pc = 0x3eefe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40891);
label_3eefe8:
    // 0x3eefe8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_3eefec:
    if (ctx->pc == 0x3EEFECu) {
        ctx->pc = 0x3EEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFE8u;
        // 0x3eefec: 0x3c0216e8  lui         $v0, 0x16E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5864 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEFF0u;
        goto label_3eeff0;
    }
    ctx->pc = 0x3EEFE8u;
    {
        const bool branch_taken_0x3eefe8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFE8u;
        // 0x3eefec: 0x3c0216e8  lui         $v0, 0x16E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5864 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eefe8) {
            ctx->pc = 0x3EF000u;
            goto label_3ef000;
        }
    }
    ctx->pc = 0x3EEFF0u;
label_3eeff0:
    // 0x3eeff0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3eeff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3eeff4:
    // 0x3eeff4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3eeff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_3eeff8:
    // 0x3eeff8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3eeff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3eeffc:
    // 0x3eeffc: 0x3c0216e8  lui         $v0, 0x16E8
    ctx->pc = 0x3eeffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5864 << 16));
label_3ef000:
    // 0x3ef000: 0x3442b82c  ori         $v0, $v0, 0xB82C
    ctx->pc = 0x3ef000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47148);
label_3ef004:
    // 0x3ef004: 0x5202000d  beql        $s0, $v0, . + 4 + (0xD << 2)
label_3ef008:
    if (ctx->pc == 0x3EF008u) {
        ctx->pc = 0x3EF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF004u;
        // 0x3ef008: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF00Cu;
        goto label_3ef00c;
    }
    ctx->pc = 0x3EF004u;
    {
        const bool branch_taken_0x3ef004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ef004) {
            ctx->pc = 0x3EF008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF004u;
            // 0x3ef008: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF03Cu;
            goto label_3ef03c;
        }
    }
    ctx->pc = 0x3EF00Cu;
label_3ef00c:
    // 0x3ef00c: 0x3c028fe1  lui         $v0, 0x8FE1
    ctx->pc = 0x3ef00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36833 << 16));
label_3ef010:
    // 0x3ef010: 0x3442e996  ori         $v0, $v0, 0xE996
    ctx->pc = 0x3ef010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59798);
label_3ef014:
    // 0x3ef014: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
label_3ef018:
    if (ctx->pc == 0x3EF018u) {
        ctx->pc = 0x3EF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF014u;
        // 0x3ef018: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF01Cu;
        goto label_3ef01c;
    }
    ctx->pc = 0x3EF014u;
    {
        const bool branch_taken_0x3ef014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ef014) {
            ctx->pc = 0x3EF018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF014u;
            // 0x3ef018: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF03Cu;
            goto label_3ef03c;
        }
    }
    ctx->pc = 0x3EF01Cu;
label_3ef01c:
    // 0x3ef01c: 0x3c02f8e6  lui         $v0, 0xF8E6
    ctx->pc = 0x3ef01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63718 << 16));
label_3ef020:
    // 0x3ef020: 0x3442d900  ori         $v0, $v0, 0xD900
    ctx->pc = 0x3ef020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55552);
label_3ef024:
    // 0x3ef024: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_3ef028:
    if (ctx->pc == 0x3EF028u) {
        ctx->pc = 0x3EF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF024u;
        // 0x3ef028: 0x3c02477c  lui         $v0, 0x477C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18300 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF02Cu;
        goto label_3ef02c;
    }
    ctx->pc = 0x3EF024u;
    {
        const bool branch_taken_0x3ef024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF024u;
        // 0x3ef028: 0x3c02477c  lui         $v0, 0x477C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18300 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef024) {
            ctx->pc = 0x3EF038u;
            goto label_3ef038;
        }
    }
    ctx->pc = 0x3EF02Cu;
label_3ef02c:
    // 0x3ef02c: 0x34420f17  ori         $v0, $v0, 0xF17
    ctx->pc = 0x3ef02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3863);
label_3ef030:
    // 0x3ef030: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_3ef034:
    if (ctx->pc == 0x3EF034u) {
        ctx->pc = 0x3EF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF030u;
        // 0x3ef034: 0x3c02375b  lui         $v0, 0x375B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14171 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF038u;
        goto label_3ef038;
    }
    ctx->pc = 0x3EF030u;
    {
        const bool branch_taken_0x3ef030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF030u;
        // 0x3ef034: 0x3c02375b  lui         $v0, 0x375B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14171 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef030) {
            ctx->pc = 0x3EF048u;
            goto label_3ef048;
        }
    }
    ctx->pc = 0x3EF038u;
label_3ef038:
    // 0x3ef038: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3ef038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3ef03c:
    // 0x3ef03c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3ef03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3ef040:
    // 0x3ef040: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3ef040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3ef044:
    // 0x3ef044: 0x3c02375b  lui         $v0, 0x375B
    ctx->pc = 0x3ef044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14171 << 16));
label_3ef048:
    // 0x3ef048: 0x34421e2a  ori         $v0, $v0, 0x1E2A
    ctx->pc = 0x3ef048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7722);
label_3ef04c:
    // 0x3ef04c: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
label_3ef050:
    if (ctx->pc == 0x3EF050u) {
        ctx->pc = 0x3EF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF04Cu;
        // 0x3ef050: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF054u;
        goto label_3ef054;
    }
    ctx->pc = 0x3EF04Cu;
    {
        const bool branch_taken_0x3ef04c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF04Cu;
        // 0x3ef050: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef04c) {
            ctx->pc = 0x3EF10Cu;
            goto label_3ef10c;
        }
    }
    ctx->pc = 0x3EF054u;
label_3ef054:
    // 0x3ef054: 0x3c02d32b  lui         $v0, 0xD32B
    ctx->pc = 0x3ef054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54059 << 16));
label_3ef058:
    // 0x3ef058: 0x3442c4ba  ori         $v0, $v0, 0xC4BA
    ctx->pc = 0x3ef058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50362);
label_3ef05c:
    // 0x3ef05c: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
label_3ef060:
    if (ctx->pc == 0x3EF060u) {
        ctx->pc = 0x3EF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF05Cu;
        // 0x3ef060: 0x3c024a22  lui         $v0, 0x4A22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18978 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF064u;
        goto label_3ef064;
    }
    ctx->pc = 0x3EF05Cu;
    {
        const bool branch_taken_0x3ef05c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF05Cu;
        // 0x3ef060: 0x3c024a22  lui         $v0, 0x4A22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18978 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef05c) {
            ctx->pc = 0x3EF108u;
            goto label_3ef108;
        }
    }
    ctx->pc = 0x3EF064u;
label_3ef064:
    // 0x3ef064: 0x34429500  ori         $v0, $v0, 0x9500
    ctx->pc = 0x3ef064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38144);
label_3ef068:
    // 0x3ef068: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
label_3ef06c:
    if (ctx->pc == 0x3EF06Cu) {
        ctx->pc = 0x3EF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF068u;
        // 0x3ef06c: 0x3c023d25  lui         $v0, 0x3D25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15653 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF070u;
        goto label_3ef070;
    }
    ctx->pc = 0x3EF068u;
    {
        const bool branch_taken_0x3ef068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF068u;
        // 0x3ef06c: 0x3c023d25  lui         $v0, 0x3D25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15653 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef068) {
            ctx->pc = 0x3EF108u;
            goto label_3ef108;
        }
    }
    ctx->pc = 0x3EF070u;
label_3ef070:
    // 0x3ef070: 0x3442a596  ori         $v0, $v0, 0xA596
    ctx->pc = 0x3ef070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42390);
label_3ef074:
    // 0x3ef074: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
label_3ef078:
    if (ctx->pc == 0x3EF078u) {
        ctx->pc = 0x3EF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF074u;
        // 0x3ef078: 0x3c024492  lui         $v0, 0x4492 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17554 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF07Cu;
        goto label_3ef07c;
    }
    ctx->pc = 0x3EF074u;
    {
        const bool branch_taken_0x3ef074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF074u;
        // 0x3ef078: 0x3c024492  lui         $v0, 0x4492 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17554 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef074) {
            ctx->pc = 0x3EF108u;
            goto label_3ef108;
        }
    }
    ctx->pc = 0x3EF07Cu;
label_3ef07c:
    // 0x3ef07c: 0x3442095e  ori         $v0, $v0, 0x95E
    ctx->pc = 0x3ef07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2398);
label_3ef080:
    // 0x3ef080: 0x12020022  beq         $s0, $v0, . + 4 + (0x22 << 2)
label_3ef084:
    if (ctx->pc == 0x3EF084u) {
        ctx->pc = 0x3EF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF080u;
        // 0x3ef084: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF088u;
        goto label_3ef088;
    }
    ctx->pc = 0x3EF080u;
    {
        const bool branch_taken_0x3ef080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF080u;
        // 0x3ef084: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef080) {
            ctx->pc = 0x3EF10Cu;
            goto label_3ef10c;
        }
    }
    ctx->pc = 0x3EF088u;
label_3ef088:
    // 0x3ef088: 0x3c02dd9b  lui         $v0, 0xDD9B
    ctx->pc = 0x3ef088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56731 << 16));
label_3ef08c:
    // 0x3ef08c: 0x344258e4  ori         $v0, $v0, 0x58E4
    ctx->pc = 0x3ef08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22756);
label_3ef090:
    // 0x3ef090: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
label_3ef094:
    if (ctx->pc == 0x3EF094u) {
        ctx->pc = 0x3EF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF090u;
        // 0x3ef094: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF098u;
        goto label_3ef098;
    }
    ctx->pc = 0x3EF090u;
    {
        const bool branch_taken_0x3ef090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF090u;
        // 0x3ef094: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef090) {
            ctx->pc = 0x3EF10Cu;
            goto label_3ef10c;
        }
    }
    ctx->pc = 0x3EF098u;
label_3ef098:
    // 0x3ef098: 0x3c02aa9c  lui         $v0, 0xAA9C
    ctx->pc = 0x3ef098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43676 << 16));
label_3ef09c:
    // 0x3ef09c: 0x34426872  ori         $v0, $v0, 0x6872
    ctx->pc = 0x3ef09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26738);
label_3ef0a0:
    // 0x3ef0a0: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
label_3ef0a4:
    if (ctx->pc == 0x3EF0A4u) {
        ctx->pc = 0x3EF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0A0u;
        // 0x3ef0a4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF0A8u;
        goto label_3ef0a8;
    }
    ctx->pc = 0x3EF0A0u;
    {
        const bool branch_taken_0x3ef0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0A0u;
        // 0x3ef0a4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0a0) {
            ctx->pc = 0x3EF10Cu;
            goto label_3ef10c;
        }
    }
    ctx->pc = 0x3EF0A8u;
label_3ef0a8:
    // 0x3ef0a8: 0x3c029397  lui         $v0, 0x9397
    ctx->pc = 0x3ef0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37783 << 16));
label_3ef0ac:
    // 0x3ef0ac: 0x34420f57  ori         $v0, $v0, 0xF57
    ctx->pc = 0x3ef0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3927);
label_3ef0b0:
    // 0x3ef0b0: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
label_3ef0b4:
    if (ctx->pc == 0x3EF0B4u) {
        ctx->pc = 0x3EF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0B0u;
        // 0x3ef0b4: 0x3c020a9e  lui         $v0, 0xA9E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2718 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF0B8u;
        goto label_3ef0b8;
    }
    ctx->pc = 0x3EF0B0u;
    {
        const bool branch_taken_0x3ef0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0B0u;
        // 0x3ef0b4: 0x3c020a9e  lui         $v0, 0xA9E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2718 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0b0) {
            ctx->pc = 0x3EF108u;
            goto label_3ef108;
        }
    }
    ctx->pc = 0x3EF0B8u;
label_3ef0b8:
    // 0x3ef0b8: 0x34425eed  ori         $v0, $v0, 0x5EED
    ctx->pc = 0x3ef0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24301);
label_3ef0bc:
    // 0x3ef0bc: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_3ef0c0:
    if (ctx->pc == 0x3EF0C0u) {
        ctx->pc = 0x3EF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0BCu;
        // 0x3ef0c0: 0x3c0205df  lui         $v0, 0x5DF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1503 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF0C4u;
        goto label_3ef0c4;
    }
    ctx->pc = 0x3EF0BCu;
    {
        const bool branch_taken_0x3ef0bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0BCu;
        // 0x3ef0c0: 0x3c0205df  lui         $v0, 0x5DF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1503 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0bc) {
            ctx->pc = 0x3EF108u;
            goto label_3ef108;
        }
    }
    ctx->pc = 0x3EF0C4u;
label_3ef0c4:
    // 0x3ef0c4: 0x3442cf1a  ori         $v0, $v0, 0xCF1A
    ctx->pc = 0x3ef0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53018);
label_3ef0c8:
    // 0x3ef0c8: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_3ef0cc:
    if (ctx->pc == 0x3EF0CCu) {
        ctx->pc = 0x3EF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0C8u;
        // 0x3ef0cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF0D0u;
        goto label_3ef0d0;
    }
    ctx->pc = 0x3EF0C8u;
    {
        const bool branch_taken_0x3ef0c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0C8u;
        // 0x3ef0cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0c8) {
            ctx->pc = 0x3EF10Cu;
            goto label_3ef10c;
        }
    }
    ctx->pc = 0x3EF0D0u;
label_3ef0d0:
    // 0x3ef0d0: 0x3c029cd6  lui         $v0, 0x9CD6
    ctx->pc = 0x3ef0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40150 << 16));
label_3ef0d4:
    // 0x3ef0d4: 0x34429ea0  ori         $v0, $v0, 0x9EA0
    ctx->pc = 0x3ef0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40608);
label_3ef0d8:
    // 0x3ef0d8: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
label_3ef0dc:
    if (ctx->pc == 0x3EF0DCu) {
        ctx->pc = 0x3EF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0D8u;
        // 0x3ef0dc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF0E0u;
        goto label_3ef0e0;
    }
    ctx->pc = 0x3EF0D8u;
    {
        const bool branch_taken_0x3ef0d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0D8u;
        // 0x3ef0dc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0d8) {
            ctx->pc = 0x3EF10Cu;
            goto label_3ef10c;
        }
    }
    ctx->pc = 0x3EF0E0u;
label_3ef0e0:
    // 0x3ef0e0: 0x3c02ebd1  lui         $v0, 0xEBD1
    ctx->pc = 0x3ef0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60369 << 16));
label_3ef0e4:
    // 0x3ef0e4: 0x3442ae36  ori         $v0, $v0, 0xAE36
    ctx->pc = 0x3ef0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44598);
label_3ef0e8:
    // 0x3ef0e8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_3ef0ec:
    if (ctx->pc == 0x3EF0ECu) {
        ctx->pc = 0x3EF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0E8u;
        // 0x3ef0ec: 0x3c0275b5  lui         $v0, 0x75B5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30133 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF0F0u;
        goto label_3ef0f0;
    }
    ctx->pc = 0x3EF0E8u;
    {
        const bool branch_taken_0x3ef0e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0E8u;
        // 0x3ef0ec: 0x3c0275b5  lui         $v0, 0x75B5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0e8) {
            ctx->pc = 0x3EF108u;
            goto label_3ef108;
        }
    }
    ctx->pc = 0x3EF0F0u;
label_3ef0f0:
    // 0x3ef0f0: 0x34423b95  ori         $v0, $v0, 0x3B95
    ctx->pc = 0x3ef0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15253);
label_3ef0f4:
    // 0x3ef0f4: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_3ef0f8:
    if (ctx->pc == 0x3EF0F8u) {
        ctx->pc = 0x3EF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0F4u;
        // 0x3ef0f8: 0x3c021658  lui         $v0, 0x1658 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5720 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF0FCu;
        goto label_3ef0fc;
    }
    ctx->pc = 0x3EF0F4u;
    {
        const bool branch_taken_0x3ef0f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0F4u;
        // 0x3ef0f8: 0x3c021658  lui         $v0, 0x1658 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5720 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0f4) {
            ctx->pc = 0x3EF108u;
            goto label_3ef108;
        }
    }
    ctx->pc = 0x3EF0FCu;
label_3ef0fc:
    // 0x3ef0fc: 0x34423a4a  ori         $v0, $v0, 0x3A4A
    ctx->pc = 0x3ef0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14922);
label_3ef100:
    // 0x3ef100: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3ef104:
    if (ctx->pc == 0x3EF104u) {
        ctx->pc = 0x3EF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF100u;
        // 0x3ef104: 0x3c0214e8  lui         $v0, 0x14E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF108u;
        goto label_3ef108;
    }
    ctx->pc = 0x3EF100u;
    {
        const bool branch_taken_0x3ef100 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF100u;
        // 0x3ef104: 0x3c0214e8  lui         $v0, 0x14E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef100) {
            ctx->pc = 0x3EF114u;
            goto label_3ef114;
        }
    }
    ctx->pc = 0x3EF108u;
label_3ef108:
    // 0x3ef108: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ef108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ef10c:
    // 0x3ef10c: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x3ef10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_3ef110:
    // 0x3ef110: 0x3c0214e8  lui         $v0, 0x14E8
    ctx->pc = 0x3ef110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5352 << 16));
label_3ef114:
    // 0x3ef114: 0x3442682c  ori         $v0, $v0, 0x682C
    ctx->pc = 0x3ef114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26668);
label_3ef118:
    // 0x3ef118: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_3ef11c:
    if (ctx->pc == 0x3EF11Cu) {
        ctx->pc = 0x3EF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF118u;
        // 0x3ef11c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF120u;
        goto label_3ef120;
    }
    ctx->pc = 0x3EF118u;
    {
        const bool branch_taken_0x3ef118 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF118u;
        // 0x3ef11c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef118) {
            ctx->pc = 0x3EF13Cu;
            goto label_3ef13c;
        }
    }
    ctx->pc = 0x3EF120u;
label_3ef120:
    // 0x3ef120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ef120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef124:
    // 0x3ef124: 0xc0e858c  jal         func_3A1630
label_3ef128:
    if (ctx->pc == 0x3EF128u) {
        ctx->pc = 0x3EF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF124u;
        // 0x3ef128: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF12Cu;
        goto label_3ef12c;
    }
    ctx->pc = 0x3EF124u;
    SET_GPR_U32(ctx, 31, 0x3EF12Cu);
    ctx->pc = 0x3EF128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF124u;
    // 0x3ef128: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EF124u, 0x3EF12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF12Cu;
label_3ef12c:
    // 0x3ef12c: 0x3c023260  lui         $v0, 0x3260
    ctx->pc = 0x3ef12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12896 << 16));
label_3ef130:
    // 0x3ef130: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x3ef130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_3ef134:
    // 0x3ef134: 0x344271de  ori         $v0, $v0, 0x71DE
    ctx->pc = 0x3ef134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29150);
label_3ef138:
    // 0x3ef138: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3ef138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_3ef13c:
    // 0x3ef13c: 0x3c02014d  lui         $v0, 0x14D
    ctx->pc = 0x3ef13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)333 << 16));
label_3ef140:
    // 0x3ef140: 0x344230ce  ori         $v0, $v0, 0x30CE
    ctx->pc = 0x3ef140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12494);
label_3ef144:
    // 0x3ef144: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
label_3ef148:
    if (ctx->pc == 0x3EF148u) {
        ctx->pc = 0x3EF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF144u;
        // 0x3ef148: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF14Cu;
        goto label_3ef14c;
    }
    ctx->pc = 0x3EF144u;
    {
        const bool branch_taken_0x3ef144 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef144) {
            ctx->pc = 0x3EF148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF144u;
            // 0x3ef148: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF16Cu;
            goto label_3ef16c;
        }
    }
    ctx->pc = 0x3EF14Cu;
label_3ef14c:
    // 0x3ef14c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ef14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef150:
    // 0x3ef150: 0xc0e858c  jal         func_3A1630
label_3ef154:
    if (ctx->pc == 0x3EF154u) {
        ctx->pc = 0x3EF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF150u;
        // 0x3ef154: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF158u;
        goto label_3ef158;
    }
    ctx->pc = 0x3EF150u;
    SET_GPR_U32(ctx, 31, 0x3EF158u);
    ctx->pc = 0x3EF154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF150u;
    // 0x3ef154: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EF150u, 0x3EF158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF158u;
label_3ef158:
    // 0x3ef158: 0x3c0226ac  lui         $v0, 0x26AC
    ctx->pc = 0x3ef158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9900 << 16));
label_3ef15c:
    // 0x3ef15c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x3ef15cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_3ef160:
    // 0x3ef160: 0x3442304b  ori         $v0, $v0, 0x304B
    ctx->pc = 0x3ef160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12363);
label_3ef164:
    // 0x3ef164: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3ef164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_3ef168:
    // 0x3ef168: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3ef168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ef16c:
    // 0x3ef16c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3ef16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ef170:
    // 0x3ef170: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3ef170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ef174:
    // 0x3ef174: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ef174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ef178:
    // 0x3ef178: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ef178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ef17c:
    // 0x3ef17c: 0x3e00008  jr          $ra
label_3ef180:
    if (ctx->pc == 0x3EF180u) {
        ctx->pc = 0x3EF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF17Cu;
        // 0x3ef180: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF184u;
        goto label_3ef184;
    }
    ctx->pc = 0x3EF17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF17Cu;
        // 0x3ef180: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF184u;
label_3ef184:
    // 0x3ef184: 0x0  nop
    ctx->pc = 0x3ef184u;
    // NOP
    ctx->pc = 0x3ef188u;
}
