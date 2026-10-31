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

// Function: sub_00231AC8
// Address: 0x231ac8 - 0x231b60
void sub_00231AC8_0x231ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231AC8_0x231ac8");
#endif

    switch (ctx->pc) {
        case 0x231af4u: goto label_231af4;
        case 0x231afcu: goto label_231afc;
        case 0x231b14u: goto label_231b14;
        case 0x231b34u: goto label_231b34;
        case 0x231b48u: goto label_231b48;
        default: break;
    }

    ctx->pc = 0x231ac8u;

    // 0x231ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231acc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x231accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x231ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x231ad4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x231ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231adc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x231ADCu;
    {
        const bool branch_taken_0x231adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x231AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231ADCu;
        // 0x231ae0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231adc) {
            ctx->pc = 0x231AECu;
            goto label_231aec;
        }
    }
    ctx->pc = 0x231AE4u;
    // 0x231ae4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x231AE4u;
    {
        const bool branch_taken_0x231ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AE4u;
        // 0x231ae8: 0x2410025c  addiu       $s0, $zero, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ae4) {
            ctx->pc = 0x231B24u;
            goto label_231b24;
        }
    }
    ctx->pc = 0x231AECu;
label_231aec:
    // 0x231aec: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x231AECu;
    SET_GPR_U32(ctx, 31, 0x231AF4u);
    ctx->pc = 0x231AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AECu;
    // 0x231af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x231AECu, 0x231AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AF4u;
label_231af4:
    // 0x231af4: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x231AF4u;
    SET_GPR_U32(ctx, 31, 0x231AFCu);
    ctx->pc = 0x231AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AF4u;
    // 0x231af8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x231AF4u, 0x231AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AFCu;
label_231afc:
    // 0x231afc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x231afcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x231B00u;
    {
        const bool branch_taken_0x231b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B00u;
        // 0x231b04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b00) {
            ctx->pc = 0x231B24u;
            goto label_231b24;
        }
    }
    ctx->pc = 0x231B08u;
    // 0x231b08: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x231b08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x231b0c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x231B0Cu;
    SET_GPR_U32(ctx, 31, 0x231B14u);
    ctx->pc = 0x231B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B0Cu;
    // 0x231b10: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x231B0Cu, 0x231B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B14u;
label_231b14:
    // 0x231b14: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x231b14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x231b18: 0x2402025a  addiu       $v0, $zero, 0x25A
    ctx->pc = 0x231b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
    // 0x231b1c: 0x3863000b  xori        $v1, $v1, 0xB
    ctx->pc = 0x231b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)11);
    // 0x231b20: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x231b20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_231b24:
    // 0x231b24: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x231b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x231b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b2c: 0xc089998  jal         func_226660
    ctx->pc = 0x231B2Cu;
    SET_GPR_U32(ctx, 31, 0x231B34u);
    ctx->pc = 0x231B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B2Cu;
    // 0x231b30: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x231B2Cu, 0x231B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B34u;
label_231b34:
    // 0x231b34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x231B34u;
    {
        const bool branch_taken_0x231b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231b34) {
            ctx->pc = 0x231B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231B34u;
            // 0x231b38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231B4Cu;
            goto label_231b4c;
        }
    }
    ctx->pc = 0x231B3Cu;
    // 0x231b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b40: 0xc097bd6  jal         func_25EF58
    ctx->pc = 0x231B40u;
    SET_GPR_U32(ctx, 31, 0x231B48u);
    ctx->pc = 0x231B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B40u;
    // 0x231b44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EF58u, 0x231B40u, 0x231B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B48u;
label_231b48:
    // 0x231b48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x231b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_231b4c:
    // 0x231b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231b54: 0x3e00008  jr          $ra
    ctx->pc = 0x231B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B54u;
        // 0x231b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231B5Cu;
    // 0x231b5c: 0x0  nop
    ctx->pc = 0x231b5cu;
    // NOP
    ctx->pc = 0x231b60u;
}
