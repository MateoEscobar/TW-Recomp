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

// Function: sub_004329C0
// Address: 0x4329c0 - 0x432a28
void sub_004329C0_0x4329c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004329C0_0x4329c0");
#endif

    switch (ctx->pc) {
        case 0x4329e8u: goto label_4329e8;
        default: break;
    }

    ctx->pc = 0x4329c0u;

    // 0x4329c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4329c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4329c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4329c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4329c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4329c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4329cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4329ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4329d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4329d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4329d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4329d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4329d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4329d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4329dc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x4329dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4329e0: 0xc10ea9c  jal         func_43AA70
    ctx->pc = 0x4329E0u;
    SET_GPR_U32(ctx, 31, 0x4329E8u);
    ctx->pc = 0x4329E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4329E0u;
    // 0x4329e4: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AA70u, 0x4329E0u, 0x4329E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4329E8u;
label_4329e8:
    // 0x4329e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x4329e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4329ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4329ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4329f0: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4329F0u;
    {
        const bool branch_taken_0x4329f0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4329f0) {
            ctx->pc = 0x4329F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4329F0u;
            // 0x4329f4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432A08u;
            goto label_432a08;
        }
    }
    ctx->pc = 0x4329F8u;
    // 0x4329f8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x4329f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x4329fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4329fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x432a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x432A00u;
    {
        const bool branch_taken_0x432a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432A00u;
        // 0x432a04: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432a00) {
            ctx->pc = 0x432A10u;
            goto label_432a10;
        }
    }
    ctx->pc = 0x432A08u;
label_432a08:
    // 0x432a08: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x432a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x432a0c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x432a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_432a10:
    // 0x432a10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x432a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432a14: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x432a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x432a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x432A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432A1Cu;
        // 0x432a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432A24u;
    // 0x432a24: 0x0  nop
    ctx->pc = 0x432a24u;
    // NOP
    ctx->pc = 0x432a28u;
}
