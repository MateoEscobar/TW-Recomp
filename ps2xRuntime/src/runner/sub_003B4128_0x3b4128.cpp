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

// Function: sub_003B4128
// Address: 0x3b4128 - 0x3b42a8
void sub_003B4128_0x3b4128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4128_0x3b4128");
#endif

    switch (ctx->pc) {
        case 0x3b4128u: goto label_3b4128;
        case 0x3b412cu: goto label_3b412c;
        case 0x3b4130u: goto label_3b4130;
        case 0x3b4134u: goto label_3b4134;
        case 0x3b4138u: goto label_3b4138;
        case 0x3b413cu: goto label_3b413c;
        case 0x3b4140u: goto label_3b4140;
        case 0x3b4144u: goto label_3b4144;
        case 0x3b4148u: goto label_3b4148;
        case 0x3b414cu: goto label_3b414c;
        case 0x3b4150u: goto label_3b4150;
        case 0x3b4154u: goto label_3b4154;
        case 0x3b4158u: goto label_3b4158;
        case 0x3b415cu: goto label_3b415c;
        case 0x3b4160u: goto label_3b4160;
        case 0x3b4164u: goto label_3b4164;
        case 0x3b4168u: goto label_3b4168;
        case 0x3b416cu: goto label_3b416c;
        case 0x3b4170u: goto label_3b4170;
        case 0x3b4174u: goto label_3b4174;
        case 0x3b4178u: goto label_3b4178;
        case 0x3b417cu: goto label_3b417c;
        case 0x3b4180u: goto label_3b4180;
        case 0x3b4184u: goto label_3b4184;
        case 0x3b4188u: goto label_3b4188;
        case 0x3b418cu: goto label_3b418c;
        case 0x3b4190u: goto label_3b4190;
        case 0x3b4194u: goto label_3b4194;
        case 0x3b4198u: goto label_3b4198;
        case 0x3b419cu: goto label_3b419c;
        case 0x3b41a0u: goto label_3b41a0;
        case 0x3b41a4u: goto label_3b41a4;
        case 0x3b41a8u: goto label_3b41a8;
        case 0x3b41acu: goto label_3b41ac;
        case 0x3b41b0u: goto label_3b41b0;
        case 0x3b41b4u: goto label_3b41b4;
        case 0x3b41b8u: goto label_3b41b8;
        case 0x3b41bcu: goto label_3b41bc;
        case 0x3b41c0u: goto label_3b41c0;
        case 0x3b41c4u: goto label_3b41c4;
        case 0x3b41c8u: goto label_3b41c8;
        case 0x3b41ccu: goto label_3b41cc;
        case 0x3b41d0u: goto label_3b41d0;
        case 0x3b41d4u: goto label_3b41d4;
        case 0x3b41d8u: goto label_3b41d8;
        case 0x3b41dcu: goto label_3b41dc;
        case 0x3b41e0u: goto label_3b41e0;
        case 0x3b41e4u: goto label_3b41e4;
        case 0x3b41e8u: goto label_3b41e8;
        case 0x3b41ecu: goto label_3b41ec;
        case 0x3b41f0u: goto label_3b41f0;
        case 0x3b41f4u: goto label_3b41f4;
        case 0x3b41f8u: goto label_3b41f8;
        case 0x3b41fcu: goto label_3b41fc;
        case 0x3b4200u: goto label_3b4200;
        case 0x3b4204u: goto label_3b4204;
        case 0x3b4208u: goto label_3b4208;
        case 0x3b420cu: goto label_3b420c;
        case 0x3b4210u: goto label_3b4210;
        case 0x3b4214u: goto label_3b4214;
        case 0x3b4218u: goto label_3b4218;
        case 0x3b421cu: goto label_3b421c;
        case 0x3b4220u: goto label_3b4220;
        case 0x3b4224u: goto label_3b4224;
        case 0x3b4228u: goto label_3b4228;
        case 0x3b422cu: goto label_3b422c;
        case 0x3b4230u: goto label_3b4230;
        case 0x3b4234u: goto label_3b4234;
        case 0x3b4238u: goto label_3b4238;
        case 0x3b423cu: goto label_3b423c;
        case 0x3b4240u: goto label_3b4240;
        case 0x3b4244u: goto label_3b4244;
        case 0x3b4248u: goto label_3b4248;
        case 0x3b424cu: goto label_3b424c;
        case 0x3b4250u: goto label_3b4250;
        case 0x3b4254u: goto label_3b4254;
        case 0x3b4258u: goto label_3b4258;
        case 0x3b425cu: goto label_3b425c;
        case 0x3b4260u: goto label_3b4260;
        case 0x3b4264u: goto label_3b4264;
        case 0x3b4268u: goto label_3b4268;
        case 0x3b426cu: goto label_3b426c;
        case 0x3b4270u: goto label_3b4270;
        case 0x3b4274u: goto label_3b4274;
        case 0x3b4278u: goto label_3b4278;
        case 0x3b427cu: goto label_3b427c;
        case 0x3b4280u: goto label_3b4280;
        case 0x3b4284u: goto label_3b4284;
        case 0x3b4288u: goto label_3b4288;
        case 0x3b428cu: goto label_3b428c;
        case 0x3b4290u: goto label_3b4290;
        case 0x3b4294u: goto label_3b4294;
        case 0x3b4298u: goto label_3b4298;
        case 0x3b429cu: goto label_3b429c;
        case 0x3b42a0u: goto label_3b42a0;
        case 0x3b42a4u: goto label_3b42a4;
        default: break;
    }

    ctx->pc = 0x3b4128u;

label_3b4128:
    // 0x3b4128: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b4128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b412c:
    // 0x3b412c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3b412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3b4130:
    // 0x3b4130: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3b4130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3b4134:
    // 0x3b4134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4138:
    // 0x3b4138: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3b4138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3b413c:
    // 0x3b413c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b413cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b4140:
    // 0x3b4140: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b4140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3b4144:
    // 0x3b4144: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b4144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b4148:
    // 0x3b4148: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3b4148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3b414c:
    // 0x3b414c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b4150:
    // 0x3b4150: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b4150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b4154:
    // 0x3b4154: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b4154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b4158:
    // 0x3b4158: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b4158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b415c:
    // 0x3b415c: 0x40f809  jalr        $v0
label_3b4160:
    if (ctx->pc == 0x3B4160u) {
        ctx->pc = 0x3B4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B415Cu;
        // 0x3b4160: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4164u;
        goto label_3b4164;
    }
    ctx->pc = 0x3B415Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4164u);
        ctx->pc = 0x3B4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B415Cu;
        // 0x3b4160: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B415Cu, 0x3B4164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4164u;
label_3b4164:
    // 0x3b4164: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b4164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4168:
    // 0x3b4168: 0xc0ea146  jal         func_3A8518
label_3b416c:
    if (ctx->pc == 0x3B416Cu) {
        ctx->pc = 0x3B416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4168u;
        // 0x3b416c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4170u;
        goto label_3b4170;
    }
    ctx->pc = 0x3B4168u;
    SET_GPR_U32(ctx, 31, 0x3B4170u);
    ctx->pc = 0x3B416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4168u;
    // 0x3b416c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B4168u, 0x3B4170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4170u;
label_3b4170:
    // 0x3b4170: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b4170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4174:
    // 0x3b4174: 0xc0ea146  jal         func_3A8518
label_3b4178:
    if (ctx->pc == 0x3B4178u) {
        ctx->pc = 0x3B4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4174u;
        // 0x3b4178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B417Cu;
        goto label_3b417c;
    }
    ctx->pc = 0x3B4174u;
    SET_GPR_U32(ctx, 31, 0x3B417Cu);
    ctx->pc = 0x3B4178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4174u;
    // 0x3b4178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B4174u, 0x3B417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B417Cu;
label_3b417c:
    // 0x3b417c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b417cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4180:
    // 0x3b4180: 0xc0ea146  jal         func_3A8518
label_3b4184:
    if (ctx->pc == 0x3B4184u) {
        ctx->pc = 0x3B4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4180u;
        // 0x3b4184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4188u;
        goto label_3b4188;
    }
    ctx->pc = 0x3B4180u;
    SET_GPR_U32(ctx, 31, 0x3B4188u);
    ctx->pc = 0x3B4184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4180u;
    // 0x3b4184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B4180u, 0x3B4188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4188u;
label_3b4188:
    // 0x3b4188: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b4188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b418c:
    // 0x3b418c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b418cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4190:
    // 0x3b4190: 0xc0ea12a  jal         func_3A84A8
label_3b4194:
    if (ctx->pc == 0x3B4194u) {
        ctx->pc = 0x3B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4190u;
        // 0x3b4194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4198u;
        goto label_3b4198;
    }
    ctx->pc = 0x3B4190u;
    SET_GPR_U32(ctx, 31, 0x3B4198u);
    ctx->pc = 0x3B4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4190u;
    // 0x3b4194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B4190u, 0x3B4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4198u;
label_3b4198:
    // 0x3b4198: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b4198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b419c:
    // 0x3b419c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b419cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b41a0:
    // 0x3b41a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b41a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b41a4:
    // 0x3b41a4: 0xc0ea12a  jal         func_3A84A8
label_3b41a8:
    if (ctx->pc == 0x3B41A8u) {
        ctx->pc = 0x3B41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41A4u;
        // 0x3b41a8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B41ACu;
        goto label_3b41ac;
    }
    ctx->pc = 0x3B41A4u;
    SET_GPR_U32(ctx, 31, 0x3B41ACu);
    ctx->pc = 0x3B41A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B41A4u;
    // 0x3b41a8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B41A4u, 0x3B41ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B41ACu;
label_3b41ac:
    // 0x3b41ac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b41acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b41b0:
    // 0x3b41b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b41b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b41b4:
    // 0x3b41b4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3b41b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3b41b8:
    // 0x3b41b8: 0xc0e858c  jal         func_3A1630
label_3b41bc:
    if (ctx->pc == 0x3B41BCu) {
        ctx->pc = 0x3B41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41B8u;
        // 0x3b41bc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B41C0u;
        goto label_3b41c0;
    }
    ctx->pc = 0x3B41B8u;
    SET_GPR_U32(ctx, 31, 0x3B41C0u);
    ctx->pc = 0x3B41BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B41B8u;
    // 0x3b41bc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B41B8u, 0x3B41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B41C0u;
label_3b41c0:
    // 0x3b41c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b41c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b41c4:
    // 0x3b41c4: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x3b41c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3b41c8:
    // 0x3b41c8: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x3b41c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b41cc:
    // 0x3b41cc: 0x3c05fe41  lui         $a1, 0xFE41
    ctx->pc = 0x3b41ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65089 << 16));
label_3b41d0:
    // 0x3b41d0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3b41d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3b41d4:
    // 0x3b41d4: 0x34a54c9d  ori         $a1, $a1, 0x4C9D
    ctx->pc = 0x3b41d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19613);
label_3b41d8:
    // 0x3b41d8: 0x7e060020  sq          $a2, 0x20($s0)
    ctx->pc = 0x3b41d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 6));
label_3b41dc:
    // 0x3b41dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b41dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b41e0:
    // 0x3b41e0: 0xc0e9132  jal         func_3A44C8
label_3b41e4:
    if (ctx->pc == 0x3B41E4u) {
        ctx->pc = 0x3B41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41E0u;
        // 0x3b41e4: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B41E8u;
        goto label_3b41e8;
    }
    ctx->pc = 0x3B41E0u;
    SET_GPR_U32(ctx, 31, 0x3B41E8u);
    ctx->pc = 0x3B41E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B41E0u;
    // 0x3b41e4: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B41E0u, 0x3B41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B41E8u;
label_3b41e8:
    // 0x3b41e8: 0xae1500e0  sw          $s5, 0xE0($s0)
    ctx->pc = 0x3b41e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 21));
label_3b41ec:
    // 0x3b41ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b41ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b41f0:
    // 0x3b41f0: 0xae1200d8  sw          $s2, 0xD8($s0)
    ctx->pc = 0x3b41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 18));
label_3b41f4:
    // 0x3b41f4: 0xae1300dc  sw          $s3, 0xDC($s0)
    ctx->pc = 0x3b41f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 19));
label_3b41f8:
    // 0x3b41f8: 0xc0e91da  jal         func_3A4768
label_3b41fc:
    if (ctx->pc == 0x3B41FCu) {
        ctx->pc = 0x3B41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41F8u;
        // 0x3b41fc: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4200u;
        goto label_3b4200;
    }
    ctx->pc = 0x3B41F8u;
    SET_GPR_U32(ctx, 31, 0x3B4200u);
    ctx->pc = 0x3B41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B41F8u;
    // 0x3b41fc: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B41F8u, 0x3B4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4200u;
label_3b4200:
    // 0x3b4200: 0xc0e91da  jal         func_3A4768
label_3b4204:
    if (ctx->pc == 0x3B4204u) {
        ctx->pc = 0x3B4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4200u;
        // 0x3b4204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4208u;
        goto label_3b4208;
    }
    ctx->pc = 0x3B4200u;
    SET_GPR_U32(ctx, 31, 0x3B4208u);
    ctx->pc = 0x3B4204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4200u;
    // 0x3b4204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B4200u, 0x3B4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4208u;
label_3b4208:
    // 0x3b4208: 0xc0e927a  jal         func_3A49E8
label_3b420c:
    if (ctx->pc == 0x3B420Cu) {
        ctx->pc = 0x3B420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4208u;
        // 0x3b420c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4210u;
        goto label_3b4210;
    }
    ctx->pc = 0x3B4208u;
    SET_GPR_U32(ctx, 31, 0x3B4210u);
    ctx->pc = 0x3B420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4208u;
    // 0x3b420c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3B4208u, 0x3B4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4210u;
label_3b4210:
    // 0x3b4210: 0xc0e927a  jal         func_3A49E8
label_3b4214:
    if (ctx->pc == 0x3B4214u) {
        ctx->pc = 0x3B4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4210u;
        // 0x3b4214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4218u;
        goto label_3b4218;
    }
    ctx->pc = 0x3B4210u;
    SET_GPR_U32(ctx, 31, 0x3B4218u);
    ctx->pc = 0x3B4214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4210u;
    // 0x3b4214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3B4210u, 0x3B4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4218u;
label_3b4218:
    // 0x3b4218: 0xc0e92cc  jal         func_3A4B30
label_3b421c:
    if (ctx->pc == 0x3B421Cu) {
        ctx->pc = 0x3B421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4218u;
        // 0x3b421c: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4220u;
        goto label_3b4220;
    }
    ctx->pc = 0x3B4218u;
    SET_GPR_U32(ctx, 31, 0x3B4220u);
    ctx->pc = 0x3B421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4218u;
    // 0x3b421c: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B30u, 0x3B4218u, 0x3B4220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4220u;
label_3b4220:
    // 0x3b4220: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3b4220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3b4224:
    // 0x3b4224: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3b4224u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3b4228:
    // 0x3b4228: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3b4228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_3b422c:
    // 0x3b422c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b4230:
    // 0x3b4230: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3b4230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_3b4234:
    // 0x3b4234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4238:
    // 0x3b4238: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3b4238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_3b423c:
    // 0x3b423c: 0xc0e9bb2  jal         func_3A6EC8
label_3b4240:
    if (ctx->pc == 0x3B4240u) {
        ctx->pc = 0x3B4240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B423Cu;
        // 0x3b4240: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4244u;
        goto label_3b4244;
    }
    ctx->pc = 0x3B423Cu;
    SET_GPR_U32(ctx, 31, 0x3B4244u);
    ctx->pc = 0x3B4240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B423Cu;
    // 0x3b4240: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B423Cu, 0x3B4244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4244u;
label_3b4244:
    // 0x3b4244: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3b4244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3b4248:
    // 0x3b4248: 0xc0e9290  jal         func_3A4A40
label_3b424c:
    if (ctx->pc == 0x3B424Cu) {
        ctx->pc = 0x3B424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4248u;
        // 0x3b424c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4250u;
        goto label_3b4250;
    }
    ctx->pc = 0x3B4248u;
    SET_GPR_U32(ctx, 31, 0x3B4250u);
    ctx->pc = 0x3B424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4248u;
    // 0x3b424c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B4248u, 0x3B4250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4250u;
label_3b4250:
    // 0x3b4250: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b4250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b4254:
    // 0x3b4254: 0xc0e9290  jal         func_3A4A40
label_3b4258:
    if (ctx->pc == 0x3B4258u) {
        ctx->pc = 0x3B4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4254u;
        // 0x3b4258: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B425Cu;
        goto label_3b425c;
    }
    ctx->pc = 0x3B4254u;
    SET_GPR_U32(ctx, 31, 0x3B425Cu);
    ctx->pc = 0x3B4258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4254u;
    // 0x3b4258: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B4254u, 0x3B425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B425Cu;
label_3b425c:
    // 0x3b425c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4260:
    // 0x3b4260: 0xc0e8dee  jal         func_3A37B8
label_3b4264:
    if (ctx->pc == 0x3B4264u) {
        ctx->pc = 0x3B4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4260u;
        // 0x3b4264: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4268u;
        goto label_3b4268;
    }
    ctx->pc = 0x3B4260u;
    SET_GPR_U32(ctx, 31, 0x3B4268u);
    ctx->pc = 0x3B4264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4260u;
    // 0x3b4264: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B4260u, 0x3B4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4268u;
label_3b4268:
    // 0x3b4268: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b4268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b426c:
    // 0x3b426c: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3b426cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3b4270:
    // 0x3b4270: 0xc0e92a6  jal         func_3A4A98
label_3b4274:
    if (ctx->pc == 0x3B4274u) {
        ctx->pc = 0x3B4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4270u;
        // 0x3b4274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4278u;
        goto label_3b4278;
    }
    ctx->pc = 0x3B4270u;
    SET_GPR_U32(ctx, 31, 0x3B4278u);
    ctx->pc = 0x3B4274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4270u;
    // 0x3b4274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B4270u, 0x3B4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4278u;
label_3b4278:
    // 0x3b4278: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b4278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b427c:
    // 0x3b427c: 0xc0e92a6  jal         func_3A4A98
label_3b4280:
    if (ctx->pc == 0x3B4280u) {
        ctx->pc = 0x3B4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B427Cu;
        // 0x3b4280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4284u;
        goto label_3b4284;
    }
    ctx->pc = 0x3B427Cu;
    SET_GPR_U32(ctx, 31, 0x3B4284u);
    ctx->pc = 0x3B4280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B427Cu;
    // 0x3b4280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B427Cu, 0x3B4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4284u;
label_3b4284:
    // 0x3b4284: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3b4284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4288:
    // 0x3b4288: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3b4288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b428c:
    // 0x3b428c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3b428cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b4290:
    // 0x3b4290: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b4290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b4294:
    // 0x3b4294: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b4294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b4298:
    // 0x3b4298: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3b4298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b429c:
    // 0x3b429c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b429cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b42a0:
    // 0x3b42a0: 0x3e00008  jr          $ra
label_3b42a4:
    if (ctx->pc == 0x3B42A4u) {
        ctx->pc = 0x3B42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42A0u;
        // 0x3b42a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B42A8u;
        goto label_fallthrough_0x3b42a0;
    }
    ctx->pc = 0x3B42A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B42A0u;
        // 0x3b42a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B42A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b42a0:
    ctx->pc = 0x3B42A8u;
}
