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

// Function: sub_003C40A0
// Address: 0x3c40a0 - 0x3c4210
void sub_003C40A0_0x3c40a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C40A0_0x3c40a0");
#endif

    switch (ctx->pc) {
        case 0x3c40a0u: goto label_3c40a0;
        case 0x3c40a4u: goto label_3c40a4;
        case 0x3c40a8u: goto label_3c40a8;
        case 0x3c40acu: goto label_3c40ac;
        case 0x3c40b0u: goto label_3c40b0;
        case 0x3c40b4u: goto label_3c40b4;
        case 0x3c40b8u: goto label_3c40b8;
        case 0x3c40bcu: goto label_3c40bc;
        case 0x3c40c0u: goto label_3c40c0;
        case 0x3c40c4u: goto label_3c40c4;
        case 0x3c40c8u: goto label_3c40c8;
        case 0x3c40ccu: goto label_3c40cc;
        case 0x3c40d0u: goto label_3c40d0;
        case 0x3c40d4u: goto label_3c40d4;
        case 0x3c40d8u: goto label_3c40d8;
        case 0x3c40dcu: goto label_3c40dc;
        case 0x3c40e0u: goto label_3c40e0;
        case 0x3c40e4u: goto label_3c40e4;
        case 0x3c40e8u: goto label_3c40e8;
        case 0x3c40ecu: goto label_3c40ec;
        case 0x3c40f0u: goto label_3c40f0;
        case 0x3c40f4u: goto label_3c40f4;
        case 0x3c40f8u: goto label_3c40f8;
        case 0x3c40fcu: goto label_3c40fc;
        case 0x3c4100u: goto label_3c4100;
        case 0x3c4104u: goto label_3c4104;
        case 0x3c4108u: goto label_3c4108;
        case 0x3c410cu: goto label_3c410c;
        case 0x3c4110u: goto label_3c4110;
        case 0x3c4114u: goto label_3c4114;
        case 0x3c4118u: goto label_3c4118;
        case 0x3c411cu: goto label_3c411c;
        case 0x3c4120u: goto label_3c4120;
        case 0x3c4124u: goto label_3c4124;
        case 0x3c4128u: goto label_3c4128;
        case 0x3c412cu: goto label_3c412c;
        case 0x3c4130u: goto label_3c4130;
        case 0x3c4134u: goto label_3c4134;
        case 0x3c4138u: goto label_3c4138;
        case 0x3c413cu: goto label_3c413c;
        case 0x3c4140u: goto label_3c4140;
        case 0x3c4144u: goto label_3c4144;
        case 0x3c4148u: goto label_3c4148;
        case 0x3c414cu: goto label_3c414c;
        case 0x3c4150u: goto label_3c4150;
        case 0x3c4154u: goto label_3c4154;
        case 0x3c4158u: goto label_3c4158;
        case 0x3c415cu: goto label_3c415c;
        case 0x3c4160u: goto label_3c4160;
        case 0x3c4164u: goto label_3c4164;
        case 0x3c4168u: goto label_3c4168;
        case 0x3c416cu: goto label_3c416c;
        case 0x3c4170u: goto label_3c4170;
        case 0x3c4174u: goto label_3c4174;
        case 0x3c4178u: goto label_3c4178;
        case 0x3c417cu: goto label_3c417c;
        case 0x3c4180u: goto label_3c4180;
        case 0x3c4184u: goto label_3c4184;
        case 0x3c4188u: goto label_3c4188;
        case 0x3c418cu: goto label_3c418c;
        case 0x3c4190u: goto label_3c4190;
        case 0x3c4194u: goto label_3c4194;
        case 0x3c4198u: goto label_3c4198;
        case 0x3c419cu: goto label_3c419c;
        case 0x3c41a0u: goto label_3c41a0;
        case 0x3c41a4u: goto label_3c41a4;
        case 0x3c41a8u: goto label_3c41a8;
        case 0x3c41acu: goto label_3c41ac;
        case 0x3c41b0u: goto label_3c41b0;
        case 0x3c41b4u: goto label_3c41b4;
        case 0x3c41b8u: goto label_3c41b8;
        case 0x3c41bcu: goto label_3c41bc;
        case 0x3c41c0u: goto label_3c41c0;
        case 0x3c41c4u: goto label_3c41c4;
        case 0x3c41c8u: goto label_3c41c8;
        case 0x3c41ccu: goto label_3c41cc;
        case 0x3c41d0u: goto label_3c41d0;
        case 0x3c41d4u: goto label_3c41d4;
        case 0x3c41d8u: goto label_3c41d8;
        case 0x3c41dcu: goto label_3c41dc;
        case 0x3c41e0u: goto label_3c41e0;
        case 0x3c41e4u: goto label_3c41e4;
        case 0x3c41e8u: goto label_3c41e8;
        case 0x3c41ecu: goto label_3c41ec;
        case 0x3c41f0u: goto label_3c41f0;
        case 0x3c41f4u: goto label_3c41f4;
        case 0x3c41f8u: goto label_3c41f8;
        case 0x3c41fcu: goto label_3c41fc;
        case 0x3c4200u: goto label_3c4200;
        case 0x3c4204u: goto label_3c4204;
        case 0x3c4208u: goto label_3c4208;
        case 0x3c420cu: goto label_3c420c;
        default: break;
    }

    ctx->pc = 0x3c40a0u;

label_3c40a0:
    // 0x3c40a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3c40a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3c40a4:
    // 0x3c40a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3c40a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3c40a8:
    // 0x3c40a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3c40a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3c40ac:
    // 0x3c40ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c40acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c40b0:
    // 0x3c40b0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3c40b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3c40b4:
    // 0x3c40b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c40b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c40b8:
    // 0x3c40b8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3c40b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3c40bc:
    // 0x3c40bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3c40bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3c40c0:
    // 0x3c40c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c40c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3c40c4:
    // 0x3c40c4: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x3c40c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3c40c8:
    // 0x3c40c8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3c40c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3c40cc:
    // 0x3c40cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c40d0:
    // 0x3c40d0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c40d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c40d4:
    // 0x3c40d4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c40d8:
    // 0x3c40d8: 0x40f809  jalr        $v0
label_3c40dc:
    if (ctx->pc == 0x3C40DCu) {
        ctx->pc = 0x3C40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40D8u;
        // 0x3c40dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C40E0u;
        goto label_3c40e0;
    }
    ctx->pc = 0x3C40D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C40E0u);
        ctx->pc = 0x3C40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40D8u;
        // 0x3c40dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C40D8u, 0x3C40E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C40E0u;
label_3c40e0:
    // 0x3c40e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c40e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c40e4:
    // 0x3c40e4: 0xc0ea146  jal         func_3A8518
label_3c40e8:
    if (ctx->pc == 0x3C40E8u) {
        ctx->pc = 0x3C40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40E4u;
        // 0x3c40e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C40ECu;
        goto label_3c40ec;
    }
    ctx->pc = 0x3C40E4u;
    SET_GPR_U32(ctx, 31, 0x3C40ECu);
    ctx->pc = 0x3C40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C40E4u;
    // 0x3c40e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C40E4u, 0x3C40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C40ECu;
label_3c40ec:
    // 0x3c40ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c40ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c40f0:
    // 0x3c40f0: 0xc0ea13a  jal         func_3A84E8
label_3c40f4:
    if (ctx->pc == 0x3C40F4u) {
        ctx->pc = 0x3C40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40F0u;
        // 0x3c40f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C40F8u;
        goto label_3c40f8;
    }
    ctx->pc = 0x3C40F0u;
    SET_GPR_U32(ctx, 31, 0x3C40F8u);
    ctx->pc = 0x3C40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C40F0u;
    // 0x3c40f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C40F0u, 0x3C40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C40F8u;
label_3c40f8:
    // 0x3c40f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c40f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c40fc:
    // 0x3c40fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c40fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c4100:
    // 0x3c4100: 0xc0ea12a  jal         func_3A84A8
label_3c4104:
    if (ctx->pc == 0x3C4104u) {
        ctx->pc = 0x3C4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4100u;
        // 0x3c4104: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4108u;
        goto label_3c4108;
    }
    ctx->pc = 0x3C4100u;
    SET_GPR_U32(ctx, 31, 0x3C4108u);
    ctx->pc = 0x3C4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4100u;
    // 0x3c4104: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C4100u, 0x3C4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4108u;
label_3c4108:
    // 0x3c4108: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c4108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c410c:
    // 0x3c410c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c4110:
    // 0x3c4110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4114:
    // 0x3c4114: 0xc0ea12a  jal         func_3A84A8
label_3c4118:
    if (ctx->pc == 0x3C4118u) {
        ctx->pc = 0x3C4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4114u;
        // 0x3c4118: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C411Cu;
        goto label_3c411c;
    }
    ctx->pc = 0x3C4114u;
    SET_GPR_U32(ctx, 31, 0x3C411Cu);
    ctx->pc = 0x3C4118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4114u;
    // 0x3c4118: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C4114u, 0x3C411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C411Cu;
label_3c411c:
    // 0x3c411c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c411cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4120:
    // 0x3c4120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4124:
    // 0x3c4124: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3c4124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3c4128:
    // 0x3c4128: 0xc0e858c  jal         func_3A1630
label_3c412c:
    if (ctx->pc == 0x3C412Cu) {
        ctx->pc = 0x3C412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4128u;
        // 0x3c412c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4130u;
        goto label_3c4130;
    }
    ctx->pc = 0x3C4128u;
    SET_GPR_U32(ctx, 31, 0x3C4130u);
    ctx->pc = 0x3C412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4128u;
    // 0x3c412c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C4128u, 0x3C4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4130u;
label_3c4130:
    // 0x3c4130: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3c4130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3c4134:
    // 0x3c4134: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3c4134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3c4138:
    // 0x3c4138: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c4138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c413c:
    // 0x3c413c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4140:
    // 0x3c4140: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c4140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c4144:
    // 0x3c4144: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c4144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4148:
    // 0x3c4148: 0xc136b24  jal         func_4DAC90
label_3c414c:
    if (ctx->pc == 0x3C414Cu) {
        ctx->pc = 0x3C414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4148u;
        // 0x3c414c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4150u;
        goto label_3c4150;
    }
    ctx->pc = 0x3C4148u;
    SET_GPR_U32(ctx, 31, 0x3C4150u);
    ctx->pc = 0x3C414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4148u;
    // 0x3c414c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C4148u, 0x3C4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4150u;
label_3c4150:
    // 0x3c4150: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c4150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4154:
    // 0x3c4154: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c4154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c4158:
    // 0x3c4158: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c4158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c415c:
    // 0x3c415c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c4160:
    // 0x3c4160: 0xc136b18  jal         func_4DAC60
label_3c4164:
    if (ctx->pc == 0x3C4164u) {
        ctx->pc = 0x3C4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4160u;
        // 0x3c4164: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4168u;
        goto label_3c4168;
    }
    ctx->pc = 0x3C4160u;
    SET_GPR_U32(ctx, 31, 0x3C4168u);
    ctx->pc = 0x3C4164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4160u;
    // 0x3c4164: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C4160u, 0x3C4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4168u;
label_3c4168:
    // 0x3c4168: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c4168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c416c:
    // 0x3c416c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c4170:
    // 0x3c4170: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c4170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4174:
    // 0x3c4174: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3c4174u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3c4178:
    // 0x3c4178: 0xc0e9364  jal         func_3A4D90
label_3c417c:
    if (ctx->pc == 0x3C417Cu) {
        ctx->pc = 0x3C417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4178u;
        // 0x3c417c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4180u;
        goto label_3c4180;
    }
    ctx->pc = 0x3C4178u;
    SET_GPR_U32(ctx, 31, 0x3C4180u);
    ctx->pc = 0x3C417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4178u;
    // 0x3c417c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x3C4178u, 0x3C4180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4180u;
label_3c4180:
    // 0x3c4180: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3c4180u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4184:
    // 0x3c4184: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c4184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3c4188:
    // 0x3c4188: 0x2439024  and         $s2, $s2, $v1
    ctx->pc = 0x3c4188u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_3c418c:
    // 0x3c418c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3c418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_3c4190:
    // 0x3c4190: 0x7e840010  sq          $a0, 0x10($s4)
    ctx->pc = 0x3c4190u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 4));
label_3c4194:
    // 0x3c4194: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3c4194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3c4198:
    // 0x3c4198: 0x36520006  ori         $s2, $s2, 0x6
    ctx->pc = 0x3c4198u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)6);
label_3c419c:
    // 0x3c419c: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3c419cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3c41a0:
    // 0x3c41a0: 0xae3200c4  sw          $s2, 0xC4($s1)
    ctx->pc = 0x3c41a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 18));
label_3c41a4:
    // 0x3c41a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3c41a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3c41a8:
    // 0x3c41a8: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3c41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3c41ac:
    // 0x3c41ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c41acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c41b0:
    // 0x3c41b0: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3c41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3c41b4:
    // 0x3c41b4: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c41b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c41b8:
    // 0x3c41b8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c41b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c41bc:
    // 0x3c41bc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3c41bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3c41c0:
    // 0x3c41c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c41c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c41c4:
    // 0x3c41c4: 0xe6740018  swc1        $f20, 0x18($s3)
    ctx->pc = 0x3c41c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_3c41c8:
    // 0x3c41c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c41c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c41cc:
    // 0x3c41cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c41ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c41d0:
    // 0x3c41d0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3c41d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3c41d4:
    // 0x3c41d4: 0xc0cd518  jal         func_335460
label_3c41d8:
    if (ctx->pc == 0x3C41D8u) {
        ctx->pc = 0x3C41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C41D4u;
        // 0x3c41d8: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C41DCu;
        goto label_3c41dc;
    }
    ctx->pc = 0x3C41D4u;
    SET_GPR_U32(ctx, 31, 0x3C41DCu);
    ctx->pc = 0x3C41D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C41D4u;
    // 0x3c41d8: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C41D4u, 0x3C41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C41DCu;
label_3c41dc:
    // 0x3c41dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c41dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3c41e0:
    // 0x3c41e0: 0xc0e96a4  jal         func_3A5A90
label_3c41e4:
    if (ctx->pc == 0x3C41E4u) {
        ctx->pc = 0x3C41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C41E0u;
        // 0x3c41e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C41E8u;
        goto label_3c41e8;
    }
    ctx->pc = 0x3C41E0u;
    SET_GPR_U32(ctx, 31, 0x3C41E8u);
    ctx->pc = 0x3C41E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C41E0u;
    // 0x3c41e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A90u, 0x3C41E0u, 0x3C41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C41E8u;
label_3c41e8:
    // 0x3c41e8: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x3c41e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_3c41ec:
    // 0x3c41ec: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3c41ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c41f0:
    // 0x3c41f0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3c41f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c41f4:
    // 0x3c41f4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3c41f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c41f8:
    // 0x3c41f8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3c41f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c41fc:
    // 0x3c41fc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3c41fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c4200:
    // 0x3c4200: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c4200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4204:
    // 0x3c4204: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3c4204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c4208:
    // 0x3c4208: 0x3e00008  jr          $ra
label_3c420c:
    if (ctx->pc == 0x3C420Cu) {
        ctx->pc = 0x3C420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4208u;
        // 0x3c420c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4210u;
        goto label_fallthrough_0x3c4208;
    }
    ctx->pc = 0x3C4208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4208u;
        // 0x3c420c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c4208:
    ctx->pc = 0x3C4210u;
}
