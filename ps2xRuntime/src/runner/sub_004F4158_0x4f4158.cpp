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

// Function: sub_004F4158
// Address: 0x4f4158 - 0x4f4220
void sub_004F4158_0x4f4158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4158_0x4f4158");
#endif

    switch (ctx->pc) {
        case 0x4f4158u: goto label_4f4158;
        case 0x4f415cu: goto label_4f415c;
        case 0x4f4160u: goto label_4f4160;
        case 0x4f4164u: goto label_4f4164;
        case 0x4f4168u: goto label_4f4168;
        case 0x4f416cu: goto label_4f416c;
        case 0x4f4170u: goto label_4f4170;
        case 0x4f4174u: goto label_4f4174;
        case 0x4f4178u: goto label_4f4178;
        case 0x4f417cu: goto label_4f417c;
        case 0x4f4180u: goto label_4f4180;
        case 0x4f4184u: goto label_4f4184;
        case 0x4f4188u: goto label_4f4188;
        case 0x4f418cu: goto label_4f418c;
        case 0x4f4190u: goto label_4f4190;
        case 0x4f4194u: goto label_4f4194;
        case 0x4f4198u: goto label_4f4198;
        case 0x4f419cu: goto label_4f419c;
        case 0x4f41a0u: goto label_4f41a0;
        case 0x4f41a4u: goto label_4f41a4;
        case 0x4f41a8u: goto label_4f41a8;
        case 0x4f41acu: goto label_4f41ac;
        case 0x4f41b0u: goto label_4f41b0;
        case 0x4f41b4u: goto label_4f41b4;
        case 0x4f41b8u: goto label_4f41b8;
        case 0x4f41bcu: goto label_4f41bc;
        case 0x4f41c0u: goto label_4f41c0;
        case 0x4f41c4u: goto label_4f41c4;
        case 0x4f41c8u: goto label_4f41c8;
        case 0x4f41ccu: goto label_4f41cc;
        case 0x4f41d0u: goto label_4f41d0;
        case 0x4f41d4u: goto label_4f41d4;
        case 0x4f41d8u: goto label_4f41d8;
        case 0x4f41dcu: goto label_4f41dc;
        case 0x4f41e0u: goto label_4f41e0;
        case 0x4f41e4u: goto label_4f41e4;
        case 0x4f41e8u: goto label_4f41e8;
        case 0x4f41ecu: goto label_4f41ec;
        case 0x4f41f0u: goto label_4f41f0;
        case 0x4f41f4u: goto label_4f41f4;
        case 0x4f41f8u: goto label_4f41f8;
        case 0x4f41fcu: goto label_4f41fc;
        case 0x4f4200u: goto label_4f4200;
        case 0x4f4204u: goto label_4f4204;
        case 0x4f4208u: goto label_4f4208;
        case 0x4f420cu: goto label_4f420c;
        case 0x4f4210u: goto label_4f4210;
        case 0x4f4214u: goto label_4f4214;
        case 0x4f4218u: goto label_4f4218;
        case 0x4f421cu: goto label_4f421c;
        default: break;
    }

    ctx->pc = 0x4f4158u;

label_4f4158:
    // 0x4f4158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f4158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f415c:
    // 0x4f415c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f4160:
    // 0x4f4160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f4160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f4164:
    // 0x4f4164: 0x24425868  addiu       $v0, $v0, 0x5868
    ctx->pc = 0x4f4164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22632));
label_4f4168:
    // 0x4f4168: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4f4168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4f416c:
    // 0x4f416c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x4f416cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_4f4170:
    // 0x4f4170: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f4170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4174:
    // 0x4f4174: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4f4174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4f4178:
    // 0x4f4178: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4f4178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4f417c:
    // 0x4f417c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x4f417cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_4f4180:
    // 0x4f4180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f4184:
    // 0x4f4184: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f4184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f4188:
    // 0x4f4188: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f4188u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f418c:
    // 0x4f418c: 0x26101438  addiu       $s0, $s0, 0x1438
    ctx->pc = 0x4f418cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5176));
label_4f4190:
    // 0x4f4190: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f4190u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f4194:
    // 0x4f4194: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f4194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4198:
    // 0x4f4198: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f4198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f419c:
    // 0x4f419c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x4f419cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4f41a0:
    // 0x4f41a0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f41a4:
    // 0x4f41a4: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4f41a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4f41a8:
    // 0x4f41a8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4f41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4f41ac:
    // 0x4f41ac: 0x40f809  jalr        $v0
label_4f41b0:
    if (ctx->pc == 0x4F41B0u) {
        ctx->pc = 0x4F41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F41ACu;
        // 0x4f41b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F41B4u;
        goto label_4f41b4;
    }
    ctx->pc = 0x4F41ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F41B4u);
        ctx->pc = 0x4F41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F41ACu;
        // 0x4f41b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F41ACu, 0x4F41B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F41B4u;
label_4f41b4:
    // 0x4f41b4: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f41b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f41b8:
    // 0x4f41b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f41b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f41bc:
    // 0x4f41bc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x4f41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_4f41c0:
    // 0x4f41c0: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x4f41c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_4f41c4:
    // 0x4f41c4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4f41c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f41c8:
    // 0x4f41c8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f41cc:
    // 0x4f41cc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f41ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f41d0:
    // 0x4f41d0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f41d4:
    // 0x4f41d4: 0x60f809  jalr        $v1
label_4f41d8:
    if (ctx->pc == 0x4F41D8u) {
        ctx->pc = 0x4F41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F41D4u;
        // 0x4f41d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F41DCu;
        goto label_4f41dc;
    }
    ctx->pc = 0x4F41D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F41DCu);
        ctx->pc = 0x4F41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F41D4u;
        // 0x4f41d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F41D4u, 0x4F41DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F41DCu;
label_4f41dc:
    // 0x4f41dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f41e0:
    // 0x4f41e0: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x4f41e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_4f41e4:
    // 0x4f41e4: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x4f41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_4f41e8:
    // 0x4f41e8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x4f41e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_4f41ec:
    // 0x4f41ec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f41ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f41f0:
    // 0x4f41f0: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4f41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_4f41f4:
    // 0x4f41f4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4f41f8:
    if (ctx->pc == 0x4F41F8u) {
        ctx->pc = 0x4F41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F41F4u;
        // 0x4f41f8: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F41FCu;
        goto label_4f41fc;
    }
    ctx->pc = 0x4F41F4u;
    {
        const bool branch_taken_0x4f41f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F41F4u;
        // 0x4f41f8: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f41f4) {
            ctx->pc = 0x4F4204u;
            goto label_4f4204;
        }
    }
    ctx->pc = 0x4F41FCu;
label_4f41fc:
    // 0x4f41fc: 0xc10b208  jal         func_42C820
label_4f4200:
    if (ctx->pc == 0x4F4200u) {
        ctx->pc = 0x4F4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F41FCu;
        // 0x4f4200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4204u;
        goto label_4f4204;
    }
    ctx->pc = 0x4F41FCu;
    SET_GPR_U32(ctx, 31, 0x4F4204u);
    ctx->pc = 0x4F4200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F41FCu;
    // 0x4f4200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F41FCu, 0x4F4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4204u;
label_4f4204:
    // 0x4f4204: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4f4204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f4208:
    // 0x4f4208: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4f4208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f420c:
    // 0x4f420c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f420cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4210:
    // 0x4f4210: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4f4210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4214:
    // 0x4f4214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4218:
    // 0x4f4218: 0x3e00008  jr          $ra
label_4f421c:
    if (ctx->pc == 0x4F421Cu) {
        ctx->pc = 0x4F421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4218u;
        // 0x4f421c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4220u;
        goto label_fallthrough_0x4f4218;
    }
    ctx->pc = 0x4F4218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4218u;
        // 0x4f421c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f4218:
    ctx->pc = 0x4F4220u;
}
