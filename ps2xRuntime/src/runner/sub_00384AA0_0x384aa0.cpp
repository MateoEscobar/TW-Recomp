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

// Function: sub_00384AA0
// Address: 0x384aa0 - 0x384b30
void sub_00384AA0_0x384aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384AA0_0x384aa0");
#endif

    switch (ctx->pc) {
        case 0x384aa0u: goto label_384aa0;
        case 0x384aa4u: goto label_384aa4;
        case 0x384aa8u: goto label_384aa8;
        case 0x384aacu: goto label_384aac;
        case 0x384ab0u: goto label_384ab0;
        case 0x384ab4u: goto label_384ab4;
        case 0x384ab8u: goto label_384ab8;
        case 0x384abcu: goto label_384abc;
        case 0x384ac0u: goto label_384ac0;
        case 0x384ac4u: goto label_384ac4;
        case 0x384ac8u: goto label_384ac8;
        case 0x384accu: goto label_384acc;
        case 0x384ad0u: goto label_384ad0;
        case 0x384ad4u: goto label_384ad4;
        case 0x384ad8u: goto label_384ad8;
        case 0x384adcu: goto label_384adc;
        case 0x384ae0u: goto label_384ae0;
        case 0x384ae4u: goto label_384ae4;
        case 0x384ae8u: goto label_384ae8;
        case 0x384aecu: goto label_384aec;
        case 0x384af0u: goto label_384af0;
        case 0x384af4u: goto label_384af4;
        case 0x384af8u: goto label_384af8;
        case 0x384afcu: goto label_384afc;
        case 0x384b00u: goto label_384b00;
        case 0x384b04u: goto label_384b04;
        case 0x384b08u: goto label_384b08;
        case 0x384b0cu: goto label_384b0c;
        case 0x384b10u: goto label_384b10;
        case 0x384b14u: goto label_384b14;
        case 0x384b18u: goto label_384b18;
        case 0x384b1cu: goto label_384b1c;
        case 0x384b20u: goto label_384b20;
        case 0x384b24u: goto label_384b24;
        case 0x384b28u: goto label_384b28;
        case 0x384b2cu: goto label_384b2c;
        default: break;
    }

    ctx->pc = 0x384aa0u;

label_384aa0:
    // 0x384aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_384aa4:
    // 0x384aa4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x384aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_384aa8:
    // 0x384aa8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x384aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_384aac:
    // 0x384aac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x384aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_384ab0:
    // 0x384ab0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x384ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_384ab4:
    // 0x384ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384ab8:
    // 0x384ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_384abc:
    // 0x384abc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x384abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_384ac0:
    // 0x384ac0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_384ac4:
    if (ctx->pc == 0x384AC4u) {
        ctx->pc = 0x384AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AC0u;
        // 0x384ac4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384AC8u;
        goto label_384ac8;
    }
    ctx->pc = 0x384AC0u;
    {
        const bool branch_taken_0x384ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x384AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AC0u;
        // 0x384ac4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ac0) {
            ctx->pc = 0x384B00u;
            goto label_384b00;
        }
    }
    ctx->pc = 0x384AC8u;
label_384ac8:
    // 0x384ac8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x384ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_384acc:
    // 0x384acc: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x384accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_384ad0:
    // 0x384ad0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384ad4:
    // 0x384ad4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x384ad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_384ad8:
    // 0x384ad8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x384ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_384adc:
    // 0x384adc: 0x40f809  jalr        $v0
label_384ae0:
    if (ctx->pc == 0x384AE0u) {
        ctx->pc = 0x384AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384ADCu;
        // 0x384ae0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384AE4u;
        goto label_384ae4;
    }
    ctx->pc = 0x384ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384AE4u);
        ctx->pc = 0x384AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384ADCu;
        // 0x384ae0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384ADCu, 0x384AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384AE4u;
label_384ae4:
    // 0x384ae4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x384ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_384ae8:
    // 0x384ae8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x384ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_384aec:
    // 0x384aec: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_384af0:
    if (ctx->pc == 0x384AF0u) {
        ctx->pc = 0x384AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AECu;
        // 0x384af0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384AF4u;
        goto label_384af4;
    }
    ctx->pc = 0x384AECu;
    {
        const bool branch_taken_0x384aec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x384AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AECu;
        // 0x384af0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384aec) {
            ctx->pc = 0x384B18u;
            goto label_384b18;
        }
    }
    ctx->pc = 0x384AF4u;
label_384af4:
    // 0x384af4: 0xae120078  sw          $s2, 0x78($s0)
    ctx->pc = 0x384af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 18));
label_384af8:
    // 0x384af8: 0x10000007  b           . + 4 + (0x7 << 2)
label_384afc:
    if (ctx->pc == 0x384AFCu) {
        ctx->pc = 0x384AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AF8u;
        // 0x384afc: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B00u;
        goto label_384b00;
    }
    ctx->pc = 0x384AF8u;
    {
        const bool branch_taken_0x384af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AF8u;
        // 0x384afc: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384af8) {
            ctx->pc = 0x384B18u;
            goto label_384b18;
        }
    }
    ctx->pc = 0x384B00u;
label_384b00:
    // 0x384b00: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x384b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_384b04:
    // 0x384b04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x384b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_384b08:
    // 0x384b08: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_384b0c:
    if (ctx->pc == 0x384B0Cu) {
        ctx->pc = 0x384B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B08u;
        // 0x384b0c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B10u;
        goto label_384b10;
    }
    ctx->pc = 0x384B08u;
    {
        const bool branch_taken_0x384b08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x384B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B08u;
        // 0x384b0c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b08) {
            ctx->pc = 0x384B18u;
            goto label_384b18;
        }
    }
    ctx->pc = 0x384B10u;
label_384b10:
    // 0x384b10: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x384b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_384b14:
    // 0x384b14: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x384b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_384b18:
    // 0x384b18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x384b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_384b1c:
    // 0x384b1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x384b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_384b20:
    // 0x384b20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x384b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384b24:
    // 0x384b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_384b28:
    // 0x384b28: 0x3e00008  jr          $ra
label_384b2c:
    if (ctx->pc == 0x384B2Cu) {
        ctx->pc = 0x384B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B28u;
        // 0x384b2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B30u;
        goto label_fallthrough_0x384b28;
    }
    ctx->pc = 0x384B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B28u;
        // 0x384b2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x384b28:
    ctx->pc = 0x384B30u;
}
