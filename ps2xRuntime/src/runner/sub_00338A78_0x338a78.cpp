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

// Function: sub_00338A78
// Address: 0x338a78 - 0x338b38
void sub_00338A78_0x338a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338A78_0x338a78");
#endif

    switch (ctx->pc) {
        case 0x338aacu: goto label_338aac;
        default: break;
    }

    ctx->pc = 0x338a78u;

    // 0x338a78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x338a7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x338a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x338a80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338a84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x338a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x338a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338a90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x338a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a94: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x338a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x338a98: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x338a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x338a9c: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x338a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x338aa0: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x338aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x338aa4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x338AA4u;
    SET_GPR_U32(ctx, 31, 0x338AACu);
    ctx->pc = 0x338AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338AA4u;
    // 0x338aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x338AA4u, 0x338AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AACu;
label_338aac:
    // 0x338aac: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x338aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x338ab0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338ab4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x338ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x338ab8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x338ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x338abc: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x338abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
    // 0x338ac0: 0x24638948  addiu       $v1, $v1, -0x76B8
    ctx->pc = 0x338ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936904));
    // 0x338ac4: 0x8ce627f4  lw          $a2, 0x27F4($a3)
    ctx->pc = 0x338ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5127F4u));
    // 0x338ac8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x338ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x338acc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x338accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x338ad0: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x338ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x338ad4: 0x108282  srl         $s0, $s0, 10
    ctx->pc = 0x338ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 10));
    // 0x338ad8: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x338ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x338adc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x338adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x338ae0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x338ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x338ae4: 0x244204f7  addiu       $v0, $v0, 0x4F7
    ctx->pc = 0x338ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1271));
    // 0x338ae8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x338ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x338aec: 0xac6200a8  sw          $v0, 0xA8($v1)
    ctx->pc = 0x338aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
    // 0x338af0: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x338af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x338af4: 0xac6200ac  sw          $v0, 0xAC($v1)
    ctx->pc = 0x338af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 2));
    // 0x338af8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x338af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x338afc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x338afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x338b00: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x338b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x338b04: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x338b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x338b08: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x338b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x338b0c: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x338b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x338b10: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x338b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x338b14: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x338B14u;
    {
        const bool branch_taken_0x338b14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x338B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B14u;
        // 0x338b18: 0xac50002c  sw          $s0, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b14) {
            ctx->pc = 0x338B24u;
            goto label_338b24;
        }
    }
    ctx->pc = 0x338B1Cu;
    // 0x338b1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x338b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x338b20: 0xace227f4  sw          $v0, 0x27F4($a3)
    ctx->pc = 0x338b20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 10228), GPR_U32(ctx, 2));
label_338b24:
    // 0x338b24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x338b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338b30: 0x3e00008  jr          $ra
    ctx->pc = 0x338B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B30u;
        // 0x338b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338B38u;
}
