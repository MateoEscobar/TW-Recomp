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

// Function: sub_003DA158
// Address: 0x3da158 - 0x3da278
void sub_003DA158_0x3da158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA158_0x3da158");
#endif

    switch (ctx->pc) {
        case 0x3da158u: goto label_3da158;
        case 0x3da15cu: goto label_3da15c;
        case 0x3da160u: goto label_3da160;
        case 0x3da164u: goto label_3da164;
        case 0x3da168u: goto label_3da168;
        case 0x3da16cu: goto label_3da16c;
        case 0x3da170u: goto label_3da170;
        case 0x3da174u: goto label_3da174;
        case 0x3da178u: goto label_3da178;
        case 0x3da17cu: goto label_3da17c;
        case 0x3da180u: goto label_3da180;
        case 0x3da184u: goto label_3da184;
        case 0x3da188u: goto label_3da188;
        case 0x3da18cu: goto label_3da18c;
        case 0x3da190u: goto label_3da190;
        case 0x3da194u: goto label_3da194;
        case 0x3da198u: goto label_3da198;
        case 0x3da19cu: goto label_3da19c;
        case 0x3da1a0u: goto label_3da1a0;
        case 0x3da1a4u: goto label_3da1a4;
        case 0x3da1a8u: goto label_3da1a8;
        case 0x3da1acu: goto label_3da1ac;
        case 0x3da1b0u: goto label_3da1b0;
        case 0x3da1b4u: goto label_3da1b4;
        case 0x3da1b8u: goto label_3da1b8;
        case 0x3da1bcu: goto label_3da1bc;
        case 0x3da1c0u: goto label_3da1c0;
        case 0x3da1c4u: goto label_3da1c4;
        case 0x3da1c8u: goto label_3da1c8;
        case 0x3da1ccu: goto label_3da1cc;
        case 0x3da1d0u: goto label_3da1d0;
        case 0x3da1d4u: goto label_3da1d4;
        case 0x3da1d8u: goto label_3da1d8;
        case 0x3da1dcu: goto label_3da1dc;
        case 0x3da1e0u: goto label_3da1e0;
        case 0x3da1e4u: goto label_3da1e4;
        case 0x3da1e8u: goto label_3da1e8;
        case 0x3da1ecu: goto label_3da1ec;
        case 0x3da1f0u: goto label_3da1f0;
        case 0x3da1f4u: goto label_3da1f4;
        case 0x3da1f8u: goto label_3da1f8;
        case 0x3da1fcu: goto label_3da1fc;
        case 0x3da200u: goto label_3da200;
        case 0x3da204u: goto label_3da204;
        case 0x3da208u: goto label_3da208;
        case 0x3da20cu: goto label_3da20c;
        case 0x3da210u: goto label_3da210;
        case 0x3da214u: goto label_3da214;
        case 0x3da218u: goto label_3da218;
        case 0x3da21cu: goto label_3da21c;
        case 0x3da220u: goto label_3da220;
        case 0x3da224u: goto label_3da224;
        case 0x3da228u: goto label_3da228;
        case 0x3da22cu: goto label_3da22c;
        case 0x3da230u: goto label_3da230;
        case 0x3da234u: goto label_3da234;
        case 0x3da238u: goto label_3da238;
        case 0x3da23cu: goto label_3da23c;
        case 0x3da240u: goto label_3da240;
        case 0x3da244u: goto label_3da244;
        case 0x3da248u: goto label_3da248;
        case 0x3da24cu: goto label_3da24c;
        case 0x3da250u: goto label_3da250;
        case 0x3da254u: goto label_3da254;
        case 0x3da258u: goto label_3da258;
        case 0x3da25cu: goto label_3da25c;
        case 0x3da260u: goto label_3da260;
        case 0x3da264u: goto label_3da264;
        case 0x3da268u: goto label_3da268;
        case 0x3da26cu: goto label_3da26c;
        case 0x3da270u: goto label_3da270;
        case 0x3da274u: goto label_3da274;
        default: break;
    }

    ctx->pc = 0x3da158u;

label_3da158:
    // 0x3da158: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x3da158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_3da15c:
    // 0x3da15c: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3da15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3da160:
    // 0x3da160: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3da160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3da164:
    // 0x3da164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da168:
    // 0x3da168: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3da168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3da16c:
    // 0x3da16c: 0xe7b40440  swc1        $f20, 0x440($sp)
    ctx->pc = 0x3da16cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3da170:
    // 0x3da170: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3da170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3da174:
    // 0x3da174: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3da174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da178:
    // 0x3da178: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da17c:
    // 0x3da17c: 0x40f809  jalr        $v0
label_3da180:
    if (ctx->pc == 0x3DA180u) {
        ctx->pc = 0x3DA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA17Cu;
        // 0x3da180: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA184u;
        goto label_3da184;
    }
    ctx->pc = 0x3DA17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA184u);
        ctx->pc = 0x3DA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA17Cu;
        // 0x3da180: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA17Cu, 0x3DA184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA184u;
label_3da184:
    // 0x3da184: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3da184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3da188:
    // 0x3da188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3da188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3da18c:
    // 0x3da18c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3da18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3da190:
    // 0x3da190: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3da190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3da194:
    // 0x3da194: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3da198:
    // 0x3da198: 0x0  nop
    ctx->pc = 0x3da198u;
    // NOP
label_3da19c:
    // 0x3da19c: 0x0  nop
    ctx->pc = 0x3da19cu;
    // NOP
label_3da1a0:
    // 0x3da1a0: 0x0  nop
    ctx->pc = 0x3da1a0u;
    // NOP
label_3da1a4:
    // 0x3da1a4: 0x0  nop
    ctx->pc = 0x3da1a4u;
    // NOP
label_3da1a8:
    // 0x3da1a8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3da1ac:
    if (ctx->pc == 0x3DA1ACu) {
        ctx->pc = 0x3DA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1A8u;
        // 0x3da1ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA1B0u;
        goto label_3da1b0;
    }
    ctx->pc = 0x3DA1A8u;
    {
        const bool branch_taken_0x3da1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1A8u;
        // 0x3da1ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1a8) {
            ctx->pc = 0x3DA198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da198;
        }
    }
    ctx->pc = 0x3DA1B0u;
label_3da1b0:
    // 0x3da1b0: 0xc138ddc  jal         func_4E3770
label_3da1b4:
    if (ctx->pc == 0x3DA1B4u) {
        ctx->pc = 0x3DA1B8u;
        goto label_3da1b8;
    }
    ctx->pc = 0x3DA1B0u;
    SET_GPR_U32(ctx, 31, 0x3DA1B8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DA1B0u, 0x3DA1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA1B8u;
label_3da1b8:
    // 0x3da1b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3da1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3da1bc:
    // 0x3da1bc: 0x4600027  bltz        $v1, . + 4 + (0x27 << 2)
label_3da1c0:
    if (ctx->pc == 0x3DA1C0u) {
        ctx->pc = 0x3DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1BCu;
        // 0x3da1c0: 0x28620118  slti        $v0, $v1, 0x118 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)280) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA1C4u;
        goto label_3da1c4;
    }
    ctx->pc = 0x3DA1BCu;
    {
        const bool branch_taken_0x3da1bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1BCu;
        // 0x3da1c0: 0x28620118  slti        $v0, $v1, 0x118 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)280) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1bc) {
            ctx->pc = 0x3DA25Cu;
            goto label_3da25c;
        }
    }
    ctx->pc = 0x3DA1C4u;
label_3da1c4:
    // 0x3da1c4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3da1c8:
    if (ctx->pc == 0x3DA1C8u) {
        ctx->pc = 0x3DA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1C4u;
        // 0x3da1c8: 0x286200fa  slti        $v0, $v1, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA1CCu;
        goto label_3da1cc;
    }
    ctx->pc = 0x3DA1C4u;
    {
        const bool branch_taken_0x3da1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1C4u;
        // 0x3da1c8: 0x286200fa  slti        $v0, $v1, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1c4) {
            ctx->pc = 0x3DA1F8u;
            goto label_3da1f8;
        }
    }
    ctx->pc = 0x3DA1CCu;
label_3da1cc:
    // 0x3da1cc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3da1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3da1d0:
    // 0x3da1d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3da1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3da1d4:
    // 0x3da1d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3da1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da1d8:
    // 0x3da1d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3da1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3da1dc:
    // 0x3da1dc: 0xc0e9182  jal         func_3A4608
label_3da1e0:
    if (ctx->pc == 0x3DA1E0u) {
        ctx->pc = 0x3DA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1DCu;
        // 0x3da1e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA1E4u;
        goto label_3da1e4;
    }
    ctx->pc = 0x3DA1DCu;
    SET_GPR_U32(ctx, 31, 0x3DA1E4u);
    ctx->pc = 0x3DA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA1DCu;
    // 0x3da1e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3DA1DCu, 0x3DA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA1E4u;
label_3da1e4:
    // 0x3da1e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3da1e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3da1e8:
    // 0x3da1e8: 0xc0e919a  jal         func_3A4668
label_3da1ec:
    if (ctx->pc == 0x3DA1ECu) {
        ctx->pc = 0x3DA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1E8u;
        // 0x3da1ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA1F0u;
        goto label_3da1f0;
    }
    ctx->pc = 0x3DA1E8u;
    SET_GPR_U32(ctx, 31, 0x3DA1F0u);
    ctx->pc = 0x3DA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA1E8u;
    // 0x3da1ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3DA1E8u, 0x3DA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA1F0u;
label_3da1f0:
    // 0x3da1f0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3da1f4:
    if (ctx->pc == 0x3DA1F4u) {
        ctx->pc = 0x3DA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1F0u;
        // 0x3da1f4: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA1F8u;
        goto label_3da1f8;
    }
    ctx->pc = 0x3DA1F0u;
    {
        const bool branch_taken_0x3da1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1F0u;
        // 0x3da1f4: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1f0) {
            ctx->pc = 0x3DA260u;
            goto label_3da260;
        }
    }
    ctx->pc = 0x3DA1F8u;
label_3da1f8:
    // 0x3da1f8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3da1fc:
    if (ctx->pc == 0x3DA1FCu) {
        ctx->pc = 0x3DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1F8u;
        // 0x3da1fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA200u;
        goto label_3da200;
    }
    ctx->pc = 0x3DA1F8u;
    {
        const bool branch_taken_0x3da1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da1f8) {
            ctx->pc = 0x3DA1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA1F8u;
            // 0x3da1fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA238u;
            goto label_3da238;
        }
    }
    ctx->pc = 0x3DA200u;
label_3da200:
    // 0x3da200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da204:
    // 0x3da204: 0xc0e858c  jal         func_3A1630
label_3da208:
    if (ctx->pc == 0x3DA208u) {
        ctx->pc = 0x3DA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA204u;
        // 0x3da208: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA20Cu;
        goto label_3da20c;
    }
    ctx->pc = 0x3DA204u;
    SET_GPR_U32(ctx, 31, 0x3DA20Cu);
    ctx->pc = 0x3DA208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA204u;
    // 0x3da208: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA204u, 0x3DA20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA20Cu;
label_3da20c:
    // 0x3da20c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3da20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3da210:
    // 0x3da210: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3da210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3da214:
    // 0x3da214: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3da214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3da218:
    // 0x3da218: 0xc0e9182  jal         func_3A4608
label_3da21c:
    if (ctx->pc == 0x3DA21Cu) {
        ctx->pc = 0x3DA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA218u;
        // 0x3da21c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA220u;
        goto label_3da220;
    }
    ctx->pc = 0x3DA218u;
    SET_GPR_U32(ctx, 31, 0x3DA220u);
    ctx->pc = 0x3DA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA218u;
    // 0x3da21c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3DA218u, 0x3DA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA220u;
label_3da220:
    // 0x3da220: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3da220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3da224:
    // 0x3da224: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3da224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3da228:
    // 0x3da228: 0xc0e919a  jal         func_3A4668
label_3da22c:
    if (ctx->pc == 0x3DA22Cu) {
        ctx->pc = 0x3DA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA228u;
        // 0x3da22c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA230u;
        goto label_3da230;
    }
    ctx->pc = 0x3DA228u;
    SET_GPR_U32(ctx, 31, 0x3DA230u);
    ctx->pc = 0x3DA22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA228u;
    // 0x3da22c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3DA228u, 0x3DA230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA230u;
label_3da230:
    // 0x3da230: 0x10000008  b           . + 4 + (0x8 << 2)
label_3da234:
    if (ctx->pc == 0x3DA234u) {
        ctx->pc = 0x3DA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA230u;
        // 0x3da234: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA238u;
        goto label_3da238;
    }
    ctx->pc = 0x3DA230u;
    {
        const bool branch_taken_0x3da230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA230u;
        // 0x3da234: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da230) {
            ctx->pc = 0x3DA254u;
            goto label_3da254;
        }
    }
    ctx->pc = 0x3DA238u;
label_3da238:
    // 0x3da238: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3da238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3da23c:
    // 0x3da23c: 0xc0e9182  jal         func_3A4608
label_3da240:
    if (ctx->pc == 0x3DA240u) {
        ctx->pc = 0x3DA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA23Cu;
        // 0x3da240: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA244u;
        goto label_3da244;
    }
    ctx->pc = 0x3DA23Cu;
    SET_GPR_U32(ctx, 31, 0x3DA244u);
    ctx->pc = 0x3DA240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA23Cu;
    // 0x3da240: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3DA23Cu, 0x3DA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA244u;
label_3da244:
    // 0x3da244: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3da244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3da248:
    // 0x3da248: 0xc0e919a  jal         func_3A4668
label_3da24c:
    if (ctx->pc == 0x3DA24Cu) {
        ctx->pc = 0x3DA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA248u;
        // 0x3da24c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA250u;
        goto label_3da250;
    }
    ctx->pc = 0x3DA248u;
    SET_GPR_U32(ctx, 31, 0x3DA250u);
    ctx->pc = 0x3DA24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA248u;
    // 0x3da24c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3DA248u, 0x3DA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA250u;
label_3da250:
    // 0x3da250: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3da250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3da254:
    // 0x3da254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3da254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3da258:
    // 0x3da258: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3da258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3da25c:
    // 0x3da25c: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3da25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3da260:
    // 0x3da260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3da260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da264:
    // 0x3da264: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3da264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3da268:
    // 0x3da268: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3da268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3da26c:
    // 0x3da26c: 0xc7b40440  lwc1        $f20, 0x440($sp)
    ctx->pc = 0x3da26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3da270:
    // 0x3da270: 0x3e00008  jr          $ra
label_3da274:
    if (ctx->pc == 0x3DA274u) {
        ctx->pc = 0x3DA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA270u;
        // 0x3da274: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA278u;
        goto label_fallthrough_0x3da270;
    }
    ctx->pc = 0x3DA270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA270u;
        // 0x3da274: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3da270:
    ctx->pc = 0x3DA278u;
}
