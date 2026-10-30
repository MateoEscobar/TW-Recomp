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

// Function: sub_00236B38
// Address: 0x236b38 - 0x236be0
void sub_00236B38_0x236b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236B38_0x236b38");
#endif

    switch (ctx->pc) {
        case 0x236b54u: goto label_236b54;
        case 0x236b5cu: goto label_236b5c;
        default: break;
    }

    ctx->pc = 0x236b38u;

    // 0x236b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236b3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x236b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x236b40: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x236b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x236b44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236b4c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x236B4Cu;
    SET_GPR_U32(ctx, 31, 0x236B54u);
    ctx->pc = 0x236B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B4Cu;
    // 0x236b50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x236B4Cu, 0x236B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B54u;
label_236b54:
    // 0x236b54: 0xc08a61a  jal         func_229868
    ctx->pc = 0x236B54u;
    SET_GPR_U32(ctx, 31, 0x236B5Cu);
    ctx->pc = 0x236B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B54u;
    // 0x236b58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x236B54u, 0x236B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B5Cu;
label_236b5c:
    // 0x236b5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x236b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b60: 0x50e0001c  beql        $a3, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x236B60u;
    {
        const bool branch_taken_0x236b60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x236b60) {
            ctx->pc = 0x236B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236B60u;
            // 0x236b64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236BD4u;
            goto label_236bd4;
        }
    }
    ctx->pc = 0x236B68u;
    // 0x236b68: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236B68u;
    {
        const bool branch_taken_0x236b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B68u;
        // 0x236b6c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b68) {
            ctx->pc = 0x236B80u;
            goto label_236b80;
        }
    }
    ctx->pc = 0x236B70u;
    // 0x236b70: 0xdce200e0  ld          $v0, 0xE0($a3)
    ctx->pc = 0x236b70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x236b74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236b78: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x236B78u;
    {
        const bool branch_taken_0x236b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B78u;
        // 0x236b7c: 0xfce200e0  sd          $v0, 0xE0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b78) {
            ctx->pc = 0x236BD0u;
            goto label_236bd0;
        }
    }
    ctx->pc = 0x236B80u;
label_236b80:
    // 0x236b80: 0xdce200e0  ld          $v0, 0xE0($a3)
    ctx->pc = 0x236b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x236b84: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x236b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x236b88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x236b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x236b8c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x236b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x236b90: 0xace00654  sw          $zero, 0x654($a3)
    ctx->pc = 0x236b90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1620), GPR_U32(ctx, 0));
    // 0x236b94: 0x8c85b734  lw          $a1, -0x48CC($a0)
    ctx->pc = 0x236b94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x236b98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x236b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x236b9c: 0xfce200e0  sd          $v0, 0xE0($a3)
    ctx->pc = 0x236b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 224), GPR_U64(ctx, 2));
    // 0x236ba0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x236ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x236ba4: 0x8c660290  lw          $a2, 0x290($v1)
    ctx->pc = 0x236ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x510290u));
    // 0x236ba8: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x236ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x236bac: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x236bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x236bb0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x236bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x236bb4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x236bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x236bb8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x236bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x236bbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x236bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236bc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x236bc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x236bc4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x236BC4u;
    {
        const bool branch_taken_0x236bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BC4u;
        // 0x236bc8: 0xace3064c  sw          $v1, 0x64C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bc4) {
            ctx->pc = 0x236BD0u;
            goto label_236bd0;
        }
    }
    ctx->pc = 0x236BCCu;
    // 0x236bcc: 0xace00648  sw          $zero, 0x648($a3)
    ctx->pc = 0x236bccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1608), GPR_U32(ctx, 0));
label_236bd0:
    // 0x236bd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236bd4:
    // 0x236bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x236BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BD8u;
        // 0x236bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236BE0u;
}
