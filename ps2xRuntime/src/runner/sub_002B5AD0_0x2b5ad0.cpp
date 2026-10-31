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

// Function: sub_002B5AD0
// Address: 0x2b5ad0 - 0x2b5b58
void sub_002B5AD0_0x2b5ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5AD0_0x2b5ad0");
#endif

    switch (ctx->pc) {
        case 0x2b5afcu: goto label_2b5afc;
        case 0x2b5b14u: goto label_2b5b14;
        case 0x2b5b28u: goto label_2b5b28;
        case 0x2b5b3cu: goto label_2b5b3c;
        default: break;
    }

    ctx->pc = 0x2b5ad0u;

    // 0x2b5ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5ad4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2b5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2b5ad8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b5ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b5adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ae8: 0x8c64caa8  lw          $a0, -0x3558($v1)
    ctx->pc = 0x2b5ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CAA8u));
    // 0x2b5aec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b5aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5af0: 0x8ca2020c  lw          $v0, 0x20C($a1)
    ctx->pc = 0x2b5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x2b5af4: 0xc05914a  jal         func_164528
    ctx->pc = 0x2B5AF4u;
    SET_GPR_U32(ctx, 31, 0x2B5AFCu);
    ctx->pc = 0x2B5AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5AF4u;
    // 0x2b5af8: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164528u, 0x2B5AF4u, 0x2B5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5AFCu;
label_2b5afc:
    // 0x2b5afc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b5b00: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2b5b04: 0x438018  mult        $s0, $v0, $v1
    ctx->pc = 0x2b5b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b5b08: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b5b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2b5b0c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2B5B14u);
    ctx->pc = 0x2B5B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B0Cu;
    // 0x2b5b10: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B5B0Cu, 0x2B5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B14u;
label_2b5b14:
    // 0x2b5b14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5b18: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2b5b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2b5b1c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2b5b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2b5b20: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2B5B20u;
    SET_GPR_U32(ctx, 31, 0x2B5B28u);
    ctx->pc = 0x2B5B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B20u;
    // 0x2b5b24: 0xa2220014  sb          $v0, 0x14($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2B5B20u, 0x2B5B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B28u;
label_2b5b28:
    // 0x2b5b28: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B5B28u;
    {
        const bool branch_taken_0x2b5b28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2b5b28) {
            ctx->pc = 0x2B5B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5B28u;
            // 0x2b5b2c: 0xa2200014  sb          $zero, 0x14($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5B30u;
            goto label_2b5b30;
        }
    }
    ctx->pc = 0x2B5B30u;
label_2b5b30:
    // 0x2b5b30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5b34: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2B5B34u;
    SET_GPR_U32(ctx, 31, 0x2B5B3Cu);
    ctx->pc = 0x2B5B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B34u;
    // 0x2b5b38: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2B5B34u, 0x2B5B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B3Cu;
label_2b5b3c:
    // 0x2b5b3c: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B5B3Cu;
    {
        const bool branch_taken_0x2b5b3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2b5b3c) {
            ctx->pc = 0x2B5B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5B3Cu;
            // 0x2b5b40: 0xa2200014  sb          $zero, 0x14($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5B44u;
            goto label_2b5b44;
        }
    }
    ctx->pc = 0x2B5B44u;
label_2b5b44:
    // 0x2b5b44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b5b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5b50: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B50u;
        // 0x2b5b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5B58u;
}
