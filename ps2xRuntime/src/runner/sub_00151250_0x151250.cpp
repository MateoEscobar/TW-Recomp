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

// Function: sub_00151250
// Address: 0x151250 - 0x1512d8
void sub_00151250_0x151250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151250_0x151250");
#endif

    switch (ctx->pc) {
        case 0x1512c8u: goto label_1512c8;
        default: break;
    }

    ctx->pc = 0x151250u;

    // 0x151250: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x151250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151254: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x151254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x151258: 0x2442c368  addiu       $v0, $v0, -0x3C98
    ctx->pc = 0x151258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951784));
    // 0x15125c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x15125cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x151260: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151264: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151268: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x151268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x15126c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151270: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x151270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x151274: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x151274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x151278: 0x2484c308  addiu       $a0, $a0, -0x3CF8
    ctx->pc = 0x151278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951688));
    // 0x15127c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x15127cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x151280: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x151280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x151284: 0x24e7c2a8  addiu       $a3, $a3, -0x3D58
    ctx->pc = 0x151284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951592));
    // 0x151288: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15128c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x15128cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x151290: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x151290u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x151294: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x151294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x151298: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x151298u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x15129c: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x15129cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1512a0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1512A0u;
    {
        const bool branch_taken_0x1512a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1512A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512A0u;
        // 0x1512a4: 0xa4860000  sh          $a2, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512a0) {
            ctx->pc = 0x1512BCu;
            goto label_1512bc;
        }
    }
    ctx->pc = 0x1512A8u;
    // 0x1512a8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1512a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1512ac: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1512acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1512b0: 0xac4541a8  sw          $a1, 0x41A8($v0)
    ctx->pc = 0x1512b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5E41A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E41A8u, _value); } while (0);
    // 0x1512b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1512B4u;
    {
        const bool branch_taken_0x1512b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512B4u;
        // 0x1512b8: 0xac6641ac  sw          $a2, 0x41AC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16812), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512b4) {
            ctx->pc = 0x1512C8u;
            goto label_1512c8;
        }
    }
    ctx->pc = 0x1512BCu;
label_1512bc:
    // 0x1512bc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1512bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512c0: 0xc054470  jal         func_1511C0
    ctx->pc = 0x1512C0u;
    SET_GPR_U32(ctx, 31, 0x1512C8u);
    ctx->pc = 0x1512C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512C0u;
    // 0x1512c4: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511C0u, 0x1512C0u, 0x1512C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512C8u;
label_1512c8:
    // 0x1512c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1512c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1512cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1512CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1512D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512CCu;
        // 0x1512d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1512CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1512D4u;
    // 0x1512d4: 0x0  nop
    ctx->pc = 0x1512d4u;
    // NOP
    ctx->pc = 0x1512d8u;
}
