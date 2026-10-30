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

// Function: sub_00453AB0
// Address: 0x453ab0 - 0x453b60
void sub_00453AB0_0x453ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453AB0_0x453ab0");
#endif

    switch (ctx->pc) {
        case 0x453b40u: goto label_453b40;
        default: break;
    }

    ctx->pc = 0x453ab0u;

    // 0x453ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x453ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x453ab4: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x453ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x453ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x453ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x453abc: 0x240b0024  addiu       $t3, $zero, 0x24
    ctx->pc = 0x453abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x453ac0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x453ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x453ac4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x453ac4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453ac8: 0x3c090045  lui         $t1, 0x45
    ctx->pc = 0x453ac8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)69 << 16));
    // 0x453acc: 0x3c07efff  lui         $a3, 0xEFFF
    ctx->pc = 0x453accu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61439 << 16));
    // 0x453ad0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x453ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x453ad4: 0x25292bf0  addiu       $t1, $t1, 0x2BF0
    ctx->pc = 0x453ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11248));
    // 0x453ad8: 0x8c8c002c  lw          $t4, 0x2C($a0)
    ctx->pc = 0x453ad8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x453adc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x453adcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x453ae0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x453ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x453ae4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x453ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453ae8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x453ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x453aec: 0x8d480004  lw          $t0, 0x4($t2)
    ctx->pc = 0x453aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x453af0: 0x8e06009c  lw          $a2, 0x9C($s0)
    ctx->pc = 0x453af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x453af4: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x453af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x453af8: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x453af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x453afc: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x453afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x453b00: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x453b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x453b04: 0xac480140  sw          $t0, 0x140($v0)
    ctx->pc = 0x453b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 8));
    // 0x453b08: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x453b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x453b0c: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x453b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x453b10: 0x6b1018  mult        $v0, $v1, $t3
    ctx->pc = 0x453b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x453b14: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x453b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x453b18: 0xac680154  sw          $t0, 0x154($v1)
    ctx->pc = 0x453b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 8));
    // 0x453b1c: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x453b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x453b20: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x453b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x453b24: 0x4b4018  mult        $t0, $v0, $t3
    ctx->pc = 0x453b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x453b28: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x453b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x453b2c: 0xac430160  sw          $v1, 0x160($v0)
    ctx->pc = 0x453b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 3));
    // 0x453b30: 0xae090024  sw          $t1, 0x24($s0)
    ctx->pc = 0x453b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 9));
    // 0x453b34: 0x8d860004  lw          $a2, 0x4($t4)
    ctx->pc = 0x453b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x453b38: 0xc11833c  jal         func_460CF0
    ctx->pc = 0x453B38u;
    SET_GPR_U32(ctx, 31, 0x453B40u);
    ctx->pc = 0x453B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453B38u;
    // 0x453b3c: 0x63082  srl         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x460CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460CF0u, 0x453B38u, 0x453B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453B40u;
label_453b40:
    // 0x453b40: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x453b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x453b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x453b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453b48: 0x24632830  addiu       $v1, $v1, 0x2830
    ctx->pc = 0x453b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10288));
    // 0x453b4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x453b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x453b50: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x453b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x453b54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x453b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453b58: 0x3e00008  jr          $ra
    ctx->pc = 0x453B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x453B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453B58u;
        // 0x453b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453B60u;
}
