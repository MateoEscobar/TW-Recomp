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

// Function: sub_003C0108
// Address: 0x3c0108 - 0x3c0330
void sub_003C0108_0x3c0108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0108_0x3c0108");
#endif

    switch (ctx->pc) {
        case 0x3c0108u: goto label_3c0108;
        case 0x3c010cu: goto label_3c010c;
        case 0x3c0110u: goto label_3c0110;
        case 0x3c0114u: goto label_3c0114;
        case 0x3c0118u: goto label_3c0118;
        case 0x3c011cu: goto label_3c011c;
        case 0x3c0120u: goto label_3c0120;
        case 0x3c0124u: goto label_3c0124;
        case 0x3c0128u: goto label_3c0128;
        case 0x3c012cu: goto label_3c012c;
        case 0x3c0130u: goto label_3c0130;
        case 0x3c0134u: goto label_3c0134;
        case 0x3c0138u: goto label_3c0138;
        case 0x3c013cu: goto label_3c013c;
        case 0x3c0140u: goto label_3c0140;
        case 0x3c0144u: goto label_3c0144;
        case 0x3c0148u: goto label_3c0148;
        case 0x3c014cu: goto label_3c014c;
        case 0x3c0150u: goto label_3c0150;
        case 0x3c0154u: goto label_3c0154;
        case 0x3c0158u: goto label_3c0158;
        case 0x3c015cu: goto label_3c015c;
        case 0x3c0160u: goto label_3c0160;
        case 0x3c0164u: goto label_3c0164;
        case 0x3c0168u: goto label_3c0168;
        case 0x3c016cu: goto label_3c016c;
        case 0x3c0170u: goto label_3c0170;
        case 0x3c0174u: goto label_3c0174;
        case 0x3c0178u: goto label_3c0178;
        case 0x3c017cu: goto label_3c017c;
        case 0x3c0180u: goto label_3c0180;
        case 0x3c0184u: goto label_3c0184;
        case 0x3c0188u: goto label_3c0188;
        case 0x3c018cu: goto label_3c018c;
        case 0x3c0190u: goto label_3c0190;
        case 0x3c0194u: goto label_3c0194;
        case 0x3c0198u: goto label_3c0198;
        case 0x3c019cu: goto label_3c019c;
        case 0x3c01a0u: goto label_3c01a0;
        case 0x3c01a4u: goto label_3c01a4;
        case 0x3c01a8u: goto label_3c01a8;
        case 0x3c01acu: goto label_3c01ac;
        case 0x3c01b0u: goto label_3c01b0;
        case 0x3c01b4u: goto label_3c01b4;
        case 0x3c01b8u: goto label_3c01b8;
        case 0x3c01bcu: goto label_3c01bc;
        case 0x3c01c0u: goto label_3c01c0;
        case 0x3c01c4u: goto label_3c01c4;
        case 0x3c01c8u: goto label_3c01c8;
        case 0x3c01ccu: goto label_3c01cc;
        case 0x3c01d0u: goto label_3c01d0;
        case 0x3c01d4u: goto label_3c01d4;
        case 0x3c01d8u: goto label_3c01d8;
        case 0x3c01dcu: goto label_3c01dc;
        case 0x3c01e0u: goto label_3c01e0;
        case 0x3c01e4u: goto label_3c01e4;
        case 0x3c01e8u: goto label_3c01e8;
        case 0x3c01ecu: goto label_3c01ec;
        case 0x3c01f0u: goto label_3c01f0;
        case 0x3c01f4u: goto label_3c01f4;
        case 0x3c01f8u: goto label_3c01f8;
        case 0x3c01fcu: goto label_3c01fc;
        case 0x3c0200u: goto label_3c0200;
        case 0x3c0204u: goto label_3c0204;
        case 0x3c0208u: goto label_3c0208;
        case 0x3c020cu: goto label_3c020c;
        case 0x3c0210u: goto label_3c0210;
        case 0x3c0214u: goto label_3c0214;
        case 0x3c0218u: goto label_3c0218;
        case 0x3c021cu: goto label_3c021c;
        case 0x3c0220u: goto label_3c0220;
        case 0x3c0224u: goto label_3c0224;
        case 0x3c0228u: goto label_3c0228;
        case 0x3c022cu: goto label_3c022c;
        case 0x3c0230u: goto label_3c0230;
        case 0x3c0234u: goto label_3c0234;
        case 0x3c0238u: goto label_3c0238;
        case 0x3c023cu: goto label_3c023c;
        case 0x3c0240u: goto label_3c0240;
        case 0x3c0244u: goto label_3c0244;
        case 0x3c0248u: goto label_3c0248;
        case 0x3c024cu: goto label_3c024c;
        case 0x3c0250u: goto label_3c0250;
        case 0x3c0254u: goto label_3c0254;
        case 0x3c0258u: goto label_3c0258;
        case 0x3c025cu: goto label_3c025c;
        case 0x3c0260u: goto label_3c0260;
        case 0x3c0264u: goto label_3c0264;
        case 0x3c0268u: goto label_3c0268;
        case 0x3c026cu: goto label_3c026c;
        case 0x3c0270u: goto label_3c0270;
        case 0x3c0274u: goto label_3c0274;
        case 0x3c0278u: goto label_3c0278;
        case 0x3c027cu: goto label_3c027c;
        case 0x3c0280u: goto label_3c0280;
        case 0x3c0284u: goto label_3c0284;
        case 0x3c0288u: goto label_3c0288;
        case 0x3c028cu: goto label_3c028c;
        case 0x3c0290u: goto label_3c0290;
        case 0x3c0294u: goto label_3c0294;
        case 0x3c0298u: goto label_3c0298;
        case 0x3c029cu: goto label_3c029c;
        case 0x3c02a0u: goto label_3c02a0;
        case 0x3c02a4u: goto label_3c02a4;
        case 0x3c02a8u: goto label_3c02a8;
        case 0x3c02acu: goto label_3c02ac;
        case 0x3c02b0u: goto label_3c02b0;
        case 0x3c02b4u: goto label_3c02b4;
        case 0x3c02b8u: goto label_3c02b8;
        case 0x3c02bcu: goto label_3c02bc;
        case 0x3c02c0u: goto label_3c02c0;
        case 0x3c02c4u: goto label_3c02c4;
        case 0x3c02c8u: goto label_3c02c8;
        case 0x3c02ccu: goto label_3c02cc;
        case 0x3c02d0u: goto label_3c02d0;
        case 0x3c02d4u: goto label_3c02d4;
        case 0x3c02d8u: goto label_3c02d8;
        case 0x3c02dcu: goto label_3c02dc;
        case 0x3c02e0u: goto label_3c02e0;
        case 0x3c02e4u: goto label_3c02e4;
        case 0x3c02e8u: goto label_3c02e8;
        case 0x3c02ecu: goto label_3c02ec;
        case 0x3c02f0u: goto label_3c02f0;
        case 0x3c02f4u: goto label_3c02f4;
        case 0x3c02f8u: goto label_3c02f8;
        case 0x3c02fcu: goto label_3c02fc;
        case 0x3c0300u: goto label_3c0300;
        case 0x3c0304u: goto label_3c0304;
        case 0x3c0308u: goto label_3c0308;
        case 0x3c030cu: goto label_3c030c;
        case 0x3c0310u: goto label_3c0310;
        case 0x3c0314u: goto label_3c0314;
        case 0x3c0318u: goto label_3c0318;
        case 0x3c031cu: goto label_3c031c;
        case 0x3c0320u: goto label_3c0320;
        case 0x3c0324u: goto label_3c0324;
        case 0x3c0328u: goto label_3c0328;
        case 0x3c032cu: goto label_3c032c;
        default: break;
    }

    ctx->pc = 0x3c0108u;

label_3c0108:
    // 0x3c0108: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3c0108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3c010c:
    // 0x3c010c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3c010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3c0110:
    // 0x3c0110: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3c0110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3c0114:
    // 0x3c0114: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c0114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c0118:
    // 0x3c0118: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3c0118u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c011c:
    // 0x3c011c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3c011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3c0120:
    // 0x3c0120: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3c0120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3c0124:
    // 0x3c0124: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3c0124u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c0128:
    // 0x3c0128: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3c0128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3c012c:
    // 0x3c012c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c0130:
    // 0x3c0130: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3c0130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3c0134:
    // 0x3c0134: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c0134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3c0138:
    // 0x3c0138: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c0138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c013c:
    // 0x3c013c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3c013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3c0140:
    // 0x3c0140: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c0140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c0144:
    // 0x3c0144: 0xc0ea146  jal         func_3A8518
label_3c0148:
    if (ctx->pc == 0x3C0148u) {
        ctx->pc = 0x3C0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0144u;
        // 0x3c0148: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C014Cu;
        goto label_3c014c;
    }
    ctx->pc = 0x3C0144u;
    SET_GPR_U32(ctx, 31, 0x3C014Cu);
    ctx->pc = 0x3C0148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0144u;
    // 0x3c0148: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C0144u, 0x3C014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C014Cu;
label_3c014c:
    // 0x3c014c: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3c014cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3c0150:
    // 0x3c0150: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c0150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0154:
    // 0x3c0154: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c0154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0158:
    // 0x3c0158: 0xc0ea12a  jal         func_3A84A8
label_3c015c:
    if (ctx->pc == 0x3C015Cu) {
        ctx->pc = 0x3C015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0158u;
        // 0x3c015c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0160u;
        goto label_3c0160;
    }
    ctx->pc = 0x3C0158u;
    SET_GPR_U32(ctx, 31, 0x3C0160u);
    ctx->pc = 0x3C015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0158u;
    // 0x3c015c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C0158u, 0x3C0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0160u;
label_3c0160:
    // 0x3c0160: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0164:
    // 0x3c0164: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c0164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0168:
    // 0x3c0168: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c0168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c016c:
    // 0x3c016c: 0xc0ea12a  jal         func_3A84A8
label_3c0170:
    if (ctx->pc == 0x3C0170u) {
        ctx->pc = 0x3C0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C016Cu;
        // 0x3c0170: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0174u;
        goto label_3c0174;
    }
    ctx->pc = 0x3C016Cu;
    SET_GPR_U32(ctx, 31, 0x3C0174u);
    ctx->pc = 0x3C0170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C016Cu;
    // 0x3c0170: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C016Cu, 0x3C0174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0174u;
label_3c0174:
    // 0x3c0174: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0178:
    // 0x3c0178: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c0178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c017c:
    // 0x3c017c: 0xc0ea146  jal         func_3A8518
label_3c0180:
    if (ctx->pc == 0x3C0180u) {
        ctx->pc = 0x3C0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C017Cu;
        // 0x3c0180: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0184u;
        goto label_3c0184;
    }
    ctx->pc = 0x3C017Cu;
    SET_GPR_U32(ctx, 31, 0x3C0184u);
    ctx->pc = 0x3C0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C017Cu;
    // 0x3c0180: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C017Cu, 0x3C0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0184u;
label_3c0184:
    // 0x3c0184: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c0184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0188:
    // 0x3c0188: 0xc0ea14c  jal         func_3A8530
label_3c018c:
    if (ctx->pc == 0x3C018Cu) {
        ctx->pc = 0x3C018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0188u;
        // 0x3c018c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0190u;
        goto label_3c0190;
    }
    ctx->pc = 0x3C0188u;
    SET_GPR_U32(ctx, 31, 0x3C0190u);
    ctx->pc = 0x3C018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0188u;
    // 0x3c018c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C0188u, 0x3C0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0190u;
label_3c0190:
    // 0x3c0190: 0xc08a61a  jal         func_229868
label_3c0194:
    if (ctx->pc == 0x3C0194u) {
        ctx->pc = 0x3C0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0190u;
        // 0x3c0194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0198u;
        goto label_3c0198;
    }
    ctx->pc = 0x3C0190u;
    SET_GPR_U32(ctx, 31, 0x3C0198u);
    ctx->pc = 0x3C0194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0190u;
    // 0x3c0194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3C0190u, 0x3C0198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0198u;
label_3c0198:
    // 0x3c0198: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c0198u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c019c:
    // 0x3c019c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c01a0:
    // 0x3c01a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3c01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c01a4:
    // 0x3c01a4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3c01a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3c01a8:
    // 0x3c01a8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3c01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3c01ac:
    // 0x3c01ac: 0x60f809  jalr        $v1
label_3c01b0:
    if (ctx->pc == 0x3C01B0u) {
        ctx->pc = 0x3C01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01ACu;
        // 0x3c01b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C01B4u;
        goto label_3c01b4;
    }
    ctx->pc = 0x3C01ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C01B4u);
        ctx->pc = 0x3C01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01ACu;
        // 0x3c01b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C01ACu, 0x3C01B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C01B4u;
label_3c01b4:
    // 0x3c01b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3c01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c01b8:
    // 0x3c01b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c01b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c01bc:
    // 0x3c01bc: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3c01bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3c01c0:
    // 0x3c01c0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3c01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3c01c4:
    // 0x3c01c4: 0x60f809  jalr        $v1
label_3c01c8:
    if (ctx->pc == 0x3C01C8u) {
        ctx->pc = 0x3C01C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01C4u;
        // 0x3c01c8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C01CCu;
        goto label_3c01cc;
    }
    ctx->pc = 0x3C01C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C01CCu);
        ctx->pc = 0x3C01C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01C4u;
        // 0x3c01c8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C01C4u, 0x3C01CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C01CCu;
label_3c01cc:
    // 0x3c01cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c01ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c01d0:
    // 0x3c01d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c01d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c01d4:
    // 0x3c01d4: 0xc0e8604  jal         func_3A1810
label_3c01d8:
    if (ctx->pc == 0x3C01D8u) {
        ctx->pc = 0x3C01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01D4u;
        // 0x3c01d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C01DCu;
        goto label_3c01dc;
    }
    ctx->pc = 0x3C01D4u;
    SET_GPR_U32(ctx, 31, 0x3C01DCu);
    ctx->pc = 0x3C01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C01D4u;
    // 0x3c01d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3C01D4u, 0x3C01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C01DCu;
label_3c01dc:
    // 0x3c01dc: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3c01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3c01e0:
    // 0x3c01e0: 0x3c02f9ff  lui         $v0, 0xF9FF
    ctx->pc = 0x3c01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63999 << 16));
label_3c01e4:
    // 0x3c01e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c01e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c01e8:
    // 0x3c01e8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3c01e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_3c01ec:
    // 0x3c01ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c01ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3c01f0:
    // 0x3c01f0: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
label_3c01f4:
    if (ctx->pc == 0x3C01F4u) {
        ctx->pc = 0x3C01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01F0u;
        // 0x3c01f4: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C01F8u;
        goto label_3c01f8;
    }
    ctx->pc = 0x3C01F0u;
    {
        const bool branch_taken_0x3c01f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01F0u;
        // 0x3c01f4: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c01f0) {
            ctx->pc = 0x3C0234u;
            goto label_3c0234;
        }
    }
    ctx->pc = 0x3C01F8u;
label_3c01f8:
    // 0x3c01f8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3c01f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c01fc:
    // 0x3c01fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c01fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0200:
    // 0x3c0200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0204:
    // 0x3c0204: 0xc0e8e5e  jal         func_3A3978
label_3c0208:
    if (ctx->pc == 0x3C0208u) {
        ctx->pc = 0x3C0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0204u;
        // 0x3c0208: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C020Cu;
        goto label_3c020c;
    }
    ctx->pc = 0x3C0204u;
    SET_GPR_U32(ctx, 31, 0x3C020Cu);
    ctx->pc = 0x3C0208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0204u;
    // 0x3c0208: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x3C0204u, 0x3C020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C020Cu;
label_3c020c:
    // 0x3c020c: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x3c020cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3c0210:
    // 0x3c0210: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0214:
    // 0x3c0214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0218:
    // 0x3c0218: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c0218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c021c:
    // 0x3c021c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3c021cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3c0220:
    // 0x3c0220: 0xc0e8e5e  jal         func_3A3978
label_3c0224:
    if (ctx->pc == 0x3C0224u) {
        ctx->pc = 0x3C0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0220u;
        // 0x3c0224: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0228u;
        goto label_3c0228;
    }
    ctx->pc = 0x3C0220u;
    SET_GPR_U32(ctx, 31, 0x3C0228u);
    ctx->pc = 0x3C0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0220u;
    // 0x3c0224: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x3C0220u, 0x3C0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0228u;
label_3c0228:
    // 0x3c0228: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c022c:
    // 0x3c022c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3c0230:
    if (ctx->pc == 0x3C0230u) {
        ctx->pc = 0x3C0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C022Cu;
        // 0x3c0230: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0234u;
        goto label_3c0234;
    }
    ctx->pc = 0x3C022Cu;
    {
        const bool branch_taken_0x3c022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C022Cu;
        // 0x3c0230: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c022c) {
            ctx->pc = 0x3C0248u;
            goto label_3c0248;
        }
    }
    ctx->pc = 0x3C0234u;
label_3c0234:
    // 0x3c0234: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c0234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c0238:
    // 0x3c0238: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3c0238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c023c:
    // 0x3c023c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c023cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c0240:
    // 0x3c0240: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x3c0240u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_3c0244:
    // 0x3c0244: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x3c0244u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
label_3c0248:
    // 0x3c0248: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c0248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c024c:
    // 0x3c024c: 0xc0ea176  jal         func_3A85D8
label_3c0250:
    if (ctx->pc == 0x3C0250u) {
        ctx->pc = 0x3C0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C024Cu;
        // 0x3c0250: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0254u;
        goto label_3c0254;
    }
    ctx->pc = 0x3C024Cu;
    SET_GPR_U32(ctx, 31, 0x3C0254u);
    ctx->pc = 0x3C0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C024Cu;
    // 0x3c0250: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3C024Cu, 0x3C0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0254u;
label_3c0254:
    // 0x3c0254: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3c0254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c0258:
    // 0x3c0258: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c0258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c025c:
    // 0x3c025c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c0260:
    // 0x3c0260: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3c0260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3c0264:
    // 0x3c0264: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3c0264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3c0268:
    // 0x3c0268: 0x40f809  jalr        $v0
label_3c026c:
    if (ctx->pc == 0x3C026Cu) {
        ctx->pc = 0x3C026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0268u;
        // 0x3c026c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0270u;
        goto label_3c0270;
    }
    ctx->pc = 0x3C0268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0270u);
        ctx->pc = 0x3C026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0268u;
        // 0x3c026c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0268u, 0x3C0270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0270u;
label_3c0270:
    // 0x3c0270: 0x26e316c0  addiu       $v1, $s7, 0x16C0
    ctx->pc = 0x3c0270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5824));
label_3c0274:
    // 0x3c0274: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c0274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c0278:
    // 0x3c0278: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3c0278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3c027c:
    // 0x3c027c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0280:
    // 0x3c0280: 0xc0e8e26  jal         func_3A3898
label_3c0284:
    if (ctx->pc == 0x3C0284u) {
        ctx->pc = 0x3C0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0280u;
        // 0x3c0284: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0288u;
        goto label_3c0288;
    }
    ctx->pc = 0x3C0280u;
    SET_GPR_U32(ctx, 31, 0x3C0288u);
    ctx->pc = 0x3C0284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0280u;
    // 0x3c0284: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3C0280u, 0x3C0288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0288u;
label_3c0288:
    // 0x3c0288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c0288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c028c:
    // 0x3c028c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c028cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0290:
    // 0x3c0290: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c0290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c0294:
    // 0x3c0294: 0xc0ea164  jal         func_3A8590
label_3c0298:
    if (ctx->pc == 0x3C0298u) {
        ctx->pc = 0x3C0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0294u;
        // 0x3c0298: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C029Cu;
        goto label_3c029c;
    }
    ctx->pc = 0x3C0294u;
    SET_GPR_U32(ctx, 31, 0x3C029Cu);
    ctx->pc = 0x3C0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0294u;
    // 0x3c0298: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3C0294u, 0x3C029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C029Cu;
label_3c029c:
    // 0x3c029c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c029cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c02a0:
    // 0x3c02a0: 0xc0ea158  jal         func_3A8560
label_3c02a4:
    if (ctx->pc == 0x3C02A4u) {
        ctx->pc = 0x3C02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02A0u;
        // 0x3c02a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C02A8u;
        goto label_3c02a8;
    }
    ctx->pc = 0x3C02A0u;
    SET_GPR_U32(ctx, 31, 0x3C02A8u);
    ctx->pc = 0x3C02A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C02A0u;
    // 0x3c02a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3C02A0u, 0x3C02A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C02A8u;
label_3c02a8:
    // 0x3c02a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c02a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c02ac:
    // 0x3c02ac: 0xc0e8dee  jal         func_3A37B8
label_3c02b0:
    if (ctx->pc == 0x3C02B0u) {
        ctx->pc = 0x3C02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02ACu;
        // 0x3c02b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C02B4u;
        goto label_3c02b4;
    }
    ctx->pc = 0x3C02ACu;
    SET_GPR_U32(ctx, 31, 0x3C02B4u);
    ctx->pc = 0x3C02B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C02ACu;
    // 0x3c02b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3C02ACu, 0x3C02B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C02B4u;
label_3c02b4:
    // 0x3c02b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c02b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c02b8:
    // 0x3c02b8: 0xc0ea16a  jal         func_3A85A8
label_3c02bc:
    if (ctx->pc == 0x3C02BCu) {
        ctx->pc = 0x3C02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02B8u;
        // 0x3c02bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C02C0u;
        goto label_3c02c0;
    }
    ctx->pc = 0x3C02B8u;
    SET_GPR_U32(ctx, 31, 0x3C02C0u);
    ctx->pc = 0x3C02BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C02B8u;
    // 0x3c02bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3C02B8u, 0x3C02C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C02C0u;
label_3c02c0:
    // 0x3c02c0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3c02c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c02c4:
    // 0x3c02c4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3c02c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3c02c8:
    // 0x3c02c8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c02c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c02cc:
    // 0x3c02cc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3c02ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3c02d0:
    // 0x3c02d0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3c02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3c02d4:
    // 0x3c02d4: 0x40f809  jalr        $v0
label_3c02d8:
    if (ctx->pc == 0x3C02D8u) {
        ctx->pc = 0x3C02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02D4u;
        // 0x3c02d8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C02DCu;
        goto label_3c02dc;
    }
    ctx->pc = 0x3C02D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C02DCu);
        ctx->pc = 0x3C02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02D4u;
        // 0x3c02d8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C02D4u, 0x3C02DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C02DCu;
label_3c02dc:
    // 0x3c02dc: 0x8ec7001c  lw          $a3, 0x1C($s6)
    ctx->pc = 0x3c02dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_3c02e0:
    // 0x3c02e0: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_3c02e4:
    if (ctx->pc == 0x3C02E4u) {
        ctx->pc = 0x3C02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02E0u;
        // 0x3c02e4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C02E8u;
        goto label_3c02e8;
    }
    ctx->pc = 0x3C02E0u;
    {
        const bool branch_taken_0x3c02e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02E0u;
        // 0x3c02e4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c02e0) {
            ctx->pc = 0x3C0304u;
            goto label_3c0304;
        }
    }
    ctx->pc = 0x3C02E8u;
label_3c02e8:
    // 0x3c02e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c02ec:
    // 0x3c02ec: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3c02ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c02f0:
    // 0x3c02f0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c02f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c02f4:
    // 0x3c02f4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c02f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c02f8:
    // 0x3c02f8: 0x60f809  jalr        $v1
label_3c02fc:
    if (ctx->pc == 0x3C02FCu) {
        ctx->pc = 0x3C02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02F8u;
        // 0x3c02fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0300u;
        goto label_3c0300;
    }
    ctx->pc = 0x3C02F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C0300u);
        ctx->pc = 0x3C02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02F8u;
        // 0x3c02fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C02F8u, 0x3C0300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0300u;
label_3c0300:
    // 0x3c0300: 0xaec0001c  sw          $zero, 0x1C($s6)
    ctx->pc = 0x3c0300u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 0));
label_3c0304:
    // 0x3c0304: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3c0304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c0308:
    // 0x3c0308: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3c0308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c030c:
    // 0x3c030c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3c030cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c0310:
    // 0x3c0310: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3c0310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c0314:
    // 0x3c0314: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3c0314u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c0318:
    // 0x3c0318: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c0318u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c031c:
    // 0x3c031c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3c031cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c0320:
    // 0x3c0320: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3c0320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c0324:
    // 0x3c0324: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c0324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c0328:
    // 0x3c0328: 0x3e00008  jr          $ra
label_3c032c:
    if (ctx->pc == 0x3C032Cu) {
        ctx->pc = 0x3C032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0328u;
        // 0x3c032c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0330u;
        goto label_fallthrough_0x3c0328;
    }
    ctx->pc = 0x3C0328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0328u;
        // 0x3c032c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c0328:
    ctx->pc = 0x3C0330u;
}
