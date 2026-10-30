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

// Function: sub_002FEEB0
// Address: 0x2feeb0 - 0x2fef40
void sub_002FEEB0_0x2feeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEEB0_0x2feeb0");
#endif

    ctx->pc = 0x2feeb0u;

    // 0x2feeb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2feeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2feeb4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2feeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2feeb8: 0x87ad0030  lh          $t5, 0x30($sp)
    ctx->pc = 0x2feeb8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2feebc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2feebcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2feec0: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x2feec0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x2feec4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2feec4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2feec8: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x2feec8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2feecc: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x2feeccu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x2feed0: 0xa52818  mult        $a1, $a1, $a1
    ctx->pc = 0x2feed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2feed4: 0x1084018  mult        $t0, $t0, $t0
    ctx->pc = 0x2feed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2feed8: 0x3c0c006f  lui         $t4, 0x6F
    ctx->pc = 0x2feed8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)111 << 16));
    // 0x2feedc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2feedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2feee0: 0x16b5818  mult        $t3, $t3, $t3
    ctx->pc = 0x2feee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2feee4: 0x1ad6818  mult        $t5, $t5, $t5
    ctx->pc = 0x2feee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2feee8: 0x7fb20000  sq          $s2, 0x0($sp)
    ctx->pc = 0x2feee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 18));
    // 0x2feeec: 0x2582a188  addiu       $v0, $t4, -0x5E78
    ctx->pc = 0x2feeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294943112));
    // 0x2feef0: 0x87af0020  lh          $t7, 0x20($sp)
    ctx->pc = 0x2feef0u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2feef4: 0x87ae0028  lh          $t6, 0x28($sp)
    ctx->pc = 0x2feef4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2feef8: 0x87a30038  lh          $v1, 0x38($sp)
    ctx->pc = 0x2feef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2feefc: 0xa584a188  sh          $a0, -0x5E78($t4)
    ctx->pc = 0x2feefcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 4294943112), (uint16_t)GPR_U32(ctx, 4));
    // 0x2fef00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fef00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fef04: 0x7bb20000  lq          $s2, 0x0($sp)
    ctx->pc = 0x2fef04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fef08: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x2fef08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x2fef0c: 0xa4450002  sh          $a1, 0x2($v0)
    ctx->pc = 0x2fef0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2fef10: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x2fef10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x2fef14: 0xa4470006  sh          $a3, 0x6($v0)
    ctx->pc = 0x2fef14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x2fef18: 0xa4480008  sh          $t0, 0x8($v0)
    ctx->pc = 0x2fef18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x2fef1c: 0xa449000a  sh          $t1, 0xA($v0)
    ctx->pc = 0x2fef1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 9));
    // 0x2fef20: 0xa44a000c  sh          $t2, 0xC($v0)
    ctx->pc = 0x2fef20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x2fef24: 0xa44b000e  sh          $t3, 0xE($v0)
    ctx->pc = 0x2fef24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 11));
    // 0x2fef28: 0xa44f0010  sh          $t7, 0x10($v0)
    ctx->pc = 0x2fef28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 15));
    // 0x2fef2c: 0xa44e0012  sh          $t6, 0x12($v0)
    ctx->pc = 0x2fef2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 14));
    // 0x2fef30: 0xa44d0014  sh          $t5, 0x14($v0)
    ctx->pc = 0x2fef30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 13));
    // 0x2fef34: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF34u;
        // 0x2fef38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEF3Cu;
    // 0x2fef3c: 0x0  nop
    ctx->pc = 0x2fef3cu;
    // NOP
    ctx->pc = 0x2fef40u;
}
