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

// Function: sub_003DD068
// Address: 0x3dd068 - 0x3dd190
void sub_003DD068_0x3dd068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD068_0x3dd068");
#endif

    switch (ctx->pc) {
        case 0x3dd068u: goto label_3dd068;
        case 0x3dd06cu: goto label_3dd06c;
        case 0x3dd070u: goto label_3dd070;
        case 0x3dd074u: goto label_3dd074;
        case 0x3dd078u: goto label_3dd078;
        case 0x3dd07cu: goto label_3dd07c;
        case 0x3dd080u: goto label_3dd080;
        case 0x3dd084u: goto label_3dd084;
        case 0x3dd088u: goto label_3dd088;
        case 0x3dd08cu: goto label_3dd08c;
        case 0x3dd090u: goto label_3dd090;
        case 0x3dd094u: goto label_3dd094;
        case 0x3dd098u: goto label_3dd098;
        case 0x3dd09cu: goto label_3dd09c;
        case 0x3dd0a0u: goto label_3dd0a0;
        case 0x3dd0a4u: goto label_3dd0a4;
        case 0x3dd0a8u: goto label_3dd0a8;
        case 0x3dd0acu: goto label_3dd0ac;
        case 0x3dd0b0u: goto label_3dd0b0;
        case 0x3dd0b4u: goto label_3dd0b4;
        case 0x3dd0b8u: goto label_3dd0b8;
        case 0x3dd0bcu: goto label_3dd0bc;
        case 0x3dd0c0u: goto label_3dd0c0;
        case 0x3dd0c4u: goto label_3dd0c4;
        case 0x3dd0c8u: goto label_3dd0c8;
        case 0x3dd0ccu: goto label_3dd0cc;
        case 0x3dd0d0u: goto label_3dd0d0;
        case 0x3dd0d4u: goto label_3dd0d4;
        case 0x3dd0d8u: goto label_3dd0d8;
        case 0x3dd0dcu: goto label_3dd0dc;
        case 0x3dd0e0u: goto label_3dd0e0;
        case 0x3dd0e4u: goto label_3dd0e4;
        case 0x3dd0e8u: goto label_3dd0e8;
        case 0x3dd0ecu: goto label_3dd0ec;
        case 0x3dd0f0u: goto label_3dd0f0;
        case 0x3dd0f4u: goto label_3dd0f4;
        case 0x3dd0f8u: goto label_3dd0f8;
        case 0x3dd0fcu: goto label_3dd0fc;
        case 0x3dd100u: goto label_3dd100;
        case 0x3dd104u: goto label_3dd104;
        case 0x3dd108u: goto label_3dd108;
        case 0x3dd10cu: goto label_3dd10c;
        case 0x3dd110u: goto label_3dd110;
        case 0x3dd114u: goto label_3dd114;
        case 0x3dd118u: goto label_3dd118;
        case 0x3dd11cu: goto label_3dd11c;
        case 0x3dd120u: goto label_3dd120;
        case 0x3dd124u: goto label_3dd124;
        case 0x3dd128u: goto label_3dd128;
        case 0x3dd12cu: goto label_3dd12c;
        case 0x3dd130u: goto label_3dd130;
        case 0x3dd134u: goto label_3dd134;
        case 0x3dd138u: goto label_3dd138;
        case 0x3dd13cu: goto label_3dd13c;
        case 0x3dd140u: goto label_3dd140;
        case 0x3dd144u: goto label_3dd144;
        case 0x3dd148u: goto label_3dd148;
        case 0x3dd14cu: goto label_3dd14c;
        case 0x3dd150u: goto label_3dd150;
        case 0x3dd154u: goto label_3dd154;
        case 0x3dd158u: goto label_3dd158;
        case 0x3dd15cu: goto label_3dd15c;
        case 0x3dd160u: goto label_3dd160;
        case 0x3dd164u: goto label_3dd164;
        case 0x3dd168u: goto label_3dd168;
        case 0x3dd16cu: goto label_3dd16c;
        case 0x3dd170u: goto label_3dd170;
        case 0x3dd174u: goto label_3dd174;
        case 0x3dd178u: goto label_3dd178;
        case 0x3dd17cu: goto label_3dd17c;
        case 0x3dd180u: goto label_3dd180;
        case 0x3dd184u: goto label_3dd184;
        case 0x3dd188u: goto label_3dd188;
        case 0x3dd18cu: goto label_3dd18c;
        default: break;
    }

    ctx->pc = 0x3dd068u;

label_3dd068:
    // 0x3dd068: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x3dd068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
label_3dd06c:
    // 0x3dd06c: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x3dd06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
label_3dd070:
    // 0x3dd070: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x3dd070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
label_3dd074:
    // 0x3dd074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd078:
    // 0x3dd078: 0x7fb20430  sq          $s2, 0x430($sp)
    ctx->pc = 0x3dd078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 18));
label_3dd07c:
    // 0x3dd07c: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3dd07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3dd080:
    // 0x3dd080: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dd080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dd084:
    // 0x3dd084: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dd084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd088:
    // 0x3dd088: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd08c:
    // 0x3dd08c: 0x40f809  jalr        $v0
label_3dd090:
    if (ctx->pc == 0x3DD090u) {
        ctx->pc = 0x3DD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD08Cu;
        // 0x3dd090: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD094u;
        goto label_3dd094;
    }
    ctx->pc = 0x3DD08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD094u);
        ctx->pc = 0x3DD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD08Cu;
        // 0x3dd090: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD08Cu, 0x3DD094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD094u;
label_3dd094:
    // 0x3dd094: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dd094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd098:
    // 0x3dd098: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3dd098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dd09c:
    // 0x3dd09c: 0x27b20410  addiu       $s2, $sp, 0x410
    ctx->pc = 0x3dd09cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3dd0a0:
    // 0x3dd0a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3dd0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dd0a4:
    // 0x3dd0a4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3dd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3dd0a8:
    // 0x3dd0a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dd0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3dd0ac:
    // 0x3dd0ac: 0x0  nop
    ctx->pc = 0x3dd0acu;
    // NOP
label_3dd0b0:
    // 0x3dd0b0: 0x0  nop
    ctx->pc = 0x3dd0b0u;
    // NOP
label_3dd0b4:
    // 0x3dd0b4: 0x0  nop
    ctx->pc = 0x3dd0b4u;
    // NOP
label_3dd0b8:
    // 0x3dd0b8: 0x0  nop
    ctx->pc = 0x3dd0b8u;
    // NOP
label_3dd0bc:
    // 0x3dd0bc: 0x0  nop
    ctx->pc = 0x3dd0bcu;
    // NOP
label_3dd0c0:
    // 0x3dd0c0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3dd0c4:
    if (ctx->pc == 0x3DD0C4u) {
        ctx->pc = 0x3DD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0C0u;
        // 0x3dd0c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD0C8u;
        goto label_3dd0c8;
    }
    ctx->pc = 0x3DD0C0u;
    {
        const bool branch_taken_0x3dd0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0C0u;
        // 0x3dd0c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd0c0) {
            ctx->pc = 0x3DD0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd0b0;
        }
    }
    ctx->pc = 0x3DD0C8u;
label_3dd0c8:
    // 0x3dd0c8: 0xc138ddc  jal         func_4E3770
label_3dd0cc:
    if (ctx->pc == 0x3DD0CCu) {
        ctx->pc = 0x3DD0D0u;
        goto label_3dd0d0;
    }
    ctx->pc = 0x3DD0C8u;
    SET_GPR_U32(ctx, 31, 0x3DD0D0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DD0C8u, 0x3DD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD0D0u;
label_3dd0d0:
    // 0x3dd0d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3dd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dd0d4:
    // 0x3dd0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3dd0d8:
    // 0x3dd0d8: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x3dd0d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3dd0dc:
    // 0x3dd0dc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3dd0e0:
    if (ctx->pc == 0x3DD0E0u) {
        ctx->pc = 0x3DD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0DCu;
        // 0x3dd0e0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD0E4u;
        goto label_3dd0e4;
    }
    ctx->pc = 0x3DD0DCu;
    {
        const bool branch_taken_0x3dd0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0DCu;
        // 0x3dd0e0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd0dc) {
            ctx->pc = 0x3DD0E8u;
            goto label_3dd0e8;
        }
    }
    ctx->pc = 0x3DD0E4u;
label_3dd0e4:
    // 0x3dd0e4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3dd0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3dd0e8:
    // 0x3dd0e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3dd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dd0ec:
    // 0x3dd0ec: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x3dd0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_3dd0f0:
    // 0x3dd0f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd0f4:
    // 0x3dd0f4: 0xc0e9404  jal         func_3A5010
label_3dd0f8:
    if (ctx->pc == 0x3DD0F8u) {
        ctx->pc = 0x3DD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0F4u;
        // 0x3dd0f8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD0FCu;
        goto label_3dd0fc;
    }
    ctx->pc = 0x3DD0F4u;
    SET_GPR_U32(ctx, 31, 0x3DD0FCu);
    ctx->pc = 0x3DD0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD0F4u;
    // 0x3dd0f8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DD0F4u, 0x3DD0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD0FCu;
label_3dd0fc:
    // 0x3dd0fc: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3dd0fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3dd100:
    // 0x3dd100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dd104:
    // 0x3dd104: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3dd104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3dd108:
    // 0x3dd108: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dd108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dd10c:
    // 0x3dd10c: 0xc0e947e  jal         func_3A51F8
label_3dd110:
    if (ctx->pc == 0x3DD110u) {
        ctx->pc = 0x3DD110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD10Cu;
        // 0x3dd110: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD114u;
        goto label_3dd114;
    }
    ctx->pc = 0x3DD10Cu;
    SET_GPR_U32(ctx, 31, 0x3DD114u);
    ctx->pc = 0x3DD110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD10Cu;
    // 0x3dd110: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3DD10Cu, 0x3DD114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD114u;
label_3dd114:
    // 0x3dd114: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3dd118:
    if (ctx->pc == 0x3DD118u) {
        ctx->pc = 0x3DD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD114u;
        // 0x3dd118: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD11Cu;
        goto label_3dd11c;
    }
    ctx->pc = 0x3DD114u;
    {
        const bool branch_taken_0x3dd114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD114u;
        // 0x3dd118: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd114) {
            ctx->pc = 0x3DD150u;
            goto label_3dd150;
        }
    }
    ctx->pc = 0x3DD11Cu;
label_3dd11c:
    // 0x3dd11c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3dd11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3dd120:
    // 0x3dd120: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3dd124:
    if (ctx->pc == 0x3DD124u) {
        ctx->pc = 0x3DD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD120u;
        // 0x3dd124: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD128u;
        goto label_3dd128;
    }
    ctx->pc = 0x3DD120u;
    {
        const bool branch_taken_0x3dd120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD120u;
        // 0x3dd124: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd120) {
            ctx->pc = 0x3DD12Cu;
            goto label_3dd12c;
        }
    }
    ctx->pc = 0x3DD128u;
label_3dd128:
    // 0x3dd128: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3dd128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3dd12c:
    // 0x3dd12c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3dd12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3dd130:
    // 0x3dd130: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3dd130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dd134:
    // 0x3dd134: 0xc0cd4ee  jal         func_3353B8
label_3dd138:
    if (ctx->pc == 0x3DD138u) {
        ctx->pc = 0x3DD138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD134u;
        // 0x3dd138: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD13Cu;
        goto label_3dd13c;
    }
    ctx->pc = 0x3DD134u;
    SET_GPR_U32(ctx, 31, 0x3DD13Cu);
    ctx->pc = 0x3DD138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD134u;
    // 0x3dd138: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DD134u, 0x3DD13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD13Cu;
label_3dd13c:
    // 0x3dd13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd140:
    // 0x3dd140: 0xc0e858c  jal         func_3A1630
label_3dd144:
    if (ctx->pc == 0x3DD144u) {
        ctx->pc = 0x3DD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD140u;
        // 0x3dd144: 0x24450007  addiu       $a1, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD148u;
        goto label_3dd148;
    }
    ctx->pc = 0x3DD140u;
    SET_GPR_U32(ctx, 31, 0x3DD148u);
    ctx->pc = 0x3DD144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD140u;
    // 0x3dd144: 0x24450007  addiu       $a1, $v0, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DD140u, 0x3DD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD148u;
label_3dd148:
    // 0x3dd148: 0x1000000a  b           . + 4 + (0xA << 2)
label_3dd14c:
    if (ctx->pc == 0x3DD14Cu) {
        ctx->pc = 0x3DD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD148u;
        // 0x3dd14c: 0x7bb00450  lq          $s0, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD150u;
        goto label_3dd150;
    }
    ctx->pc = 0x3DD148u;
    {
        const bool branch_taken_0x3dd148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD148u;
        // 0x3dd14c: 0x7bb00450  lq          $s0, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd148) {
            ctx->pc = 0x3DD174u;
            goto label_3dd174;
        }
    }
    ctx->pc = 0x3DD150u;
label_3dd150:
    // 0x3dd150: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3dd150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3dd154:
    // 0x3dd154: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3dd158:
    if (ctx->pc == 0x3DD158u) {
        ctx->pc = 0x3DD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD154u;
        // 0x3dd158: 0x7bb00450  lq          $s0, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD15Cu;
        goto label_3dd15c;
    }
    ctx->pc = 0x3DD154u;
    {
        const bool branch_taken_0x3dd154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd154) {
            ctx->pc = 0x3DD158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD154u;
            // 0x3dd158: 0x7bb00450  lq          $s0, 0x450($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD174u;
            goto label_3dd174;
        }
    }
    ctx->pc = 0x3DD15Cu;
label_3dd15c:
    // 0x3dd15c: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x3dd15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_3dd160:
    // 0x3dd160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd164:
    // 0x3dd164: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3dd164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3dd168:
    // 0x3dd168: 0xc0e858c  jal         func_3A1630
label_3dd16c:
    if (ctx->pc == 0x3DD16Cu) {
        ctx->pc = 0x3DD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD168u;
        // 0x3dd16c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD170u;
        goto label_3dd170;
    }
    ctx->pc = 0x3DD168u;
    SET_GPR_U32(ctx, 31, 0x3DD170u);
    ctx->pc = 0x3DD16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD168u;
    // 0x3dd16c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DD168u, 0x3DD170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD170u;
label_3dd170:
    // 0x3dd170: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x3dd170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3dd174:
    // 0x3dd174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dd174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd178:
    // 0x3dd178: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x3dd178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3dd17c:
    // 0x3dd17c: 0x7bb20430  lq          $s2, 0x430($sp)
    ctx->pc = 0x3dd17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3dd180:
    // 0x3dd180: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3dd180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3dd184:
    // 0x3dd184: 0x3e00008  jr          $ra
label_3dd188:
    if (ctx->pc == 0x3DD188u) {
        ctx->pc = 0x3DD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD184u;
        // 0x3dd188: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD18Cu;
        goto label_3dd18c;
    }
    ctx->pc = 0x3DD184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD184u;
        // 0x3dd188: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD18Cu;
label_3dd18c:
    // 0x3dd18c: 0x0  nop
    ctx->pc = 0x3dd18cu;
    // NOP
    ctx->pc = 0x3dd190u;
}
