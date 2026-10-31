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

// Function: sub_003AB110
// Address: 0x3ab110 - 0x3ab2c0
void sub_003AB110_0x3ab110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB110_0x3ab110");
#endif

    switch (ctx->pc) {
        case 0x3ab110u: goto label_3ab110;
        case 0x3ab114u: goto label_3ab114;
        case 0x3ab118u: goto label_3ab118;
        case 0x3ab11cu: goto label_3ab11c;
        case 0x3ab120u: goto label_3ab120;
        case 0x3ab124u: goto label_3ab124;
        case 0x3ab128u: goto label_3ab128;
        case 0x3ab12cu: goto label_3ab12c;
        case 0x3ab130u: goto label_3ab130;
        case 0x3ab134u: goto label_3ab134;
        case 0x3ab138u: goto label_3ab138;
        case 0x3ab13cu: goto label_3ab13c;
        case 0x3ab140u: goto label_3ab140;
        case 0x3ab144u: goto label_3ab144;
        case 0x3ab148u: goto label_3ab148;
        case 0x3ab14cu: goto label_3ab14c;
        case 0x3ab150u: goto label_3ab150;
        case 0x3ab154u: goto label_3ab154;
        case 0x3ab158u: goto label_3ab158;
        case 0x3ab15cu: goto label_3ab15c;
        case 0x3ab160u: goto label_3ab160;
        case 0x3ab164u: goto label_3ab164;
        case 0x3ab168u: goto label_3ab168;
        case 0x3ab16cu: goto label_3ab16c;
        case 0x3ab170u: goto label_3ab170;
        case 0x3ab174u: goto label_3ab174;
        case 0x3ab178u: goto label_3ab178;
        case 0x3ab17cu: goto label_3ab17c;
        case 0x3ab180u: goto label_3ab180;
        case 0x3ab184u: goto label_3ab184;
        case 0x3ab188u: goto label_3ab188;
        case 0x3ab18cu: goto label_3ab18c;
        case 0x3ab190u: goto label_3ab190;
        case 0x3ab194u: goto label_3ab194;
        case 0x3ab198u: goto label_3ab198;
        case 0x3ab19cu: goto label_3ab19c;
        case 0x3ab1a0u: goto label_3ab1a0;
        case 0x3ab1a4u: goto label_3ab1a4;
        case 0x3ab1a8u: goto label_3ab1a8;
        case 0x3ab1acu: goto label_3ab1ac;
        case 0x3ab1b0u: goto label_3ab1b0;
        case 0x3ab1b4u: goto label_3ab1b4;
        case 0x3ab1b8u: goto label_3ab1b8;
        case 0x3ab1bcu: goto label_3ab1bc;
        case 0x3ab1c0u: goto label_3ab1c0;
        case 0x3ab1c4u: goto label_3ab1c4;
        case 0x3ab1c8u: goto label_3ab1c8;
        case 0x3ab1ccu: goto label_3ab1cc;
        case 0x3ab1d0u: goto label_3ab1d0;
        case 0x3ab1d4u: goto label_3ab1d4;
        case 0x3ab1d8u: goto label_3ab1d8;
        case 0x3ab1dcu: goto label_3ab1dc;
        case 0x3ab1e0u: goto label_3ab1e0;
        case 0x3ab1e4u: goto label_3ab1e4;
        case 0x3ab1e8u: goto label_3ab1e8;
        case 0x3ab1ecu: goto label_3ab1ec;
        case 0x3ab1f0u: goto label_3ab1f0;
        case 0x3ab1f4u: goto label_3ab1f4;
        case 0x3ab1f8u: goto label_3ab1f8;
        case 0x3ab1fcu: goto label_3ab1fc;
        case 0x3ab200u: goto label_3ab200;
        case 0x3ab204u: goto label_3ab204;
        case 0x3ab208u: goto label_3ab208;
        case 0x3ab20cu: goto label_3ab20c;
        case 0x3ab210u: goto label_3ab210;
        case 0x3ab214u: goto label_3ab214;
        case 0x3ab218u: goto label_3ab218;
        case 0x3ab21cu: goto label_3ab21c;
        case 0x3ab220u: goto label_3ab220;
        case 0x3ab224u: goto label_3ab224;
        case 0x3ab228u: goto label_3ab228;
        case 0x3ab22cu: goto label_3ab22c;
        case 0x3ab230u: goto label_3ab230;
        case 0x3ab234u: goto label_3ab234;
        case 0x3ab238u: goto label_3ab238;
        case 0x3ab23cu: goto label_3ab23c;
        case 0x3ab240u: goto label_3ab240;
        case 0x3ab244u: goto label_3ab244;
        case 0x3ab248u: goto label_3ab248;
        case 0x3ab24cu: goto label_3ab24c;
        case 0x3ab250u: goto label_3ab250;
        case 0x3ab254u: goto label_3ab254;
        case 0x3ab258u: goto label_3ab258;
        case 0x3ab25cu: goto label_3ab25c;
        case 0x3ab260u: goto label_3ab260;
        case 0x3ab264u: goto label_3ab264;
        case 0x3ab268u: goto label_3ab268;
        case 0x3ab26cu: goto label_3ab26c;
        case 0x3ab270u: goto label_3ab270;
        case 0x3ab274u: goto label_3ab274;
        case 0x3ab278u: goto label_3ab278;
        case 0x3ab27cu: goto label_3ab27c;
        case 0x3ab280u: goto label_3ab280;
        case 0x3ab284u: goto label_3ab284;
        case 0x3ab288u: goto label_3ab288;
        case 0x3ab28cu: goto label_3ab28c;
        case 0x3ab290u: goto label_3ab290;
        case 0x3ab294u: goto label_3ab294;
        case 0x3ab298u: goto label_3ab298;
        case 0x3ab29cu: goto label_3ab29c;
        case 0x3ab2a0u: goto label_3ab2a0;
        case 0x3ab2a4u: goto label_3ab2a4;
        case 0x3ab2a8u: goto label_3ab2a8;
        case 0x3ab2acu: goto label_3ab2ac;
        case 0x3ab2b0u: goto label_3ab2b0;
        case 0x3ab2b4u: goto label_3ab2b4;
        case 0x3ab2b8u: goto label_3ab2b8;
        case 0x3ab2bcu: goto label_3ab2bc;
        default: break;
    }

    ctx->pc = 0x3ab110u;

label_3ab110:
    // 0x3ab110: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ab110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3ab114:
    // 0x3ab114: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ab114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3ab118:
    // 0x3ab118: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ab118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3ab11c:
    // 0x3ab11c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ab11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ab120:
    // 0x3ab120: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3ab120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3ab124:
    // 0x3ab124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ab124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ab128:
    // 0x3ab128: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3ab128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3ab12c:
    // 0x3ab12c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ab12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ab130:
    // 0x3ab130: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ab130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ab134:
    // 0x3ab134: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab138:
    // 0x3ab138: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ab138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ab13c:
    // 0x3ab13c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ab13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ab140:
    // 0x3ab140: 0x40f809  jalr        $v0
label_3ab144:
    if (ctx->pc == 0x3AB144u) {
        ctx->pc = 0x3AB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB140u;
        // 0x3ab144: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB148u;
        goto label_3ab148;
    }
    ctx->pc = 0x3AB140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB148u);
        ctx->pc = 0x3AB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB140u;
        // 0x3ab144: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB140u, 0x3AB148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB148u;
label_3ab148:
    // 0x3ab148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab14c:
    // 0x3ab14c: 0xc0ea146  jal         func_3A8518
label_3ab150:
    if (ctx->pc == 0x3AB150u) {
        ctx->pc = 0x3AB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB14Cu;
        // 0x3ab150: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB154u;
        goto label_3ab154;
    }
    ctx->pc = 0x3AB14Cu;
    SET_GPR_U32(ctx, 31, 0x3AB154u);
    ctx->pc = 0x3AB150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB14Cu;
    // 0x3ab150: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AB14Cu, 0x3AB154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB154u;
label_3ab154:
    // 0x3ab154: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ab154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ab158:
    // 0x3ab158: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ab158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ab15c:
    // 0x3ab15c: 0xc0ea12a  jal         func_3A84A8
label_3ab160:
    if (ctx->pc == 0x3AB160u) {
        ctx->pc = 0x3AB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB15Cu;
        // 0x3ab160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB164u;
        goto label_3ab164;
    }
    ctx->pc = 0x3AB15Cu;
    SET_GPR_U32(ctx, 31, 0x3AB164u);
    ctx->pc = 0x3AB160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB15Cu;
    // 0x3ab160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AB15Cu, 0x3AB164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB164u;
label_3ab164:
    // 0x3ab164: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ab164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ab168:
    // 0x3ab168: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ab168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ab16c:
    // 0x3ab16c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ab16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab170:
    // 0x3ab170: 0xc0ea12a  jal         func_3A84A8
label_3ab174:
    if (ctx->pc == 0x3AB174u) {
        ctx->pc = 0x3AB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB170u;
        // 0x3ab174: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB178u;
        goto label_3ab178;
    }
    ctx->pc = 0x3AB170u;
    SET_GPR_U32(ctx, 31, 0x3AB178u);
    ctx->pc = 0x3AB174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB170u;
    // 0x3ab174: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AB170u, 0x3AB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB178u;
label_3ab178:
    // 0x3ab178: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ab178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ab17c:
    // 0x3ab17c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x3ab17cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_3ab180:
    // 0x3ab180: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3ab180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3ab184:
    // 0x3ab184: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ab184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ab188:
    // 0x3ab188: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ab188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ab18c:
    // 0x3ab18c: 0xc0cd4ee  jal         func_3353B8
label_3ab190:
    if (ctx->pc == 0x3AB190u) {
        ctx->pc = 0x3AB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB18Cu;
        // 0x3ab190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB194u;
        goto label_3ab194;
    }
    ctx->pc = 0x3AB18Cu;
    SET_GPR_U32(ctx, 31, 0x3AB194u);
    ctx->pc = 0x3AB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB18Cu;
    // 0x3ab190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AB18Cu, 0x3AB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB194u;
label_3ab194:
    // 0x3ab194: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3ab194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3ab198:
    // 0x3ab198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ab198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab19c:
    // 0x3ab19c: 0x3463002a  ori         $v1, $v1, 0x2A
    ctx->pc = 0x3ab19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)42);
label_3ab1a0:
    // 0x3ab1a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ab1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ab1a4:
    // 0x3ab1a4: 0xc0e858c  jal         func_3A1630
label_3ab1a8:
    if (ctx->pc == 0x3AB1A8u) {
        ctx->pc = 0x3AB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1A4u;
        // 0x3ab1a8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1ACu;
        goto label_3ab1ac;
    }
    ctx->pc = 0x3AB1A4u;
    SET_GPR_U32(ctx, 31, 0x3AB1ACu);
    ctx->pc = 0x3AB1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB1A4u;
    // 0x3ab1a8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AB1A4u, 0x3AB1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB1ACu;
label_3ab1ac:
    // 0x3ab1ac: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3ab1acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab1b0:
    // 0x3ab1b0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3ab1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3ab1b4:
    // 0x3ab1b4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3ab1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3ab1b8:
    // 0x3ab1b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ab1b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ab1bc:
    // 0x3ab1bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ab1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ab1c0:
    // 0x3ab1c0: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3ab1c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_3ab1c4:
    // 0x3ab1c4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3ab1c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_3ab1c8:
    // 0x3ab1c8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3ab1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_3ab1cc:
    // 0x3ab1cc: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3ab1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3ab1d0:
    // 0x3ab1d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3ab1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ab1d4:
    // 0x3ab1d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ab1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab1d8:
    // 0x3ab1d8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3ab1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3ab1dc:
    // 0x3ab1dc: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3ab1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3ab1e0:
    // 0x3ab1e0: 0xae3000c4  sw          $s0, 0xC4($s1)
    ctx->pc = 0x3ab1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
label_3ab1e4:
    // 0x3ab1e4: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3ab1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3ab1e8:
    // 0x3ab1e8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3ab1e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3ab1ec:
    // 0x3ab1ec: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3ab1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3ab1f0:
    // 0x3ab1f0: 0x60f809  jalr        $v1
label_3ab1f4:
    if (ctx->pc == 0x3AB1F4u) {
        ctx->pc = 0x3AB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1F0u;
        // 0x3ab1f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1F8u;
        goto label_3ab1f8;
    }
    ctx->pc = 0x3AB1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AB1F8u);
        ctx->pc = 0x3AB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1F0u;
        // 0x3ab1f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB1F0u, 0x3AB1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB1F8u;
label_3ab1f8:
    // 0x3ab1f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ab1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ab1fc:
    // 0x3ab1fc: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x3ab1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_3ab200:
    // 0x3ab200: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ab200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ab204:
    // 0x3ab204: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ab204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ab208:
    // 0x3ab208: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ab208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ab20c:
    // 0x3ab20c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x3ab20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_3ab210:
    // 0x3ab210: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ab210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ab214:
    // 0x3ab214: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ab214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ab218:
    // 0x3ab218: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x3ab218u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3ab21c:
    // 0x3ab21c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ab21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab220:
    // 0x3ab220: 0x36620070  ori         $v0, $s3, 0x70
    ctx->pc = 0x3ab220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)112);
label_3ab224:
    // 0x3ab224: 0x36630040  ori         $v1, $s3, 0x40
    ctx->pc = 0x3ab224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)64);
label_3ab228:
    // 0x3ab228: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3ab228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3ab22c:
    // 0x3ab22c: 0xc0cd518  jal         func_335460
label_3ab230:
    if (ctx->pc == 0x3AB230u) {
        ctx->pc = 0x3AB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB22Cu;
        // 0x3ab230: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB234u;
        goto label_3ab234;
    }
    ctx->pc = 0x3AB22Cu;
    SET_GPR_U32(ctx, 31, 0x3AB234u);
    ctx->pc = 0x3AB230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB22Cu;
    // 0x3ab230: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AB22Cu, 0x3AB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB234u;
label_3ab234:
    // 0x3ab234: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3ab234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab238:
    // 0x3ab238: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3ab238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ab23c:
    // 0x3ab23c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ab23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ab240:
    // 0x3ab240: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ab240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ab244:
    // 0x3ab244: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x3ab244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_3ab248:
    // 0x3ab248: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3ab248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3ab24c:
    // 0x3ab24c: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x3ab24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3ab250:
    // 0x3ab250: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3ab250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3ab254:
    // 0x3ab254: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3ab254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3ab258:
    // 0x3ab258: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ab258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ab25c:
    // 0x3ab25c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ab25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ab260:
    // 0x3ab260: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x3ab260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_3ab264:
    // 0x3ab264: 0x60f809  jalr        $v1
label_3ab268:
    if (ctx->pc == 0x3AB268u) {
        ctx->pc = 0x3AB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB264u;
        // 0x3ab268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB26Cu;
        goto label_3ab26c;
    }
    ctx->pc = 0x3AB264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AB26Cu);
        ctx->pc = 0x3AB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB264u;
        // 0x3ab268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB264u, 0x3AB26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB26Cu;
label_3ab26c:
    // 0x3ab26c: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3ab26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3ab270:
    // 0x3ab270: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x3ab270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61184);
label_3ab274:
    // 0x3ab274: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
label_3ab278:
    if (ctx->pc == 0x3AB278u) {
        ctx->pc = 0x3AB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB274u;
        // 0x3ab278: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB27Cu;
        goto label_3ab27c;
    }
    ctx->pc = 0x3AB274u;
    {
        const bool branch_taken_0x3ab274 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB274u;
        // 0x3ab278: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab274) {
            ctx->pc = 0x3AB290u;
            goto label_3ab290;
        }
    }
    ctx->pc = 0x3AB27Cu;
label_3ab27c:
    // 0x3ab27c: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3ab27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3ab280:
    // 0x3ab280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ab280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ab284:
    // 0x3ab284: 0x3442ef50  ori         $v0, $v0, 0xEF50
    ctx->pc = 0x3ab284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61264);
label_3ab288:
    // 0x3ab288: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ab28c:
    if (ctx->pc == 0x3AB28Cu) {
        ctx->pc = 0x3AB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB288u;
        // 0x3ab28c: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB290u;
        goto label_3ab290;
    }
    ctx->pc = 0x3AB288u;
    {
        const bool branch_taken_0x3ab288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB288u;
        // 0x3ab28c: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab288) {
            ctx->pc = 0x3AB298u;
            goto label_3ab298;
        }
    }
    ctx->pc = 0x3AB290u;
label_3ab290:
    // 0x3ab290: 0x3662008c  ori         $v0, $s3, 0x8C
    ctx->pc = 0x3ab290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)140);
label_3ab294:
    // 0x3ab294: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x3ab294u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_3ab298:
    // 0x3ab298: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3ab298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3ab29c:
    // 0x3ab29c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3ab29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ab2a0:
    // 0x3ab2a0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3ab2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ab2a4:
    // 0x3ab2a4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3ab2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ab2a8:
    // 0x3ab2a8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3ab2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ab2ac:
    // 0x3ab2ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ab2acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ab2b0:
    // 0x3ab2b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ab2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ab2b4:
    // 0x3ab2b4: 0x3e00008  jr          $ra
label_3ab2b8:
    if (ctx->pc == 0x3AB2B8u) {
        ctx->pc = 0x3AB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2B4u;
        // 0x3ab2b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2BCu;
        goto label_3ab2bc;
    }
    ctx->pc = 0x3AB2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2B4u;
        // 0x3ab2b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB2BCu;
label_3ab2bc:
    // 0x3ab2bc: 0x0  nop
    ctx->pc = 0x3ab2bcu;
    // NOP
    ctx->pc = 0x3ab2c0u;
}
