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

// Function: sub_003F8FD0
// Address: 0x3f8fd0 - 0x3f9368
void sub_003F8FD0_0x3f8fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F8FD0_0x3f8fd0");
#endif

    switch (ctx->pc) {
        case 0x3f8fd0u: goto label_3f8fd0;
        case 0x3f8fd4u: goto label_3f8fd4;
        case 0x3f8fd8u: goto label_3f8fd8;
        case 0x3f8fdcu: goto label_3f8fdc;
        case 0x3f8fe0u: goto label_3f8fe0;
        case 0x3f8fe4u: goto label_3f8fe4;
        case 0x3f8fe8u: goto label_3f8fe8;
        case 0x3f8fecu: goto label_3f8fec;
        case 0x3f8ff0u: goto label_3f8ff0;
        case 0x3f8ff4u: goto label_3f8ff4;
        case 0x3f8ff8u: goto label_3f8ff8;
        case 0x3f8ffcu: goto label_3f8ffc;
        case 0x3f9000u: goto label_3f9000;
        case 0x3f9004u: goto label_3f9004;
        case 0x3f9008u: goto label_3f9008;
        case 0x3f900cu: goto label_3f900c;
        case 0x3f9010u: goto label_3f9010;
        case 0x3f9014u: goto label_3f9014;
        case 0x3f9018u: goto label_3f9018;
        case 0x3f901cu: goto label_3f901c;
        case 0x3f9020u: goto label_3f9020;
        case 0x3f9024u: goto label_3f9024;
        case 0x3f9028u: goto label_3f9028;
        case 0x3f902cu: goto label_3f902c;
        case 0x3f9030u: goto label_3f9030;
        case 0x3f9034u: goto label_3f9034;
        case 0x3f9038u: goto label_3f9038;
        case 0x3f903cu: goto label_3f903c;
        case 0x3f9040u: goto label_3f9040;
        case 0x3f9044u: goto label_3f9044;
        case 0x3f9048u: goto label_3f9048;
        case 0x3f904cu: goto label_3f904c;
        case 0x3f9050u: goto label_3f9050;
        case 0x3f9054u: goto label_3f9054;
        case 0x3f9058u: goto label_3f9058;
        case 0x3f905cu: goto label_3f905c;
        case 0x3f9060u: goto label_3f9060;
        case 0x3f9064u: goto label_3f9064;
        case 0x3f9068u: goto label_3f9068;
        case 0x3f906cu: goto label_3f906c;
        case 0x3f9070u: goto label_3f9070;
        case 0x3f9074u: goto label_3f9074;
        case 0x3f9078u: goto label_3f9078;
        case 0x3f907cu: goto label_3f907c;
        case 0x3f9080u: goto label_3f9080;
        case 0x3f9084u: goto label_3f9084;
        case 0x3f9088u: goto label_3f9088;
        case 0x3f908cu: goto label_3f908c;
        case 0x3f9090u: goto label_3f9090;
        case 0x3f9094u: goto label_3f9094;
        case 0x3f9098u: goto label_3f9098;
        case 0x3f909cu: goto label_3f909c;
        case 0x3f90a0u: goto label_3f90a0;
        case 0x3f90a4u: goto label_3f90a4;
        case 0x3f90a8u: goto label_3f90a8;
        case 0x3f90acu: goto label_3f90ac;
        case 0x3f90b0u: goto label_3f90b0;
        case 0x3f90b4u: goto label_3f90b4;
        case 0x3f90b8u: goto label_3f90b8;
        case 0x3f90bcu: goto label_3f90bc;
        case 0x3f90c0u: goto label_3f90c0;
        case 0x3f90c4u: goto label_3f90c4;
        case 0x3f90c8u: goto label_3f90c8;
        case 0x3f90ccu: goto label_3f90cc;
        case 0x3f90d0u: goto label_3f90d0;
        case 0x3f90d4u: goto label_3f90d4;
        case 0x3f90d8u: goto label_3f90d8;
        case 0x3f90dcu: goto label_3f90dc;
        case 0x3f90e0u: goto label_3f90e0;
        case 0x3f90e4u: goto label_3f90e4;
        case 0x3f90e8u: goto label_3f90e8;
        case 0x3f90ecu: goto label_3f90ec;
        case 0x3f90f0u: goto label_3f90f0;
        case 0x3f90f4u: goto label_3f90f4;
        case 0x3f90f8u: goto label_3f90f8;
        case 0x3f90fcu: goto label_3f90fc;
        case 0x3f9100u: goto label_3f9100;
        case 0x3f9104u: goto label_3f9104;
        case 0x3f9108u: goto label_3f9108;
        case 0x3f910cu: goto label_3f910c;
        case 0x3f9110u: goto label_3f9110;
        case 0x3f9114u: goto label_3f9114;
        case 0x3f9118u: goto label_3f9118;
        case 0x3f911cu: goto label_3f911c;
        case 0x3f9120u: goto label_3f9120;
        case 0x3f9124u: goto label_3f9124;
        case 0x3f9128u: goto label_3f9128;
        case 0x3f912cu: goto label_3f912c;
        case 0x3f9130u: goto label_3f9130;
        case 0x3f9134u: goto label_3f9134;
        case 0x3f9138u: goto label_3f9138;
        case 0x3f913cu: goto label_3f913c;
        case 0x3f9140u: goto label_3f9140;
        case 0x3f9144u: goto label_3f9144;
        case 0x3f9148u: goto label_3f9148;
        case 0x3f914cu: goto label_3f914c;
        case 0x3f9150u: goto label_3f9150;
        case 0x3f9154u: goto label_3f9154;
        case 0x3f9158u: goto label_3f9158;
        case 0x3f915cu: goto label_3f915c;
        case 0x3f9160u: goto label_3f9160;
        case 0x3f9164u: goto label_3f9164;
        case 0x3f9168u: goto label_3f9168;
        case 0x3f916cu: goto label_3f916c;
        case 0x3f9170u: goto label_3f9170;
        case 0x3f9174u: goto label_3f9174;
        case 0x3f9178u: goto label_3f9178;
        case 0x3f917cu: goto label_3f917c;
        case 0x3f9180u: goto label_3f9180;
        case 0x3f9184u: goto label_3f9184;
        case 0x3f9188u: goto label_3f9188;
        case 0x3f918cu: goto label_3f918c;
        case 0x3f9190u: goto label_3f9190;
        case 0x3f9194u: goto label_3f9194;
        case 0x3f9198u: goto label_3f9198;
        case 0x3f919cu: goto label_3f919c;
        case 0x3f91a0u: goto label_3f91a0;
        case 0x3f91a4u: goto label_3f91a4;
        case 0x3f91a8u: goto label_3f91a8;
        case 0x3f91acu: goto label_3f91ac;
        case 0x3f91b0u: goto label_3f91b0;
        case 0x3f91b4u: goto label_3f91b4;
        case 0x3f91b8u: goto label_3f91b8;
        case 0x3f91bcu: goto label_3f91bc;
        case 0x3f91c0u: goto label_3f91c0;
        case 0x3f91c4u: goto label_3f91c4;
        case 0x3f91c8u: goto label_3f91c8;
        case 0x3f91ccu: goto label_3f91cc;
        case 0x3f91d0u: goto label_3f91d0;
        case 0x3f91d4u: goto label_3f91d4;
        case 0x3f91d8u: goto label_3f91d8;
        case 0x3f91dcu: goto label_3f91dc;
        case 0x3f91e0u: goto label_3f91e0;
        case 0x3f91e4u: goto label_3f91e4;
        case 0x3f91e8u: goto label_3f91e8;
        case 0x3f91ecu: goto label_3f91ec;
        case 0x3f91f0u: goto label_3f91f0;
        case 0x3f91f4u: goto label_3f91f4;
        case 0x3f91f8u: goto label_3f91f8;
        case 0x3f91fcu: goto label_3f91fc;
        case 0x3f9200u: goto label_3f9200;
        case 0x3f9204u: goto label_3f9204;
        case 0x3f9208u: goto label_3f9208;
        case 0x3f920cu: goto label_3f920c;
        case 0x3f9210u: goto label_3f9210;
        case 0x3f9214u: goto label_3f9214;
        case 0x3f9218u: goto label_3f9218;
        case 0x3f921cu: goto label_3f921c;
        case 0x3f9220u: goto label_3f9220;
        case 0x3f9224u: goto label_3f9224;
        case 0x3f9228u: goto label_3f9228;
        case 0x3f922cu: goto label_3f922c;
        case 0x3f9230u: goto label_3f9230;
        case 0x3f9234u: goto label_3f9234;
        case 0x3f9238u: goto label_3f9238;
        case 0x3f923cu: goto label_3f923c;
        case 0x3f9240u: goto label_3f9240;
        case 0x3f9244u: goto label_3f9244;
        case 0x3f9248u: goto label_3f9248;
        case 0x3f924cu: goto label_3f924c;
        case 0x3f9250u: goto label_3f9250;
        case 0x3f9254u: goto label_3f9254;
        case 0x3f9258u: goto label_3f9258;
        case 0x3f925cu: goto label_3f925c;
        case 0x3f9260u: goto label_3f9260;
        case 0x3f9264u: goto label_3f9264;
        case 0x3f9268u: goto label_3f9268;
        case 0x3f926cu: goto label_3f926c;
        case 0x3f9270u: goto label_3f9270;
        case 0x3f9274u: goto label_3f9274;
        case 0x3f9278u: goto label_3f9278;
        case 0x3f927cu: goto label_3f927c;
        case 0x3f9280u: goto label_3f9280;
        case 0x3f9284u: goto label_3f9284;
        case 0x3f9288u: goto label_3f9288;
        case 0x3f928cu: goto label_3f928c;
        case 0x3f9290u: goto label_3f9290;
        case 0x3f9294u: goto label_3f9294;
        case 0x3f9298u: goto label_3f9298;
        case 0x3f929cu: goto label_3f929c;
        case 0x3f92a0u: goto label_3f92a0;
        case 0x3f92a4u: goto label_3f92a4;
        case 0x3f92a8u: goto label_3f92a8;
        case 0x3f92acu: goto label_3f92ac;
        case 0x3f92b0u: goto label_3f92b0;
        case 0x3f92b4u: goto label_3f92b4;
        case 0x3f92b8u: goto label_3f92b8;
        case 0x3f92bcu: goto label_3f92bc;
        case 0x3f92c0u: goto label_3f92c0;
        case 0x3f92c4u: goto label_3f92c4;
        case 0x3f92c8u: goto label_3f92c8;
        case 0x3f92ccu: goto label_3f92cc;
        case 0x3f92d0u: goto label_3f92d0;
        case 0x3f92d4u: goto label_3f92d4;
        case 0x3f92d8u: goto label_3f92d8;
        case 0x3f92dcu: goto label_3f92dc;
        case 0x3f92e0u: goto label_3f92e0;
        case 0x3f92e4u: goto label_3f92e4;
        case 0x3f92e8u: goto label_3f92e8;
        case 0x3f92ecu: goto label_3f92ec;
        case 0x3f92f0u: goto label_3f92f0;
        case 0x3f92f4u: goto label_3f92f4;
        case 0x3f92f8u: goto label_3f92f8;
        case 0x3f92fcu: goto label_3f92fc;
        case 0x3f9300u: goto label_3f9300;
        case 0x3f9304u: goto label_3f9304;
        case 0x3f9308u: goto label_3f9308;
        case 0x3f930cu: goto label_3f930c;
        case 0x3f9310u: goto label_3f9310;
        case 0x3f9314u: goto label_3f9314;
        case 0x3f9318u: goto label_3f9318;
        case 0x3f931cu: goto label_3f931c;
        case 0x3f9320u: goto label_3f9320;
        case 0x3f9324u: goto label_3f9324;
        case 0x3f9328u: goto label_3f9328;
        case 0x3f932cu: goto label_3f932c;
        case 0x3f9330u: goto label_3f9330;
        case 0x3f9334u: goto label_3f9334;
        case 0x3f9338u: goto label_3f9338;
        case 0x3f933cu: goto label_3f933c;
        case 0x3f9340u: goto label_3f9340;
        case 0x3f9344u: goto label_3f9344;
        case 0x3f9348u: goto label_3f9348;
        case 0x3f934cu: goto label_3f934c;
        case 0x3f9350u: goto label_3f9350;
        case 0x3f9354u: goto label_3f9354;
        case 0x3f9358u: goto label_3f9358;
        case 0x3f935cu: goto label_3f935c;
        case 0x3f9360u: goto label_3f9360;
        case 0x3f9364u: goto label_3f9364;
        default: break;
    }

    ctx->pc = 0x3f8fd0u;

label_3f8fd0:
    // 0x3f8fd0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3f8fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_3f8fd4:
    // 0x3f8fd4: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x3f8fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_3f8fd8:
    // 0x3f8fd8: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x3f8fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_3f8fdc:
    // 0x3f8fdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f8fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f8fe0:
    // 0x3f8fe0: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x3f8fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_3f8fe4:
    // 0x3f8fe4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3f8fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f8fe8:
    // 0x3f8fe8: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x3f8fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_3f8fec:
    // 0x3f8fec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3f8fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f8ff0:
    // 0x3f8ff0: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x3f8ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_3f8ff4:
    // 0x3f8ff4: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x3f8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3f8ff8:
    // 0x3f8ff8: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x3f8ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_3f8ffc:
    // 0x3f8ffc: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3f8ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_3f9000:
    // 0x3f9000: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x3f9000u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_3f9004:
    // 0x3f9004: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x3f9004u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3f9008:
    // 0x3f9008: 0xc0e4080  jal         func_390200
label_3f900c:
    if (ctx->pc == 0x3F900Cu) {
        ctx->pc = 0x3F900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9008u;
        // 0x3f900c: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9010u;
        goto label_3f9010;
    }
    ctx->pc = 0x3F9008u;
    SET_GPR_U32(ctx, 31, 0x3F9010u);
    ctx->pc = 0x3F900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9008u;
    // 0x3f900c: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F9008u, 0x3F9010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9010u;
label_3f9010:
    // 0x3f9010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f9010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f9014:
    // 0x3f9014: 0xc0e4080  jal         func_390200
label_3f9018:
    if (ctx->pc == 0x3F9018u) {
        ctx->pc = 0x3F9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9014u;
        // 0x3f9018: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F901Cu;
        goto label_3f901c;
    }
    ctx->pc = 0x3F9014u;
    SET_GPR_U32(ctx, 31, 0x3F901Cu);
    ctx->pc = 0x3F9018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9014u;
    // 0x3f9018: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F9014u, 0x3F901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F901Cu;
label_3f901c:
    // 0x3f901c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f901cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f9020:
    // 0x3f9020: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3f9020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3f9024:
    // 0x3f9024: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3f9028:
    if (ctx->pc == 0x3F9028u) {
        ctx->pc = 0x3F9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9024u;
        // 0x3f9028: 0x7a620020  lq          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F902Cu;
        goto label_3f902c;
    }
    ctx->pc = 0x3F9024u;
    {
        const bool branch_taken_0x3f9024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9024) {
            ctx->pc = 0x3F9028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9024u;
            // 0x3f9028: 0x7a620020  lq          $v0, 0x20($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F905Cu;
            goto label_3f905c;
        }
    }
    ctx->pc = 0x3F902Cu;
label_3f902c:
    // 0x3f902c: 0x8ea22c7c  lw          $v0, 0x2C7C($s5)
    ctx->pc = 0x3f902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
label_3f9030:
    // 0x3f9030: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f9030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9034:
    // 0x3f9034: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f9034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9038:
    // 0x3f9038: 0xc0e637e  jal         func_398DF8
label_3f903c:
    if (ctx->pc == 0x3F903Cu) {
        ctx->pc = 0x3F903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9038u;
        // 0x3f903c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9040u;
        goto label_3f9040;
    }
    ctx->pc = 0x3F9038u;
    SET_GPR_U32(ctx, 31, 0x3F9040u);
    ctx->pc = 0x3F903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9038u;
    // 0x3f903c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F9038u, 0x3F9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9040u;
label_3f9040:
    // 0x3f9040: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_3f9044:
    if (ctx->pc == 0x3F9044u) {
        ctx->pc = 0x3F9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9040u;
        // 0x3f9044: 0x8ea22c7c  lw          $v0, 0x2C7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9048u;
        goto label_3f9048;
    }
    ctx->pc = 0x3F9040u;
    {
        const bool branch_taken_0x3f9040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9040u;
        // 0x3f9044: 0x8ea22c7c  lw          $v0, 0x2C7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9040) {
            ctx->pc = 0x3F9058u;
            goto label_3f9058;
        }
    }
    ctx->pc = 0x3F9048u;
label_3f9048:
    // 0x3f9048: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f904c:
    // 0x3f904c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f904cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9050:
    // 0x3f9050: 0xc0e637e  jal         func_398DF8
label_3f9054:
    if (ctx->pc == 0x3F9054u) {
        ctx->pc = 0x3F9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9050u;
        // 0x3f9054: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9058u;
        goto label_3f9058;
    }
    ctx->pc = 0x3F9050u;
    SET_GPR_U32(ctx, 31, 0x3F9058u);
    ctx->pc = 0x3F9054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9050u;
    // 0x3f9054: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F9050u, 0x3F9058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9058u;
label_3f9058:
    // 0x3f9058: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x3f9058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_3f905c:
    // 0x3f905c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f9060:
    // 0x3f9060: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f9060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f9064:
    // 0x3f9064: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f9064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f9068:
    // 0x3f9068: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3f9068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3f906c:
    // 0x3f906c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3f906cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3f9070:
    // 0x3f9070: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x3f9070u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_3f9074:
    // 0x3f9074: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x3f9074u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3f9078:
    // 0x3f9078: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3f9078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_3f907c:
    // 0x3f907c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3f907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3f9080:
    // 0x3f9080: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3f9080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f9084:
    // 0x3f9084: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f9084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3f9088:
    // 0x3f9088: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f9088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f908c:
    // 0x3f908c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3f9090:
    // 0x3f9090: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f9090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f9094:
    // 0x3f9094: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f9094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f9098:
    // 0x3f9098: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3f9098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f909c:
    // 0x3f909c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f909cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f90a0:
    // 0x3f90a0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f90a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f90a4:
    // 0x3f90a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f90a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f90a8:
    // 0x3f90a8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3f90a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f90ac:
    // 0x3f90ac: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3f90acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f90b0:
    // 0x3f90b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f90b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f90b4:
    // 0x3f90b4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3f90b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f90b8:
    // 0x3f90b8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3f90b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f90bc:
    // 0x3f90bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f90bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f90c0:
    // 0x3f90c0: 0x7a660010  lq          $a2, 0x10($s3)
    ctx->pc = 0x3f90c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3f90c4:
    // 0x3f90c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f90c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f90c8:
    // 0x3f90c8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f90c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f90cc:
    // 0x3f90cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3f90ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f90d0:
    // 0x3f90d0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f90d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3f90d4:
    // 0x3f90d4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f90d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3f90d8:
    // 0x3f90d8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f90d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f90dc:
    // 0x3f90dc: 0xc0e8e26  jal         func_3A3898
label_3f90e0:
    if (ctx->pc == 0x3F90E0u) {
        ctx->pc = 0x3F90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F90DCu;
        // 0x3f90e0: 0x7fa60020  sq          $a2, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F90E4u;
        goto label_3f90e4;
    }
    ctx->pc = 0x3F90DCu;
    SET_GPR_U32(ctx, 31, 0x3F90E4u);
    ctx->pc = 0x3F90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F90DCu;
    // 0x3f90e0: 0x7fa60020  sq          $a2, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F90DCu, 0x3F90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F90E4u;
label_3f90e4:
    // 0x3f90e4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3f90e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3f90e8:
    // 0x3f90e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f90e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f90ec:
    // 0x3f90ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3f90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f90f0:
    // 0x3f90f0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3f90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3f90f4:
    // 0x3f90f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f90f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f90f8:
    // 0x3f90f8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3f90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3f90fc:
    // 0x3f90fc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3f90fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3f9100:
    // 0x3f9100: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x3f9100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3f9104:
    // 0x3f9104: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x3f9104u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f9108:
    // 0x3f9108: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3f9108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f910c:
    // 0x3f910c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3f910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3f9110:
    // 0x3f9110: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3f9110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3f9114:
    // 0x3f9114: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f9114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f9118:
    // 0x3f9118: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f9118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f911c:
    // 0x3f911c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f911cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9120:
    // 0x3f9120: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f9120u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9124:
    // 0x3f9124: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f9124u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9128:
    // 0x3f9128: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f9128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f912c:
    // 0x3f912c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f912cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9130:
    // 0x3f9130: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f9130u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f9134:
    // 0x3f9134: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9138:
    // 0x3f9138: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f9138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f913c:
    // 0x3f913c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f913cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f9140:
    // 0x3f9140: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f9140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9144:
    // 0x3f9144: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f9144u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9148:
    // 0x3f9148: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f9148u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f914c:
    // 0x3f914c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f914cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9150:
    // 0x3f9150: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f9150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9154:
    // 0x3f9154: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f9154u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f9158:
    // 0x3f9158: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f9158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f915c:
    // 0x3f915c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f915cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f9160:
    // 0x3f9160: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f9160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3f9164:
    // 0x3f9164: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3f9164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f9168:
    // 0x3f9168: 0xc136b18  jal         func_4DAC60
label_3f916c:
    if (ctx->pc == 0x3F916Cu) {
        ctx->pc = 0x3F916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9168u;
        // 0x3f916c: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9170u;
        goto label_3f9170;
    }
    ctx->pc = 0x3F9168u;
    SET_GPR_U32(ctx, 31, 0x3F9170u);
    ctx->pc = 0x3F916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9168u;
    // 0x3f916c: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F9168u, 0x3F9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9170u;
label_3f9170:
    // 0x3f9170: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3f9170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f9174:
    // 0x3f9174: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f9174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f9178:
    // 0x3f9178: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f9178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f917c:
    // 0x3f917c: 0x1080004e  beqz        $a0, . + 4 + (0x4E << 2)
label_3f9180:
    if (ctx->pc == 0x3F9180u) {
        ctx->pc = 0x3F9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F917Cu;
        // 0x3f9180: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9184u;
        goto label_3f9184;
    }
    ctx->pc = 0x3F917Cu;
    {
        const bool branch_taken_0x3f917c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F917Cu;
        // 0x3f9180: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f917c) {
            ctx->pc = 0x3F92B8u;
            goto label_3f92b8;
        }
    }
    ctx->pc = 0x3F9184u;
label_3f9184:
    // 0x3f9184: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f9184u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f9188:
    // 0x3f9188: 0x0  nop
    ctx->pc = 0x3f9188u;
    // NOP
label_3f918c:
    // 0x3f918c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f918cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f9190:
    // 0x3f9190: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3f9190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3f9194:
    // 0x3f9194: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f9194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f9198:
    // 0x3f9198: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x3f9198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_3f919c:
    // 0x3f919c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x3f919cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_3f91a0:
    // 0x3f91a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f91a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f91a4:
    // 0x3f91a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f91a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f91a8:
    // 0x3f91a8: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_3f91ac:
    if (ctx->pc == 0x3F91ACu) {
        ctx->pc = 0x3F91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F91A8u;
        // 0x3f91ac: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F91B0u;
        goto label_3f91b0;
    }
    ctx->pc = 0x3F91A8u;
    {
        const bool branch_taken_0x3f91a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F91A8u;
        // 0x3f91ac: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f91a8) {
            ctx->pc = 0x3F9230u;
            goto label_3f9230;
        }
    }
    ctx->pc = 0x3F91B0u;
label_3f91b0:
    // 0x3f91b0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f91b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f91b4:
    // 0x3f91b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f91b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f91b8:
    // 0x3f91b8: 0xc12e310  jal         func_4B8C40
label_3f91bc:
    if (ctx->pc == 0x3F91BCu) {
        ctx->pc = 0x3F91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F91B8u;
        // 0x3f91bc: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F91C0u;
        goto label_3f91c0;
    }
    ctx->pc = 0x3F91B8u;
    SET_GPR_U32(ctx, 31, 0x3F91C0u);
    ctx->pc = 0x3F91BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F91B8u;
    // 0x3f91bc: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3F91B8u, 0x3F91C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F91C0u;
label_3f91c0:
    // 0x3f91c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f91c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f91c4:
    // 0x3f91c4: 0xc12e29c  jal         func_4B8A70
label_3f91c8:
    if (ctx->pc == 0x3F91C8u) {
        ctx->pc = 0x3F91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F91C4u;
        // 0x3f91c8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F91CCu;
        goto label_3f91cc;
    }
    ctx->pc = 0x3F91C4u;
    SET_GPR_U32(ctx, 31, 0x3F91CCu);
    ctx->pc = 0x3F91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F91C4u;
    // 0x3f91c8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3F91C4u, 0x3F91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F91CCu;
label_3f91cc:
    // 0x3f91cc: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x3f91ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3f91d0:
    // 0x3f91d0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3f91d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3f91d4:
    // 0x3f91d4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3f91d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3f91d8:
    // 0x3f91d8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3f91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3f91dc:
    // 0x3f91dc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3f91dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f91e0:
    // 0x3f91e0: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3f91e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f91e4:
    // 0x3f91e4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f91e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3f91e8:
    // 0x3f91e8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f91e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3f91ec:
    // 0x3f91ec: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3f91ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3f91f0:
    // 0x3f91f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f91f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f91f4:
    // 0x3f91f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f91f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f91f8:
    // 0x3f91f8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3f91f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f91fc:
    // 0x3f91fc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f91fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9200:
    // 0x3f9200: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f9200u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9204:
    // 0x3f9204: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f9204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9208:
    // 0x3f9208: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3f9208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f920c:
    // 0x3f920c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3f920cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9210:
    // 0x3f9210: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9214:
    // 0x3f9214: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3f9214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9218:
    // 0x3f9218: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3f9218u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f921c:
    // 0x3f921c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f921cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f9220:
    // 0x3f9220: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f9220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f9224:
    // 0x3f9224: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f9224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3f9228:
    // 0x3f9228: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f9228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3f922c:
    // 0x3f922c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f9230:
    // 0x3f9230: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_3f9234:
    if (ctx->pc == 0x3F9234u) {
        ctx->pc = 0x3F9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9230u;
        // 0x3f9234: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9238u;
        goto label_3f9238;
    }
    ctx->pc = 0x3F9230u;
    {
        const bool branch_taken_0x3f9230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9230u;
        // 0x3f9234: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9230) {
            ctx->pc = 0x3F92B8u;
            goto label_3f92b8;
        }
    }
    ctx->pc = 0x3F9238u;
label_3f9238:
    // 0x3f9238: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x3f9238u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_3f923c:
    // 0x3f923c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3f9240:
    // 0x3f9240: 0xc12e310  jal         func_4B8C40
label_3f9244:
    if (ctx->pc == 0x3F9244u) {
        ctx->pc = 0x3F9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9240u;
        // 0x3f9244: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9248u;
        goto label_3f9248;
    }
    ctx->pc = 0x3F9240u;
    SET_GPR_U32(ctx, 31, 0x3F9248u);
    ctx->pc = 0x3F9244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9240u;
    // 0x3f9244: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3F9240u, 0x3F9248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9248u;
label_3f9248:
    // 0x3f9248: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f9248u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f924c:
    // 0x3f924c: 0xc12e29c  jal         func_4B8A70
label_3f9250:
    if (ctx->pc == 0x3F9250u) {
        ctx->pc = 0x3F9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F924Cu;
        // 0x3f9250: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9254u;
        goto label_3f9254;
    }
    ctx->pc = 0x3F924Cu;
    SET_GPR_U32(ctx, 31, 0x3F9254u);
    ctx->pc = 0x3F9250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F924Cu;
    // 0x3f9250: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3F924Cu, 0x3F9254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9254u;
label_3f9254:
    // 0x3f9254: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x3f9254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3f9258:
    // 0x3f9258: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3f9258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3f925c:
    // 0x3f925c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3f925cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3f9260:
    // 0x3f9260: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3f9260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3f9264:
    // 0x3f9264: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3f9264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f9268:
    // 0x3f9268: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3f9268u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f926c:
    // 0x3f926c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3f9270:
    // 0x3f9270: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3f9270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3f9274:
    // 0x3f9274: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3f9274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3f9278:
    // 0x3f9278: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f9278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f927c:
    // 0x3f927c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f927cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f9280:
    // 0x3f9280: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3f9280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9284:
    // 0x3f9284: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f9284u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9288:
    // 0x3f9288: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f9288u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f928c:
    // 0x3f928c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f928cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9290:
    // 0x3f9290: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3f9290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9294:
    // 0x3f9294: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3f9294u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9298:
    // 0x3f9298: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f929c:
    // 0x3f929c: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3f929cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f92a0:
    // 0x3f92a0: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3f92a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f92a4:
    // 0x3f92a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f92a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f92a8:
    // 0x3f92a8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f92a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3f92ac:
    // 0x3f92ac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f92acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3f92b0:
    // 0x3f92b0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3f92b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3f92b4:
    // 0x3f92b4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f92b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f92b8:
    // 0x3f92b8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_3f92bc:
    if (ctx->pc == 0x3F92BCu) {
        ctx->pc = 0x3F92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92B8u;
        // 0x3f92bc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F92C0u;
        goto label_3f92c0;
    }
    ctx->pc = 0x3F92B8u;
    {
        const bool branch_taken_0x3f92b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92B8u;
        // 0x3f92bc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f92b8) {
            ctx->pc = 0x3F92ECu;
            goto label_3f92ec;
        }
    }
    ctx->pc = 0x3F92C0u;
label_3f92c0:
    // 0x3f92c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f92c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f92c4:
    // 0x3f92c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f92c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f92c8:
    // 0x3f92c8: 0xc0ea158  jal         func_3A8560
label_3f92cc:
    if (ctx->pc == 0x3F92CCu) {
        ctx->pc = 0x3F92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92C8u;
        // 0x3f92cc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F92D0u;
        goto label_3f92d0;
    }
    ctx->pc = 0x3F92C8u;
    SET_GPR_U32(ctx, 31, 0x3F92D0u);
    ctx->pc = 0x3F92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F92C8u;
    // 0x3f92cc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3F92C8u, 0x3F92D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F92D0u;
label_3f92d0:
    // 0x3f92d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3f92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f92d4:
    // 0x3f92d4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3f92d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_3f92d8:
    // 0x3f92d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f92d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f92dc:
    // 0x3f92dc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3f92dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3f92e0:
    // 0x3f92e0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3f92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3f92e4:
    // 0x3f92e4: 0x40f809  jalr        $v0
label_3f92e8:
    if (ctx->pc == 0x3F92E8u) {
        ctx->pc = 0x3F92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92E4u;
        // 0x3f92e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F92ECu;
        goto label_3f92ec;
    }
    ctx->pc = 0x3F92E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F92ECu);
        ctx->pc = 0x3F92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92E4u;
        // 0x3f92e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F92E4u, 0x3F92ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F92ECu;
label_3f92ec:
    // 0x3f92ec: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3f92f0:
    if (ctx->pc == 0x3F92F0u) {
        ctx->pc = 0x3F92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92ECu;
        // 0x3f92f0: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F92F4u;
        goto label_3f92f4;
    }
    ctx->pc = 0x3F92ECu;
    {
        const bool branch_taken_0x3f92ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92ECu;
        // 0x3f92f0: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f92ec) {
            ctx->pc = 0x3F9320u;
            goto label_3f9320;
        }
    }
    ctx->pc = 0x3F92F4u;
label_3f92f4:
    // 0x3f92f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f92f8:
    // 0x3f92f8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3f92f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f92fc:
    // 0x3f92fc: 0xc0ea158  jal         func_3A8560
label_3f9300:
    if (ctx->pc == 0x3F9300u) {
        ctx->pc = 0x3F9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F92FCu;
        // 0x3f9300: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9304u;
        goto label_3f9304;
    }
    ctx->pc = 0x3F92FCu;
    SET_GPR_U32(ctx, 31, 0x3F9304u);
    ctx->pc = 0x3F9300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F92FCu;
    // 0x3f9300: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3F92FCu, 0x3F9304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9304u;
label_3f9304:
    // 0x3f9304: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f9304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f9308:
    // 0x3f9308: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f9308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f930c:
    // 0x3f930c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3f930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_3f9310:
    // 0x3f9310: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3f9310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3f9314:
    // 0x3f9314: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3f9314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3f9318:
    // 0x3f9318: 0x40f809  jalr        $v0
label_3f931c:
    if (ctx->pc == 0x3F931Cu) {
        ctx->pc = 0x3F931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9318u;
        // 0x3f931c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9320u;
        goto label_3f9320;
    }
    ctx->pc = 0x3F9318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F9320u);
        ctx->pc = 0x3F931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9318u;
        // 0x3f931c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9318u, 0x3F9320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F9320u;
label_3f9320:
    // 0x3f9320: 0x8ea42c7c  lw          $a0, 0x2C7C($s5)
    ctx->pc = 0x3f9320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
label_3f9324:
    // 0x3f9324: 0xc0e8cda  jal         func_3A3368
label_3f9328:
    if (ctx->pc == 0x3F9328u) {
        ctx->pc = 0x3F9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9324u;
        // 0x3f9328: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F932Cu;
        goto label_3f932c;
    }
    ctx->pc = 0x3F9324u;
    SET_GPR_U32(ctx, 31, 0x3F932Cu);
    ctx->pc = 0x3F9328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9324u;
    // 0x3f9328: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3F9324u, 0x3F932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F932Cu;
label_3f932c:
    // 0x3f932c: 0x8ea42c7c  lw          $a0, 0x2C7C($s5)
    ctx->pc = 0x3f932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
label_3f9330:
    // 0x3f9330: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f9330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9334:
    // 0x3f9334: 0xc0e8cbc  jal         func_3A32F0
label_3f9338:
    if (ctx->pc == 0x3F9338u) {
        ctx->pc = 0x3F9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9334u;
        // 0x3f9338: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F933Cu;
        goto label_3f933c;
    }
    ctx->pc = 0x3F9334u;
    SET_GPR_U32(ctx, 31, 0x3F933Cu);
    ctx->pc = 0x3F9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9334u;
    // 0x3f9338: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3F9334u, 0x3F933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F933Cu;
label_3f933c:
    // 0x3f933c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x3f933cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3f9340:
    // 0x3f9340: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x3f9340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3f9344:
    // 0x3f9344: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3f9344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3f9348:
    // 0x3f9348: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3f9348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3f934c:
    // 0x3f934c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3f934cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3f9350:
    // 0x3f9350: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x3f9350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3f9354:
    // 0x3f9354: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3f9354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_3f9358:
    // 0x3f9358: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x3f9358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f935c:
    // 0x3f935c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x3f935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f9360:
    // 0x3f9360: 0x3e00008  jr          $ra
label_3f9364:
    if (ctx->pc == 0x3F9364u) {
        ctx->pc = 0x3F9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9360u;
        // 0x3f9364: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9368u;
        goto label_fallthrough_0x3f9360;
    }
    ctx->pc = 0x3F9360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9360u;
        // 0x3f9364: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f9360:
    ctx->pc = 0x3F9368u;
}
