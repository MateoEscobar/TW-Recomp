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

// Function: sub_003D4100
// Address: 0x3d4100 - 0x3d41f8
void sub_003D4100_0x3d4100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4100_0x3d4100");
#endif

    switch (ctx->pc) {
        case 0x3d4100u: goto label_3d4100;
        case 0x3d4104u: goto label_3d4104;
        case 0x3d4108u: goto label_3d4108;
        case 0x3d410cu: goto label_3d410c;
        case 0x3d4110u: goto label_3d4110;
        case 0x3d4114u: goto label_3d4114;
        case 0x3d4118u: goto label_3d4118;
        case 0x3d411cu: goto label_3d411c;
        case 0x3d4120u: goto label_3d4120;
        case 0x3d4124u: goto label_3d4124;
        case 0x3d4128u: goto label_3d4128;
        case 0x3d412cu: goto label_3d412c;
        case 0x3d4130u: goto label_3d4130;
        case 0x3d4134u: goto label_3d4134;
        case 0x3d4138u: goto label_3d4138;
        case 0x3d413cu: goto label_3d413c;
        case 0x3d4140u: goto label_3d4140;
        case 0x3d4144u: goto label_3d4144;
        case 0x3d4148u: goto label_3d4148;
        case 0x3d414cu: goto label_3d414c;
        case 0x3d4150u: goto label_3d4150;
        case 0x3d4154u: goto label_3d4154;
        case 0x3d4158u: goto label_3d4158;
        case 0x3d415cu: goto label_3d415c;
        case 0x3d4160u: goto label_3d4160;
        case 0x3d4164u: goto label_3d4164;
        case 0x3d4168u: goto label_3d4168;
        case 0x3d416cu: goto label_3d416c;
        case 0x3d4170u: goto label_3d4170;
        case 0x3d4174u: goto label_3d4174;
        case 0x3d4178u: goto label_3d4178;
        case 0x3d417cu: goto label_3d417c;
        case 0x3d4180u: goto label_3d4180;
        case 0x3d4184u: goto label_3d4184;
        case 0x3d4188u: goto label_3d4188;
        case 0x3d418cu: goto label_3d418c;
        case 0x3d4190u: goto label_3d4190;
        case 0x3d4194u: goto label_3d4194;
        case 0x3d4198u: goto label_3d4198;
        case 0x3d419cu: goto label_3d419c;
        case 0x3d41a0u: goto label_3d41a0;
        case 0x3d41a4u: goto label_3d41a4;
        case 0x3d41a8u: goto label_3d41a8;
        case 0x3d41acu: goto label_3d41ac;
        case 0x3d41b0u: goto label_3d41b0;
        case 0x3d41b4u: goto label_3d41b4;
        case 0x3d41b8u: goto label_3d41b8;
        case 0x3d41bcu: goto label_3d41bc;
        case 0x3d41c0u: goto label_3d41c0;
        case 0x3d41c4u: goto label_3d41c4;
        case 0x3d41c8u: goto label_3d41c8;
        case 0x3d41ccu: goto label_3d41cc;
        case 0x3d41d0u: goto label_3d41d0;
        case 0x3d41d4u: goto label_3d41d4;
        case 0x3d41d8u: goto label_3d41d8;
        case 0x3d41dcu: goto label_3d41dc;
        case 0x3d41e0u: goto label_3d41e0;
        case 0x3d41e4u: goto label_3d41e4;
        case 0x3d41e8u: goto label_3d41e8;
        case 0x3d41ecu: goto label_3d41ec;
        case 0x3d41f0u: goto label_3d41f0;
        case 0x3d41f4u: goto label_3d41f4;
        default: break;
    }

    ctx->pc = 0x3d4100u;

label_3d4100:
    // 0x3d4100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d4100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d4104:
    // 0x3d4104: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d4104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d4108:
    // 0x3d4108: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d4108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d410c:
    // 0x3d410c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d410cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4110:
    // 0x3d4110: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d4110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d4114:
    // 0x3d4114: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d4114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d4118:
    // 0x3d4118: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d4118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d411c:
    // 0x3d411c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d4120:
    // 0x3d4120: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d4120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d4124:
    // 0x3d4124: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d4124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d4128:
    // 0x3d4128: 0x40f809  jalr        $v0
label_3d412c:
    if (ctx->pc == 0x3D412Cu) {
        ctx->pc = 0x3D412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4128u;
        // 0x3d412c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4130u;
        goto label_3d4130;
    }
    ctx->pc = 0x3D4128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4130u);
        ctx->pc = 0x3D412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4128u;
        // 0x3d412c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4128u, 0x3D4130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4130u;
label_3d4130:
    // 0x3d4130: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d4130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4134:
    // 0x3d4134: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3d4134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d4138:
    // 0x3d4138: 0xc0e858c  jal         func_3A1630
label_3d413c:
    if (ctx->pc == 0x3D413Cu) {
        ctx->pc = 0x3D413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4138u;
        // 0x3d413c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4140u;
        goto label_3d4140;
    }
    ctx->pc = 0x3D4138u;
    SET_GPR_U32(ctx, 31, 0x3D4140u);
    ctx->pc = 0x3D413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4138u;
    // 0x3d413c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D4138u, 0x3D4140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4140u;
label_3d4140:
    // 0x3d4140: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x3d4140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_3d4144:
    // 0x3d4144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4148:
    // 0x3d4148: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x3d4148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_3d414c:
    // 0x3d414c: 0xc0ea14c  jal         func_3A8530
label_3d4150:
    if (ctx->pc == 0x3D4150u) {
        ctx->pc = 0x3D4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D414Cu;
        // 0x3d4150: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4154u;
        goto label_3d4154;
    }
    ctx->pc = 0x3D414Cu;
    SET_GPR_U32(ctx, 31, 0x3D4154u);
    ctx->pc = 0x3D4150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D414Cu;
    // 0x3d4150: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D414Cu, 0x3D4154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4154u;
label_3d4154:
    // 0x3d4154: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d4154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d4158:
    // 0x3d4158: 0xc0ea12a  jal         func_3A84A8
label_3d415c:
    if (ctx->pc == 0x3D415Cu) {
        ctx->pc = 0x3D415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4158u;
        // 0x3d415c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4160u;
        goto label_3d4160;
    }
    ctx->pc = 0x3D4158u;
    SET_GPR_U32(ctx, 31, 0x3D4160u);
    ctx->pc = 0x3D415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4158u;
    // 0x3d415c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4158u, 0x3D4160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4160u;
label_3d4160:
    // 0x3d4160: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d4160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4164:
    // 0x3d4164: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d4164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d4168:
    // 0x3d4168: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d4168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d416c:
    // 0x3d416c: 0xc0ea12a  jal         func_3A84A8
label_3d4170:
    if (ctx->pc == 0x3D4170u) {
        ctx->pc = 0x3D4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D416Cu;
        // 0x3d4170: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4174u;
        goto label_3d4174;
    }
    ctx->pc = 0x3D416Cu;
    SET_GPR_U32(ctx, 31, 0x3D4174u);
    ctx->pc = 0x3D4170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D416Cu;
    // 0x3d4170: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D416Cu, 0x3D4174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4174u;
label_3d4174:
    // 0x3d4174: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d4174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4178:
    // 0x3d4178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d417c:
    // 0x3d417c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3d417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d4180:
    // 0x3d4180: 0xc0e858c  jal         func_3A1630
label_3d4184:
    if (ctx->pc == 0x3D4184u) {
        ctx->pc = 0x3D4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4180u;
        // 0x3d4184: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4188u;
        goto label_3d4188;
    }
    ctx->pc = 0x3D4180u;
    SET_GPR_U32(ctx, 31, 0x3D4188u);
    ctx->pc = 0x3D4184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4180u;
    // 0x3d4184: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D4180u, 0x3D4188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4188u;
label_3d4188:
    // 0x3d4188: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3d4188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d418c:
    // 0x3d418c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4190:
    // 0x3d4190: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x3d4190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_3d4194:
    // 0x3d4194: 0xc0e9132  jal         func_3A44C8
label_3d4198:
    if (ctx->pc == 0x3D4198u) {
        ctx->pc = 0x3D4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4194u;
        // 0x3d4198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D419Cu;
        goto label_3d419c;
    }
    ctx->pc = 0x3D4194u;
    SET_GPR_U32(ctx, 31, 0x3D419Cu);
    ctx->pc = 0x3D4198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4194u;
    // 0x3d4198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3D4194u, 0x3D419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D419Cu;
label_3d419c:
    // 0x3d419c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d419cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d41a0:
    // 0x3d41a0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d41a4:
    // 0x3d41a4: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3d41a4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d41a8:
    // 0x3d41a8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d41a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d41ac:
    // 0x3d41ac: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3d41acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3d41b0:
    // 0x3d41b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d41b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d41b4:
    // 0x3d41b4: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x3d41b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
label_3d41b8:
    // 0x3d41b8: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3d41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3d41bc:
    // 0x3d41bc: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3d41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3d41c0:
    // 0x3d41c0: 0xc0cd4ee  jal         func_3353B8
label_3d41c4:
    if (ctx->pc == 0x3D41C4u) {
        ctx->pc = 0x3D41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41C0u;
        // 0x3d41c4: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D41C8u;
        goto label_3d41c8;
    }
    ctx->pc = 0x3D41C0u;
    SET_GPR_U32(ctx, 31, 0x3D41C8u);
    ctx->pc = 0x3D41C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D41C0u;
    // 0x3d41c4: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D41C0u, 0x3D41C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D41C8u;
label_3d41c8:
    // 0x3d41c8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3d41c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3d41cc:
    // 0x3d41cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3d41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3d41d0:
    // 0x3d41d0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3d41d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d41d4:
    // 0x3d41d4: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x3d41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_3d41d8:
    // 0x3d41d8: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x3d41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_3d41dc:
    // 0x3d41dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d41dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d41e0:
    // 0x3d41e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d41e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d41e4:
    // 0x3d41e4: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x3d41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_3d41e8:
    // 0x3d41e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d41e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d41ec:
    // 0x3d41ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d41ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d41f0:
    // 0x3d41f0: 0x3e00008  jr          $ra
label_3d41f4:
    if (ctx->pc == 0x3D41F4u) {
        ctx->pc = 0x3D41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41F0u;
        // 0x3d41f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D41F8u;
        goto label_fallthrough_0x3d41f0;
    }
    ctx->pc = 0x3D41F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41F0u;
        // 0x3d41f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D41F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d41f0:
    ctx->pc = 0x3D41F8u;
}
