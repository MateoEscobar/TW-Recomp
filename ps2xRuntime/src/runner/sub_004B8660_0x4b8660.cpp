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

// Function: sub_004B8660
// Address: 0x4b8660 - 0x4b8748
void sub_004B8660_0x4b8660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8660_0x4b8660");
#endif

    switch (ctx->pc) {
        case 0x4b86d4u: goto label_4b86d4;
        default: break;
    }

    ctx->pc = 0x4b8660u;

    // 0x4b8660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b8660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b8664: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4b8664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8668: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b8668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b866c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b866cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8670: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b8670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b8674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b8674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b8678: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x4b8678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b867c: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x4b867cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b8680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x4b8680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b8684: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b8684u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b8688: 0x3c107fff  lui         $s0, 0x7FFF
    ctx->pc = 0x4b8688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
    // 0x4b868c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4b868cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4b8690: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x4b8690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x4b8694: 0xd02824  and         $a1, $a2, $s0
    ctx->pc = 0x4b8694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x4b8698: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b8698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b869c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4b869cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4b86a0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4B86A0u;
    {
        const bool branch_taken_0x4b86a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B86A0u;
        // 0x4b86a4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b86a0) {
            ctx->pc = 0x4B8730u;
            goto label_4b8730;
        }
    }
    ctx->pc = 0x4B86A8u;
    // 0x4b86a8: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x4b86a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4b86ac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4B86ACu;
    {
        const bool branch_taken_0x4b86ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B86ACu;
        // 0x4b86b0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b86ac) {
            ctx->pc = 0x4B8730u;
            goto label_4b8730;
        }
    }
    ctx->pc = 0x4B86B4u;
    // 0x4b86b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b86b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b86b8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4b86b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4b86bc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4B86BCu;
    {
        const bool branch_taken_0x4b86bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b86bc) {
            ctx->pc = 0x4B86C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B86BCu;
            // 0x4b86c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B86F0u;
            goto label_4b86f0;
        }
    }
    ctx->pc = 0x4B86C4u;
    // 0x4b86c4: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x4b86c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x4b86c8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b86c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b86cc: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B86CCu;
    SET_GPR_U32(ctx, 31, 0x4B86D4u);
    ctx->pc = 0x4B86D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B86CCu;
    // 0x4b86d0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B86CCu, 0x4B86D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B86D4u;
label_4b86d4:
    // 0x4b86d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4b86d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b86d8: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x4b86d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b86dc: 0xd02824  and         $a1, $a2, $s0
    ctx->pc = 0x4b86dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x4b86e0: 0x2402ffca  addiu       $v0, $zero, -0x36
    ctx->pc = 0x4b86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x4b86e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b86e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b86e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4b86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b86ec: 0x0  nop
    ctx->pc = 0x4b86ecu;
    // NOP
label_4b86f0:
    // 0x4b86f0: 0x3c03800f  lui         $v1, 0x800F
    ctx->pc = 0x4b86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32783 << 16));
    // 0x4b86f4: 0x52d03  sra         $a1, $a1, 20
    ctx->pc = 0x4b86f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 20));
    // 0x4b86f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b86f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b86fc: 0x2484fc02  addiu       $a0, $a0, -0x3FE
    ctx->pc = 0x4b86fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966274));
    // 0x4b8700: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x4b8700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4b8704: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4b8704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4b8708: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x4b8708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x4b870c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4b870cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b8710: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4b8710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4b8714: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x4b8714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8718: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b8718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b871c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4b871cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4b8720: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x4b8720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b8724: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b8724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b8728: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x4b8728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b872c: 0x0  nop
    ctx->pc = 0x4b872cu;
    // NOP
label_4b8730:
    // 0x4b8730: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x4b8730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8734: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b8734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b8738: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b8738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b873c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b873cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8740: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8740u;
        // 0x4b8744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8748u;
}
