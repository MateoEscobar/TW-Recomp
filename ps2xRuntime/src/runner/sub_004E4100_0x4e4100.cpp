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

// Function: sub_004E4100
// Address: 0x4e4100 - 0x4e41a0
void sub_004E4100_0x4e4100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4100_0x4e4100");
#endif

    switch (ctx->pc) {
        case 0x4e4100u: goto label_4e4100;
        case 0x4e4104u: goto label_4e4104;
        case 0x4e4108u: goto label_4e4108;
        case 0x4e410cu: goto label_4e410c;
        case 0x4e4110u: goto label_4e4110;
        case 0x4e4114u: goto label_4e4114;
        case 0x4e4118u: goto label_4e4118;
        case 0x4e411cu: goto label_4e411c;
        case 0x4e4120u: goto label_4e4120;
        case 0x4e4124u: goto label_4e4124;
        case 0x4e4128u: goto label_4e4128;
        case 0x4e412cu: goto label_4e412c;
        case 0x4e4130u: goto label_4e4130;
        case 0x4e4134u: goto label_4e4134;
        case 0x4e4138u: goto label_4e4138;
        case 0x4e413cu: goto label_4e413c;
        case 0x4e4140u: goto label_4e4140;
        case 0x4e4144u: goto label_4e4144;
        case 0x4e4148u: goto label_4e4148;
        case 0x4e414cu: goto label_4e414c;
        case 0x4e4150u: goto label_4e4150;
        case 0x4e4154u: goto label_4e4154;
        case 0x4e4158u: goto label_4e4158;
        case 0x4e415cu: goto label_4e415c;
        case 0x4e4160u: goto label_4e4160;
        case 0x4e4164u: goto label_4e4164;
        case 0x4e4168u: goto label_4e4168;
        case 0x4e416cu: goto label_4e416c;
        case 0x4e4170u: goto label_4e4170;
        case 0x4e4174u: goto label_4e4174;
        case 0x4e4178u: goto label_4e4178;
        case 0x4e417cu: goto label_4e417c;
        case 0x4e4180u: goto label_4e4180;
        case 0x4e4184u: goto label_4e4184;
        case 0x4e4188u: goto label_4e4188;
        case 0x4e418cu: goto label_4e418c;
        case 0x4e4190u: goto label_4e4190;
        case 0x4e4194u: goto label_4e4194;
        case 0x4e4198u: goto label_4e4198;
        case 0x4e419cu: goto label_4e419c;
        default: break;
    }

    ctx->pc = 0x4e4100u;

label_4e4100:
    // 0x4e4100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e4100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e4104:
    // 0x4e4104: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e4104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e4108:
    // 0x4e4108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e4108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e410c:
    // 0x4e410c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e410cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4110:
    // 0x4e4110: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e4110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e4114:
    // 0x4e4114: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e4114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4118:
    // 0x4e4118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e411c:
    // 0x4e411c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_4e4120:
    if (ctx->pc == 0x4E4120u) {
        ctx->pc = 0x4E4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E411Cu;
        // 0x4e4120: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4124u;
        goto label_4e4124;
    }
    ctx->pc = 0x4E411Cu;
    {
        const bool branch_taken_0x4e411c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E411Cu;
        // 0x4e4120: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e411c) {
            ctx->pc = 0x4E4184u;
            goto label_4e4184;
        }
    }
    ctx->pc = 0x4E4124u;
label_4e4124:
    // 0x4e4124: 0xc13901a  jal         func_4E4068
label_4e4128:
    if (ctx->pc == 0x4E4128u) {
        ctx->pc = 0x4E412Cu;
        goto label_4e412c;
    }
    ctx->pc = 0x4E4124u;
    SET_GPR_U32(ctx, 31, 0x4E412Cu);
    ctx->pc = 0x4E4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4068u, 0x4E4124u, 0x4E412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E412Cu;
label_4e412c:
    // 0x4e412c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4e412cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e4130:
    // 0x4e4130: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e4134:
    if (ctx->pc == 0x4E4134u) {
        ctx->pc = 0x4E4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4130u;
        // 0x4e4134: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4138u;
        goto label_4e4138;
    }
    ctx->pc = 0x4E4130u;
    {
        const bool branch_taken_0x4e4130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4130u;
        // 0x4e4134: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4130) {
            ctx->pc = 0x4E415Cu;
            goto label_4e415c;
        }
    }
    ctx->pc = 0x4E4138u;
label_4e4138:
    // 0x4e4138: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e4138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e413c:
    // 0x4e413c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e413cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e4140:
    // 0x4e4140: 0x24c63ee0  addiu       $a2, $a2, 0x3EE0
    ctx->pc = 0x4e4140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16096));
label_4e4144:
    // 0x4e4144: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e4144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e4148:
    // 0x4e4148: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e414c:
    // 0x4e414c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e414cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e4150:
    // 0x4e4150: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e4150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e4154:
    // 0x4e4154: 0x60f809  jalr        $v1
label_4e4158:
    if (ctx->pc == 0x4E4158u) {
        ctx->pc = 0x4E4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4154u;
        // 0x4e4158: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E415Cu;
        goto label_4e415c;
    }
    ctx->pc = 0x4E4154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E415Cu);
        ctx->pc = 0x4E4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4154u;
        // 0x4e4158: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4154u, 0x4E415Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E415Cu;
label_4e415c:
    // 0x4e415c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e4160:
    // 0x4e4160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e4160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e4164:
    // 0x4e4164: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e4164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e4168:
    // 0x4e4168: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e4168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e416c:
    // 0x4e416c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e416cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4170:
    // 0x4e4170: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e4174:
    // 0x4e4174: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e4174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e4178:
    // 0x4e4178: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e417c:
    // 0x4e417c: 0x60f809  jalr        $v1
label_4e4180:
    if (ctx->pc == 0x4E4180u) {
        ctx->pc = 0x4E4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E417Cu;
        // 0x4e4180: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4184u;
        goto label_4e4184;
    }
    ctx->pc = 0x4E417Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4184u);
        ctx->pc = 0x4E4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E417Cu;
        // 0x4e4180: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E417Cu, 0x4E4184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4184u;
label_4e4184:
    // 0x4e4184: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e4184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4188:
    // 0x4e4188: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e4188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e418c:
    // 0x4e418c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e418cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4190:
    // 0x4e4190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4194:
    // 0x4e4194: 0x3e00008  jr          $ra
label_4e4198:
    if (ctx->pc == 0x4E4198u) {
        ctx->pc = 0x4E4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4194u;
        // 0x4e4198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E419Cu;
        goto label_4e419c;
    }
    ctx->pc = 0x4E4194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4194u;
        // 0x4e4198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E419Cu;
label_4e419c:
    // 0x4e419c: 0x0  nop
    ctx->pc = 0x4e419cu;
    // NOP
    ctx->pc = 0x4e41a0u;
}
