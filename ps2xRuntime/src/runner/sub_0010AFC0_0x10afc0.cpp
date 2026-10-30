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

// Function: sub_0010AFC0
// Address: 0x10afc0 - 0x10b090
void sub_0010AFC0_0x10afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AFC0_0x10afc0");
#endif

    ctx->pc = 0x10afc0u;

    // 0x10afc0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10afc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10afc4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x10afc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10afc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10AFC8u;
    {
        const bool branch_taken_0x10afc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFC8u;
        // 0x10afcc: 0xacc50010  sw          $a1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10afc8) {
            ctx->pc = 0x10AFF0u;
            goto label_10aff0;
        }
    }
    ctx->pc = 0x10AFD0u;
    // 0x10afd0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x10afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x10afd4: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10afd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x10afd8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x10afd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x10afdc: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10afdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10afe0: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x10afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x10afe4: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10afe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x10afe8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x10afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x10afec: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x10afecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_10aff0:
    // 0x10aff0: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x10aff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x10aff4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10AFF4u;
    {
        const bool branch_taken_0x10aff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFF4u;
        // 0x10aff8: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aff4) {
            ctx->pc = 0x10B020u;
            goto label_10b020;
        }
    }
    ctx->pc = 0x10AFFCu;
    // 0x10affc: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x10affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x10b000: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10b000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x10b004: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x10b004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x10b008: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10b008u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10b00c: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x10b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x10b010: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10b010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x10b014: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x10b014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x10b018: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x10b018u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10b01c: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x10b01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_10b020:
    // 0x10b020: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B020u;
    {
        const bool branch_taken_0x10b020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b020) {
            ctx->pc = 0x10B048u;
            goto label_10b048;
        }
    }
    ctx->pc = 0x10B028u;
    // 0x10b028: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x10b028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x10b02c: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10b02cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x10b030: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10b030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x10b034: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10b034u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10b038: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x10b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x10b03c: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10b03cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x10b040: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x10b044: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x10b044u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_10b048:
    // 0x10b048: 0x3e00008  jr          $ra
    ctx->pc = 0x10B048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B050u;
    // 0x10b050: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x10b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x10b054: 0x0  nop
    ctx->pc = 0x10b054u;
    // NOP
    // 0x10b058: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10b05c: 0x0  nop
    ctx->pc = 0x10b05cu;
    // NOP
    // 0x10b060: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10b064: 0x0  nop
    ctx->pc = 0x10b064u;
    // NOP
    // 0x10b068: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x10b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b06c: 0x0  nop
    ctx->pc = 0x10b06cu;
    // NOP
    // 0x10b070: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x10b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x10b074: 0x0  nop
    ctx->pc = 0x10b074u;
    // NOP
    // 0x10b078: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10b078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10b07c: 0x0  nop
    ctx->pc = 0x10b07cu;
    // NOP
    // 0x10b080: 0x244202a0  addiu       $v0, $v0, 0x2A0
    ctx->pc = 0x10b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x10b084: 0x0  nop
    ctx->pc = 0x10b084u;
    // NOP
    // 0x10b088: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10b088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10b08c: 0x0  nop
    ctx->pc = 0x10b08cu;
    // NOP
    ctx->pc = 0x10b090u;
}
