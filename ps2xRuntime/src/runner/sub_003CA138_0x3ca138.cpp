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

// Function: sub_003CA138
// Address: 0x3ca138 - 0x3ca220
void sub_003CA138_0x3ca138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA138_0x3ca138");
#endif

    switch (ctx->pc) {
        case 0x3ca138u: goto label_3ca138;
        case 0x3ca13cu: goto label_3ca13c;
        case 0x3ca140u: goto label_3ca140;
        case 0x3ca144u: goto label_3ca144;
        case 0x3ca148u: goto label_3ca148;
        case 0x3ca14cu: goto label_3ca14c;
        case 0x3ca150u: goto label_3ca150;
        case 0x3ca154u: goto label_3ca154;
        case 0x3ca158u: goto label_3ca158;
        case 0x3ca15cu: goto label_3ca15c;
        case 0x3ca160u: goto label_3ca160;
        case 0x3ca164u: goto label_3ca164;
        case 0x3ca168u: goto label_3ca168;
        case 0x3ca16cu: goto label_3ca16c;
        case 0x3ca170u: goto label_3ca170;
        case 0x3ca174u: goto label_3ca174;
        case 0x3ca178u: goto label_3ca178;
        case 0x3ca17cu: goto label_3ca17c;
        case 0x3ca180u: goto label_3ca180;
        case 0x3ca184u: goto label_3ca184;
        case 0x3ca188u: goto label_3ca188;
        case 0x3ca18cu: goto label_3ca18c;
        case 0x3ca190u: goto label_3ca190;
        case 0x3ca194u: goto label_3ca194;
        case 0x3ca198u: goto label_3ca198;
        case 0x3ca19cu: goto label_3ca19c;
        case 0x3ca1a0u: goto label_3ca1a0;
        case 0x3ca1a4u: goto label_3ca1a4;
        case 0x3ca1a8u: goto label_3ca1a8;
        case 0x3ca1acu: goto label_3ca1ac;
        case 0x3ca1b0u: goto label_3ca1b0;
        case 0x3ca1b4u: goto label_3ca1b4;
        case 0x3ca1b8u: goto label_3ca1b8;
        case 0x3ca1bcu: goto label_3ca1bc;
        case 0x3ca1c0u: goto label_3ca1c0;
        case 0x3ca1c4u: goto label_3ca1c4;
        case 0x3ca1c8u: goto label_3ca1c8;
        case 0x3ca1ccu: goto label_3ca1cc;
        case 0x3ca1d0u: goto label_3ca1d0;
        case 0x3ca1d4u: goto label_3ca1d4;
        case 0x3ca1d8u: goto label_3ca1d8;
        case 0x3ca1dcu: goto label_3ca1dc;
        case 0x3ca1e0u: goto label_3ca1e0;
        case 0x3ca1e4u: goto label_3ca1e4;
        case 0x3ca1e8u: goto label_3ca1e8;
        case 0x3ca1ecu: goto label_3ca1ec;
        case 0x3ca1f0u: goto label_3ca1f0;
        case 0x3ca1f4u: goto label_3ca1f4;
        case 0x3ca1f8u: goto label_3ca1f8;
        case 0x3ca1fcu: goto label_3ca1fc;
        case 0x3ca200u: goto label_3ca200;
        case 0x3ca204u: goto label_3ca204;
        case 0x3ca208u: goto label_3ca208;
        case 0x3ca20cu: goto label_3ca20c;
        case 0x3ca210u: goto label_3ca210;
        case 0x3ca214u: goto label_3ca214;
        case 0x3ca218u: goto label_3ca218;
        case 0x3ca21cu: goto label_3ca21c;
        default: break;
    }

    ctx->pc = 0x3ca138u;

label_3ca138:
    // 0x3ca138: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x3ca138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_3ca13c:
    // 0x3ca13c: 0x7fb00440  sq          $s0, 0x440($sp)
    ctx->pc = 0x3ca13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 16));
label_3ca140:
    // 0x3ca140: 0x7fb10430  sq          $s1, 0x430($sp)
    ctx->pc = 0x3ca140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 17));
label_3ca144:
    // 0x3ca144: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3ca144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3ca148:
    // 0x3ca148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca14c:
    // 0x3ca14c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ca14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ca150:
    // 0x3ca150: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ca150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ca154:
    // 0x3ca154: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ca154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ca158:
    // 0x3ca158: 0x40f809  jalr        $v0
label_3ca15c:
    if (ctx->pc == 0x3CA15Cu) {
        ctx->pc = 0x3CA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA158u;
        // 0x3ca15c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA160u;
        goto label_3ca160;
    }
    ctx->pc = 0x3CA158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA160u);
        ctx->pc = 0x3CA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA158u;
        // 0x3ca15c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA158u, 0x3CA160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA160u;
label_3ca160:
    // 0x3ca160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ca160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca164:
    // 0x3ca164: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ca164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ca168:
    // 0x3ca168: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ca168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ca16c:
    // 0x3ca16c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ca16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ca170:
    // 0x3ca170: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ca170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ca174:
    // 0x3ca174: 0x0  nop
    ctx->pc = 0x3ca174u;
    // NOP
label_3ca178:
    // 0x3ca178: 0x0  nop
    ctx->pc = 0x3ca178u;
    // NOP
label_3ca17c:
    // 0x3ca17c: 0x0  nop
    ctx->pc = 0x3ca17cu;
    // NOP
label_3ca180:
    // 0x3ca180: 0x0  nop
    ctx->pc = 0x3ca180u;
    // NOP
label_3ca184:
    // 0x3ca184: 0x0  nop
    ctx->pc = 0x3ca184u;
    // NOP
label_3ca188:
    // 0x3ca188: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ca18c:
    if (ctx->pc == 0x3CA18Cu) {
        ctx->pc = 0x3CA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA188u;
        // 0x3ca18c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA190u;
        goto label_3ca190;
    }
    ctx->pc = 0x3CA188u;
    {
        const bool branch_taken_0x3ca188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA188u;
        // 0x3ca18c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca188) {
            ctx->pc = 0x3CA178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca178;
        }
    }
    ctx->pc = 0x3CA190u;
label_3ca190:
    // 0x3ca190: 0xc138ddc  jal         func_4E3770
label_3ca194:
    if (ctx->pc == 0x3CA194u) {
        ctx->pc = 0x3CA198u;
        goto label_3ca198;
    }
    ctx->pc = 0x3CA190u;
    SET_GPR_U32(ctx, 31, 0x3CA198u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3CA190u, 0x3CA198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA198u;
label_3ca198:
    // 0x3ca198: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3ca198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3ca19c:
    // 0x3ca19c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_3ca1a0:
    if (ctx->pc == 0x3CA1A0u) {
        ctx->pc = 0x3CA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA19Cu;
        // 0x3ca1a0: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA1A4u;
        goto label_3ca1a4;
    }
    ctx->pc = 0x3CA19Cu;
    {
        const bool branch_taken_0x3ca19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca19c) {
            ctx->pc = 0x3CA1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA19Cu;
            // 0x3ca1a0: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA208u;
            goto label_3ca208;
        }
    }
    ctx->pc = 0x3CA1A4u;
label_3ca1a4:
    // 0x3ca1a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ca1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ca1a8:
    // 0x3ca1a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ca1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca1ac:
    // 0x3ca1ac: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
label_3ca1b0:
    if (ctx->pc == 0x3CA1B0u) {
        ctx->pc = 0x3CA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1ACu;
        // 0x3ca1b0: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA1B4u;
        goto label_3ca1b4;
    }
    ctx->pc = 0x3CA1ACu;
    {
        const bool branch_taken_0x3ca1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ca1ac) {
            ctx->pc = 0x3CA1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA1ACu;
            // 0x3ca1b0: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA208u;
            goto label_3ca208;
        }
    }
    ctx->pc = 0x3CA1B4u;
label_3ca1b4:
    // 0x3ca1b4: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3ca1b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3ca1b8:
    // 0x3ca1b8: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x3ca1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3ca1bc:
    // 0x3ca1bc: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3ca1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3ca1c0:
    // 0x3ca1c0: 0xc0e947e  jal         func_3A51F8
label_3ca1c4:
    if (ctx->pc == 0x3CA1C4u) {
        ctx->pc = 0x3CA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1C0u;
        // 0x3ca1c4: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA1C8u;
        goto label_3ca1c8;
    }
    ctx->pc = 0x3CA1C0u;
    SET_GPR_U32(ctx, 31, 0x3CA1C8u);
    ctx->pc = 0x3CA1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA1C0u;
    // 0x3ca1c4: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3CA1C0u, 0x3CA1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA1C8u;
label_3ca1c8:
    // 0x3ca1c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3ca1cc:
    if (ctx->pc == 0x3CA1CCu) {
        ctx->pc = 0x3CA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1C8u;
        // 0x3ca1cc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA1D0u;
        goto label_3ca1d0;
    }
    ctx->pc = 0x3CA1C8u;
    {
        const bool branch_taken_0x3ca1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1C8u;
        // 0x3ca1cc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca1c8) {
            ctx->pc = 0x3CA1F0u;
            goto label_3ca1f0;
        }
    }
    ctx->pc = 0x3CA1D0u;
label_3ca1d0:
    // 0x3ca1d0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3ca1d4:
    if (ctx->pc == 0x3CA1D4u) {
        ctx->pc = 0x3CA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1D0u;
        // 0x3ca1d4: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA1D8u;
        goto label_3ca1d8;
    }
    ctx->pc = 0x3CA1D0u;
    {
        const bool branch_taken_0x3ca1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca1d0) {
            ctx->pc = 0x3CA1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA1D0u;
            // 0x3ca1d4: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA208u;
            goto label_3ca208;
        }
    }
    ctx->pc = 0x3CA1D8u;
label_3ca1d8:
    // 0x3ca1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ca1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca1dc:
    // 0x3ca1dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ca1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca1e0:
    // 0x3ca1e0: 0xc0f22ca  jal         func_3C8B28
label_3ca1e4:
    if (ctx->pc == 0x3CA1E4u) {
        ctx->pc = 0x3CA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1E0u;
        // 0x3ca1e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA1E8u;
        goto label_3ca1e8;
    }
    ctx->pc = 0x3CA1E0u;
    SET_GPR_U32(ctx, 31, 0x3CA1E8u);
    ctx->pc = 0x3CA1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA1E0u;
    // 0x3ca1e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8B28u, 0x3CA1E0u, 0x3CA1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA1E8u;
label_3ca1e8:
    // 0x3ca1e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ca1ec:
    if (ctx->pc == 0x3CA1ECu) {
        ctx->pc = 0x3CA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1E8u;
        // 0x3ca1ec: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA1F0u;
        goto label_3ca1f0;
    }
    ctx->pc = 0x3CA1E8u;
    {
        const bool branch_taken_0x3ca1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1E8u;
        // 0x3ca1ec: 0x7bb00440  lq          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca1e8) {
            ctx->pc = 0x3CA208u;
            goto label_3ca208;
        }
    }
    ctx->pc = 0x3CA1F0u;
label_3ca1f0:
    // 0x3ca1f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ca1f4:
    if (ctx->pc == 0x3CA1F4u) {
        ctx->pc = 0x3CA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1F0u;
        // 0x3ca1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA1F8u;
        goto label_3ca1f8;
    }
    ctx->pc = 0x3CA1F0u;
    {
        const bool branch_taken_0x3ca1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1F0u;
        // 0x3ca1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca1f0) {
            ctx->pc = 0x3CA204u;
            goto label_3ca204;
        }
    }
    ctx->pc = 0x3CA1F8u;
label_3ca1f8:
    // 0x3ca1f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ca1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca1fc:
    // 0x3ca1fc: 0xc0f27de  jal         func_3C9F78
label_3ca200:
    if (ctx->pc == 0x3CA200u) {
        ctx->pc = 0x3CA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1FCu;
        // 0x3ca200: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA204u;
        goto label_3ca204;
    }
    ctx->pc = 0x3CA1FCu;
    SET_GPR_U32(ctx, 31, 0x3CA204u);
    ctx->pc = 0x3CA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA1FCu;
    // 0x3ca200: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9F78u, 0x3CA1FCu, 0x3CA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA204u;
label_3ca204:
    // 0x3ca204: 0x7bb00440  lq          $s0, 0x440($sp)
    ctx->pc = 0x3ca204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ca208:
    // 0x3ca208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ca208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca20c:
    // 0x3ca20c: 0x7bb10430  lq          $s1, 0x430($sp)
    ctx->pc = 0x3ca20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ca210:
    // 0x3ca210: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3ca210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ca214:
    // 0x3ca214: 0x3e00008  jr          $ra
label_3ca218:
    if (ctx->pc == 0x3CA218u) {
        ctx->pc = 0x3CA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA214u;
        // 0x3ca218: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA21Cu;
        goto label_3ca21c;
    }
    ctx->pc = 0x3CA214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA214u;
        // 0x3ca218: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA21Cu;
label_3ca21c:
    // 0x3ca21c: 0x0  nop
    ctx->pc = 0x3ca21cu;
    // NOP
    ctx->pc = 0x3ca220u;
}
