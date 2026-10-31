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

// Function: sub_004E8100
// Address: 0x4e8100 - 0x4e81a0
void sub_004E8100_0x4e8100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8100_0x4e8100");
#endif

    switch (ctx->pc) {
        case 0x4e8100u: goto label_4e8100;
        case 0x4e8104u: goto label_4e8104;
        case 0x4e8108u: goto label_4e8108;
        case 0x4e810cu: goto label_4e810c;
        case 0x4e8110u: goto label_4e8110;
        case 0x4e8114u: goto label_4e8114;
        case 0x4e8118u: goto label_4e8118;
        case 0x4e811cu: goto label_4e811c;
        case 0x4e8120u: goto label_4e8120;
        case 0x4e8124u: goto label_4e8124;
        case 0x4e8128u: goto label_4e8128;
        case 0x4e812cu: goto label_4e812c;
        case 0x4e8130u: goto label_4e8130;
        case 0x4e8134u: goto label_4e8134;
        case 0x4e8138u: goto label_4e8138;
        case 0x4e813cu: goto label_4e813c;
        case 0x4e8140u: goto label_4e8140;
        case 0x4e8144u: goto label_4e8144;
        case 0x4e8148u: goto label_4e8148;
        case 0x4e814cu: goto label_4e814c;
        case 0x4e8150u: goto label_4e8150;
        case 0x4e8154u: goto label_4e8154;
        case 0x4e8158u: goto label_4e8158;
        case 0x4e815cu: goto label_4e815c;
        case 0x4e8160u: goto label_4e8160;
        case 0x4e8164u: goto label_4e8164;
        case 0x4e8168u: goto label_4e8168;
        case 0x4e816cu: goto label_4e816c;
        case 0x4e8170u: goto label_4e8170;
        case 0x4e8174u: goto label_4e8174;
        case 0x4e8178u: goto label_4e8178;
        case 0x4e817cu: goto label_4e817c;
        case 0x4e8180u: goto label_4e8180;
        case 0x4e8184u: goto label_4e8184;
        case 0x4e8188u: goto label_4e8188;
        case 0x4e818cu: goto label_4e818c;
        case 0x4e8190u: goto label_4e8190;
        case 0x4e8194u: goto label_4e8194;
        case 0x4e8198u: goto label_4e8198;
        case 0x4e819cu: goto label_4e819c;
        default: break;
    }

    ctx->pc = 0x4e8100u;

label_4e8100:
    // 0x4e8100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e8100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e8104:
    // 0x4e8104: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e8104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e8108:
    // 0x4e8108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e8108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e810c:
    // 0x4e810c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e810cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8110:
    // 0x4e8110: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e8110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e8114:
    // 0x4e8114: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e8114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e8118:
    // 0x4e8118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e8118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e811c:
    // 0x4e811c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_4e8120:
    if (ctx->pc == 0x4E8120u) {
        ctx->pc = 0x4E8120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E811Cu;
        // 0x4e8120: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8124u;
        goto label_4e8124;
    }
    ctx->pc = 0x4E811Cu;
    {
        const bool branch_taken_0x4e811c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E811Cu;
        // 0x4e8120: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e811c) {
            ctx->pc = 0x4E8184u;
            goto label_4e8184;
        }
    }
    ctx->pc = 0x4E8124u;
label_4e8124:
    // 0x4e8124: 0xc13a01a  jal         func_4E8068
label_4e8128:
    if (ctx->pc == 0x4E8128u) {
        ctx->pc = 0x4E812Cu;
        goto label_4e812c;
    }
    ctx->pc = 0x4E8124u;
    SET_GPR_U32(ctx, 31, 0x4E812Cu);
    ctx->pc = 0x4E8068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8068u, 0x4E8124u, 0x4E812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E812Cu;
label_4e812c:
    // 0x4e812c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4e812cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e8130:
    // 0x4e8130: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e8134:
    if (ctx->pc == 0x4E8134u) {
        ctx->pc = 0x4E8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8130u;
        // 0x4e8134: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8138u;
        goto label_4e8138;
    }
    ctx->pc = 0x4E8130u;
    {
        const bool branch_taken_0x4e8130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8130u;
        // 0x4e8134: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8130) {
            ctx->pc = 0x4E815Cu;
            goto label_4e815c;
        }
    }
    ctx->pc = 0x4E8138u;
label_4e8138:
    // 0x4e8138: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e8138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e813c:
    // 0x4e813c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e813cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e8140:
    // 0x4e8140: 0x24c65998  addiu       $a2, $a2, 0x5998
    ctx->pc = 0x4e8140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22936));
label_4e8144:
    // 0x4e8144: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e8144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e8148:
    // 0x4e8148: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e8148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e814c:
    // 0x4e814c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e814cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e8150:
    // 0x4e8150: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e8150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e8154:
    // 0x4e8154: 0x60f809  jalr        $v1
label_4e8158:
    if (ctx->pc == 0x4E8158u) {
        ctx->pc = 0x4E8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8154u;
        // 0x4e8158: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E815Cu;
        goto label_4e815c;
    }
    ctx->pc = 0x4E8154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E815Cu);
        ctx->pc = 0x4E8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8154u;
        // 0x4e8158: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8154u, 0x4E815Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E815Cu;
label_4e815c:
    // 0x4e815c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e8160:
    // 0x4e8160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e8160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e8164:
    // 0x4e8164: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e8164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e8168:
    // 0x4e8168: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e8168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e816c:
    // 0x4e816c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e816cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8170:
    // 0x4e8170: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e8170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e8174:
    // 0x4e8174: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e8174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e8178:
    // 0x4e8178: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e8178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e817c:
    // 0x4e817c: 0x60f809  jalr        $v1
label_4e8180:
    if (ctx->pc == 0x4E8180u) {
        ctx->pc = 0x4E8180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E817Cu;
        // 0x4e8180: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8184u;
        goto label_4e8184;
    }
    ctx->pc = 0x4E817Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E8184u);
        ctx->pc = 0x4E8180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E817Cu;
        // 0x4e8180: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E817Cu, 0x4E8184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E8184u;
label_4e8184:
    // 0x4e8184: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e8184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e8188:
    // 0x4e8188: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e8188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e818c:
    // 0x4e818c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e818cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8190:
    // 0x4e8190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8194:
    // 0x4e8194: 0x3e00008  jr          $ra
label_4e8198:
    if (ctx->pc == 0x4E8198u) {
        ctx->pc = 0x4E8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8194u;
        // 0x4e8198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E819Cu;
        goto label_4e819c;
    }
    ctx->pc = 0x4E8194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8194u;
        // 0x4e8198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E819Cu;
label_4e819c:
    // 0x4e819c: 0x0  nop
    ctx->pc = 0x4e819cu;
    // NOP
    ctx->pc = 0x4e81a0u;
}
