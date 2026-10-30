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

// Function: sub_0028A248
// Address: 0x28a248 - 0x28a328
void sub_0028A248_0x28a248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A248_0x28a248");
#endif

    switch (ctx->pc) {
        case 0x28a280u: goto label_28a280;
        case 0x28a2b4u: goto label_28a2b4;
        case 0x28a2e4u: goto label_28a2e4;
        default: break;
    }

    ctx->pc = 0x28a248u;

    // 0x28a248: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28a248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28a24c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28a24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28a250: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28a250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28a254: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28a254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a258: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x28a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x28a25c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28a25cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a260: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x28a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x28a264: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a268: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x28a26c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x28a26cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a270: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x28a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x28a274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a278: 0xc087502  jal         func_21D408
    ctx->pc = 0x28A278u;
    SET_GPR_U32(ctx, 31, 0x28A280u);
    ctx->pc = 0x28A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A278u;
    // 0x28a27c: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28A278u, 0x28A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A280u;
label_28a280:
    // 0x28a280: 0x245100a0  addiu       $s1, $v0, 0xA0
    ctx->pc = 0x28a280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x28a284: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a288: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x28a288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x28a28c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x28a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28a290: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A290u;
    {
        const bool branch_taken_0x28a290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x28A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A290u;
        // 0x28a294: 0x30620006  andi        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a290) {
            ctx->pc = 0x28A2A0u;
            goto label_28a2a0;
        }
    }
    ctx->pc = 0x28A298u;
    // 0x28a298: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28A298u;
    {
        const bool branch_taken_0x28a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A298u;
        // 0x28a29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a298) {
            ctx->pc = 0x28A300u;
            goto label_28a300;
        }
    }
    ctx->pc = 0x28A2A0u;
label_28a2a0:
    // 0x28a2a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28a2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28a2a4: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28A2A4u;
    {
        const bool branch_taken_0x28a2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x28A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2A4u;
        // 0x28a2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2a4) {
            ctx->pc = 0x28A300u;
            goto label_28a300;
        }
    }
    ctx->pc = 0x28A2ACu;
    // 0x28a2ac: 0xc087502  jal         func_21D408
    ctx->pc = 0x28A2ACu;
    SET_GPR_U32(ctx, 31, 0x28A2B4u);
    ctx->pc = 0x28A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A2ACu;
    // 0x28a2b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28A2ACu, 0x28A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2B4u;
label_28a2b4:
    // 0x28a2b4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x28a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x28a2b8: 0x245000a0  addiu       $s0, $v0, 0xA0
    ctx->pc = 0x28a2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x28a2bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2c4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x28a2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x28a2c8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28a2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2cc: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x28a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x28a2d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28a2d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2d4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x28a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28a2d8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x28a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x28a2dc: 0xc0a27b4  jal         func_289ED0
    ctx->pc = 0x28A2DCu;
    SET_GPR_U32(ctx, 31, 0x28A2E4u);
    ctx->pc = 0x28A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A2DCu;
    // 0x28a2e0: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289ED0u, 0x28A2DCu, 0x28A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2E4u;
label_28a2e4:
    // 0x28a2e4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x28a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x28a2e8: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x28a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x28a2ec: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x28a2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x28a2f0: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x28a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
    // 0x28a2f4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x28a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28a2f8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x28a2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x28a2fc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x28a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_28a300:
    // 0x28a300: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28a300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a304: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28a304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a308: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28a308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a30c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28a30cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a310: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x28a310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a314: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x28a314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a31c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A31Cu;
        // 0x28a320: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A324u;
    // 0x28a324: 0x0  nop
    ctx->pc = 0x28a324u;
    // NOP
    ctx->pc = 0x28a328u;
}
