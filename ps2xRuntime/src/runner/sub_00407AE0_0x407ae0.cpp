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

// Function: sub_00407AE0
// Address: 0x407ae0 - 0x407d50
void sub_00407AE0_0x407ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407AE0_0x407ae0");
#endif

    switch (ctx->pc) {
        case 0x407ae0u: goto label_407ae0;
        case 0x407ae4u: goto label_407ae4;
        case 0x407ae8u: goto label_407ae8;
        case 0x407aecu: goto label_407aec;
        case 0x407af0u: goto label_407af0;
        case 0x407af4u: goto label_407af4;
        case 0x407af8u: goto label_407af8;
        case 0x407afcu: goto label_407afc;
        case 0x407b00u: goto label_407b00;
        case 0x407b04u: goto label_407b04;
        case 0x407b08u: goto label_407b08;
        case 0x407b0cu: goto label_407b0c;
        case 0x407b10u: goto label_407b10;
        case 0x407b14u: goto label_407b14;
        case 0x407b18u: goto label_407b18;
        case 0x407b1cu: goto label_407b1c;
        case 0x407b20u: goto label_407b20;
        case 0x407b24u: goto label_407b24;
        case 0x407b28u: goto label_407b28;
        case 0x407b2cu: goto label_407b2c;
        case 0x407b30u: goto label_407b30;
        case 0x407b34u: goto label_407b34;
        case 0x407b38u: goto label_407b38;
        case 0x407b3cu: goto label_407b3c;
        case 0x407b40u: goto label_407b40;
        case 0x407b44u: goto label_407b44;
        case 0x407b48u: goto label_407b48;
        case 0x407b4cu: goto label_407b4c;
        case 0x407b50u: goto label_407b50;
        case 0x407b54u: goto label_407b54;
        case 0x407b58u: goto label_407b58;
        case 0x407b5cu: goto label_407b5c;
        case 0x407b60u: goto label_407b60;
        case 0x407b64u: goto label_407b64;
        case 0x407b68u: goto label_407b68;
        case 0x407b6cu: goto label_407b6c;
        case 0x407b70u: goto label_407b70;
        case 0x407b74u: goto label_407b74;
        case 0x407b78u: goto label_407b78;
        case 0x407b7cu: goto label_407b7c;
        case 0x407b80u: goto label_407b80;
        case 0x407b84u: goto label_407b84;
        case 0x407b88u: goto label_407b88;
        case 0x407b8cu: goto label_407b8c;
        case 0x407b90u: goto label_407b90;
        case 0x407b94u: goto label_407b94;
        case 0x407b98u: goto label_407b98;
        case 0x407b9cu: goto label_407b9c;
        case 0x407ba0u: goto label_407ba0;
        case 0x407ba4u: goto label_407ba4;
        case 0x407ba8u: goto label_407ba8;
        case 0x407bacu: goto label_407bac;
        case 0x407bb0u: goto label_407bb0;
        case 0x407bb4u: goto label_407bb4;
        case 0x407bb8u: goto label_407bb8;
        case 0x407bbcu: goto label_407bbc;
        case 0x407bc0u: goto label_407bc0;
        case 0x407bc4u: goto label_407bc4;
        case 0x407bc8u: goto label_407bc8;
        case 0x407bccu: goto label_407bcc;
        case 0x407bd0u: goto label_407bd0;
        case 0x407bd4u: goto label_407bd4;
        case 0x407bd8u: goto label_407bd8;
        case 0x407bdcu: goto label_407bdc;
        case 0x407be0u: goto label_407be0;
        case 0x407be4u: goto label_407be4;
        case 0x407be8u: goto label_407be8;
        case 0x407becu: goto label_407bec;
        case 0x407bf0u: goto label_407bf0;
        case 0x407bf4u: goto label_407bf4;
        case 0x407bf8u: goto label_407bf8;
        case 0x407bfcu: goto label_407bfc;
        case 0x407c00u: goto label_407c00;
        case 0x407c04u: goto label_407c04;
        case 0x407c08u: goto label_407c08;
        case 0x407c0cu: goto label_407c0c;
        case 0x407c10u: goto label_407c10;
        case 0x407c14u: goto label_407c14;
        case 0x407c18u: goto label_407c18;
        case 0x407c1cu: goto label_407c1c;
        case 0x407c20u: goto label_407c20;
        case 0x407c24u: goto label_407c24;
        case 0x407c28u: goto label_407c28;
        case 0x407c2cu: goto label_407c2c;
        case 0x407c30u: goto label_407c30;
        case 0x407c34u: goto label_407c34;
        case 0x407c38u: goto label_407c38;
        case 0x407c3cu: goto label_407c3c;
        case 0x407c40u: goto label_407c40;
        case 0x407c44u: goto label_407c44;
        case 0x407c48u: goto label_407c48;
        case 0x407c4cu: goto label_407c4c;
        case 0x407c50u: goto label_407c50;
        case 0x407c54u: goto label_407c54;
        case 0x407c58u: goto label_407c58;
        case 0x407c5cu: goto label_407c5c;
        case 0x407c60u: goto label_407c60;
        case 0x407c64u: goto label_407c64;
        case 0x407c68u: goto label_407c68;
        case 0x407c6cu: goto label_407c6c;
        case 0x407c70u: goto label_407c70;
        case 0x407c74u: goto label_407c74;
        case 0x407c78u: goto label_407c78;
        case 0x407c7cu: goto label_407c7c;
        case 0x407c80u: goto label_407c80;
        case 0x407c84u: goto label_407c84;
        case 0x407c88u: goto label_407c88;
        case 0x407c8cu: goto label_407c8c;
        case 0x407c90u: goto label_407c90;
        case 0x407c94u: goto label_407c94;
        case 0x407c98u: goto label_407c98;
        case 0x407c9cu: goto label_407c9c;
        case 0x407ca0u: goto label_407ca0;
        case 0x407ca4u: goto label_407ca4;
        case 0x407ca8u: goto label_407ca8;
        case 0x407cacu: goto label_407cac;
        case 0x407cb0u: goto label_407cb0;
        case 0x407cb4u: goto label_407cb4;
        case 0x407cb8u: goto label_407cb8;
        case 0x407cbcu: goto label_407cbc;
        case 0x407cc0u: goto label_407cc0;
        case 0x407cc4u: goto label_407cc4;
        case 0x407cc8u: goto label_407cc8;
        case 0x407cccu: goto label_407ccc;
        case 0x407cd0u: goto label_407cd0;
        case 0x407cd4u: goto label_407cd4;
        case 0x407cd8u: goto label_407cd8;
        case 0x407cdcu: goto label_407cdc;
        case 0x407ce0u: goto label_407ce0;
        case 0x407ce4u: goto label_407ce4;
        case 0x407ce8u: goto label_407ce8;
        case 0x407cecu: goto label_407cec;
        case 0x407cf0u: goto label_407cf0;
        case 0x407cf4u: goto label_407cf4;
        case 0x407cf8u: goto label_407cf8;
        case 0x407cfcu: goto label_407cfc;
        case 0x407d00u: goto label_407d00;
        case 0x407d04u: goto label_407d04;
        case 0x407d08u: goto label_407d08;
        case 0x407d0cu: goto label_407d0c;
        case 0x407d10u: goto label_407d10;
        case 0x407d14u: goto label_407d14;
        case 0x407d18u: goto label_407d18;
        case 0x407d1cu: goto label_407d1c;
        case 0x407d20u: goto label_407d20;
        case 0x407d24u: goto label_407d24;
        case 0x407d28u: goto label_407d28;
        case 0x407d2cu: goto label_407d2c;
        case 0x407d30u: goto label_407d30;
        case 0x407d34u: goto label_407d34;
        case 0x407d38u: goto label_407d38;
        case 0x407d3cu: goto label_407d3c;
        case 0x407d40u: goto label_407d40;
        case 0x407d44u: goto label_407d44;
        case 0x407d48u: goto label_407d48;
        case 0x407d4cu: goto label_407d4c;
        default: break;
    }

    ctx->pc = 0x407ae0u;

label_407ae0:
    // 0x407ae0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x407ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_407ae4:
    // 0x407ae4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x407ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_407ae8:
    // 0x407ae8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x407ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_407aec:
    // 0x407aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x407aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407af0:
    // 0x407af0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x407af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_407af4:
    // 0x407af4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x407af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_407af8:
    // 0x407af8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x407af8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_407afc:
    // 0x407afc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x407afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_407b00:
    // 0x407b00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x407b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407b04:
    // 0x407b04: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x407b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_407b08:
    // 0x407b08: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x407b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_407b0c:
    // 0x407b0c: 0x40f809  jalr        $v0
label_407b10:
    if (ctx->pc == 0x407B10u) {
        ctx->pc = 0x407B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B0Cu;
        // 0x407b10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407B14u;
        goto label_407b14;
    }
    ctx->pc = 0x407B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407B14u);
        ctx->pc = 0x407B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B0Cu;
        // 0x407b10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407B0Cu, 0x407B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407B14u;
label_407b14:
    // 0x407b14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x407b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407b18:
    // 0x407b18: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x407b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_407b1c:
    // 0x407b1c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x407b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_407b20:
    // 0x407b20: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_407b24:
    if (ctx->pc == 0x407B24u) {
        ctx->pc = 0x407B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B20u;
        // 0x407b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407B28u;
        goto label_407b28;
    }
    ctx->pc = 0x407B20u;
    {
        const bool branch_taken_0x407b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B20u;
        // 0x407b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407b20) {
            ctx->pc = 0x407D2Cu;
            goto label_407d2c;
        }
    }
    ctx->pc = 0x407B28u;
label_407b28:
    // 0x407b28: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x407b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_407b2c:
    // 0x407b2c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x407b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_407b30:
    // 0x407b30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x407b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_407b34:
    // 0x407b34: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_407b38:
    if (ctx->pc == 0x407B38u) {
        ctx->pc = 0x407B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B34u;
        // 0x407b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407B3Cu;
        goto label_407b3c;
    }
    ctx->pc = 0x407B34u;
    {
        const bool branch_taken_0x407b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B34u;
        // 0x407b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407b34) {
            ctx->pc = 0x407D2Cu;
            goto label_407d2c;
        }
    }
    ctx->pc = 0x407B3Cu;
label_407b3c:
    // 0x407b3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x407b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407b40:
    // 0x407b40: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x407b40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_407b44:
    // 0x407b44: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x407b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_407b48:
    // 0x407b48: 0x40f809  jalr        $v0
label_407b4c:
    if (ctx->pc == 0x407B4Cu) {
        ctx->pc = 0x407B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B48u;
        // 0x407b4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407B50u;
        goto label_407b50;
    }
    ctx->pc = 0x407B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407B50u);
        ctx->pc = 0x407B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B48u;
        // 0x407b4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407B48u, 0x407B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407B50u;
label_407b50:
    // 0x407b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x407b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407b54:
    // 0x407b54: 0xc0e9694  jal         func_3A5A50
label_407b58:
    if (ctx->pc == 0x407B58u) {
        ctx->pc = 0x407B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B54u;
        // 0x407b58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407B5Cu;
        goto label_407b5c;
    }
    ctx->pc = 0x407B54u;
    SET_GPR_U32(ctx, 31, 0x407B5Cu);
    ctx->pc = 0x407B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407B54u;
    // 0x407b58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x407B54u, 0x407B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407B5Cu;
label_407b5c:
    // 0x407b5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_407b60:
    if (ctx->pc == 0x407B60u) {
        ctx->pc = 0x407B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B5Cu;
        // 0x407b60: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407B64u;
        goto label_407b64;
    }
    ctx->pc = 0x407B5Cu;
    {
        const bool branch_taken_0x407b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x407B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B5Cu;
        // 0x407b60: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407b5c) {
            ctx->pc = 0x407B70u;
            goto label_407b70;
        }
    }
    ctx->pc = 0x407B64u;
label_407b64:
    // 0x407b64: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x407b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_407b68:
    // 0x407b68: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x407b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_407b6c:
    // 0x407b6c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x407b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_407b70:
    // 0x407b70: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x407b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_407b74:
    // 0x407b74: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
label_407b78:
    if (ctx->pc == 0x407B78u) {
        ctx->pc = 0x407B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B74u;
        // 0x407b78: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407B7Cu;
        goto label_407b7c;
    }
    ctx->pc = 0x407B74u;
    {
        const bool branch_taken_0x407b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x407b74) {
            ctx->pc = 0x407B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x407B74u;
            // 0x407b78: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x407CE0u;
            goto label_407ce0;
        }
    }
    ctx->pc = 0x407B7Cu;
label_407b7c:
    // 0x407b7c: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x407b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_407b80:
    // 0x407b80: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x407b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_407b84:
    // 0x407b84: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_407b88:
    if (ctx->pc == 0x407B88u) {
        ctx->pc = 0x407B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407B84u;
        // 0x407b88: 0x7a2300a0  lq          $v1, 0xA0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407B8Cu;
        goto label_407b8c;
    }
    ctx->pc = 0x407B84u;
    {
        const bool branch_taken_0x407b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x407b84) {
            ctx->pc = 0x407B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x407B84u;
            // 0x407b88: 0x7a2300a0  lq          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x407BB4u;
            goto label_407bb4;
        }
    }
    ctx->pc = 0x407B8Cu;
label_407b8c:
    // 0x407b8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x407b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_407b90:
    // 0x407b90: 0x962600d8  lhu         $a2, 0xD8($s1)
    ctx->pc = 0x407b90u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_407b94:
    // 0x407b94: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x407b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_407b98:
    // 0x407b98: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x407b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_407b9c:
    // 0x407b9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x407b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_407ba0:
    // 0x407ba0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x407ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_407ba4:
    // 0x407ba4: 0xc04420c  jal         func_110830
label_407ba8:
    if (ctx->pc == 0x407BA8u) {
        ctx->pc = 0x407BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407BA4u;
        // 0x407ba8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407BACu;
        goto label_407bac;
    }
    ctx->pc = 0x407BA4u;
    SET_GPR_U32(ctx, 31, 0x407BACu);
    ctx->pc = 0x407BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407BA4u;
    // 0x407ba8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x407BA4u, 0x407BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407BACu;
label_407bac:
    // 0x407bac: 0x1000005f  b           . + 4 + (0x5F << 2)
label_407bb0:
    if (ctx->pc == 0x407BB0u) {
        ctx->pc = 0x407BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407BACu;
        // 0x407bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407BB4u;
        goto label_407bb4;
    }
    ctx->pc = 0x407BACu;
    {
        const bool branch_taken_0x407bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407BACu;
        // 0x407bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407bac) {
            ctx->pc = 0x407D2Cu;
            goto label_407d2c;
        }
    }
    ctx->pc = 0x407BB4u;
label_407bb4:
    // 0x407bb4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x407bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_407bb8:
    // 0x407bb8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x407bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_407bbc:
    // 0x407bbc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x407bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_407bc0:
    // 0x407bc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x407bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_407bc4:
    // 0x407bc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x407bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_407bc8:
    // 0x407bc8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x407bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_407bcc:
    // 0x407bcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x407bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_407bd0:
    // 0x407bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x407bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_407bd4:
    // 0x407bd4: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x407bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_407bd8:
    // 0x407bd8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x407bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407bdc:
    // 0x407bdc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x407bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_407be0:
    // 0x407be0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x407be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_407be4:
    // 0x407be4: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x407be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_407be8:
    // 0x407be8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_407bec:
    if (ctx->pc == 0x407BECu) {
        ctx->pc = 0x407BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407BE8u;
        // 0x407bec: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x407BF0u;
        goto label_407bf0;
    }
    ctx->pc = 0x407BE8u;
    {
        const bool branch_taken_0x407be8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x407BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407BE8u;
        // 0x407bec: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x407be8) {
            ctx->pc = 0x407C00u;
            goto label_407c00;
        }
    }
    ctx->pc = 0x407BF0u;
label_407bf0:
    // 0x407bf0: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x407bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
label_407bf4:
    // 0x407bf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x407bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_407bf8:
    // 0x407bf8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x407bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_407bfc:
    // 0x407bfc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x407bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_407c00:
    // 0x407c00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x407c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407c04:
    // 0x407c04: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x407c04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_407c08:
    // 0x407c08: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x407c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_407c0c:
    // 0x407c0c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x407c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_407c10:
    // 0x407c10: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x407c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_407c14:
    // 0x407c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x407c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407c18:
    // 0x407c18: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x407c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_407c1c:
    // 0x407c1c: 0x60f809  jalr        $v1
label_407c20:
    if (ctx->pc == 0x407C20u) {
        ctx->pc = 0x407C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C1Cu;
        // 0x407c20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407C24u;
        goto label_407c24;
    }
    ctx->pc = 0x407C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x407C24u);
        ctx->pc = 0x407C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C1Cu;
        // 0x407c20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407C1Cu, 0x407C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407C24u;
label_407c24:
    // 0x407c24: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x407c24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_407c28:
    // 0x407c28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x407c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407c2c:
    // 0x407c2c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x407c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_407c30:
    // 0x407c30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x407c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407c34:
    // 0x407c34: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x407c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_407c38:
    // 0x407c38: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x407c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_407c3c:
    // 0x407c3c: 0x40f809  jalr        $v0
label_407c40:
    if (ctx->pc == 0x407C40u) {
        ctx->pc = 0x407C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C3Cu;
        // 0x407c40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407C44u;
        goto label_407c44;
    }
    ctx->pc = 0x407C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407C44u);
        ctx->pc = 0x407C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C3Cu;
        // 0x407c40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407C3Cu, 0x407C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407C44u;
label_407c44:
    // 0x407c44: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x407c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_407c48:
    // 0x407c48: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x407c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_407c4c:
    // 0x407c4c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x407c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_407c50:
    // 0x407c50: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x407c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_407c54:
    // 0x407c54: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x407c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_407c58:
    // 0x407c58: 0xc0cd508  jal         func_335420
label_407c5c:
    if (ctx->pc == 0x407C5Cu) {
        ctx->pc = 0x407C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C58u;
        // 0x407c5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407C60u;
        goto label_407c60;
    }
    ctx->pc = 0x407C58u;
    SET_GPR_U32(ctx, 31, 0x407C60u);
    ctx->pc = 0x407C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407C58u;
    // 0x407c5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x407C58u, 0x407C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407C60u;
label_407c60:
    // 0x407c60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x407c60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_407c64:
    // 0x407c64: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x407c64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_407c68:
    // 0x407c68: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x407c68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_407c6c:
    // 0x407c6c: 0xc12e310  jal         func_4B8C40
label_407c70:
    if (ctx->pc == 0x407C70u) {
        ctx->pc = 0x407C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C6Cu;
        // 0x407c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407C74u;
        goto label_407c74;
    }
    ctx->pc = 0x407C6Cu;
    SET_GPR_U32(ctx, 31, 0x407C74u);
    ctx->pc = 0x407C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407C6Cu;
    // 0x407c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x407C6Cu, 0x407C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407C74u;
label_407c74:
    // 0x407c74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x407c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_407c78:
    // 0x407c78: 0xc12e29c  jal         func_4B8A70
label_407c7c:
    if (ctx->pc == 0x407C7Cu) {
        ctx->pc = 0x407C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C78u;
        // 0x407c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x407C80u;
        goto label_407c80;
    }
    ctx->pc = 0x407C78u;
    SET_GPR_U32(ctx, 31, 0x407C80u);
    ctx->pc = 0x407C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407C78u;
    // 0x407c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x407C78u, 0x407C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407C80u;
label_407c80:
    // 0x407c80: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x407c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_407c84:
    // 0x407c84: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x407c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_407c88:
    // 0x407c88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x407c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_407c8c:
    // 0x407c8c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x407c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_407c90:
    // 0x407c90: 0xc0cddf0  jal         func_3377C0
label_407c94:
    if (ctx->pc == 0x407C94u) {
        ctx->pc = 0x407C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407C90u;
        // 0x407c94: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407C98u;
        goto label_407c98;
    }
    ctx->pc = 0x407C90u;
    SET_GPR_U32(ctx, 31, 0x407C98u);
    ctx->pc = 0x407C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407C90u;
    // 0x407c94: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3377C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3377C0u, 0x407C90u, 0x407C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407C98u;
label_407c98:
    // 0x407c98: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x407c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_407c9c:
    // 0x407c9c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x407c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_407ca0:
    // 0x407ca0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x407ca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_407ca4:
    // 0x407ca4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x407ca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_407ca8:
    // 0x407ca8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x407ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_407cac:
    // 0x407cac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x407cacu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_407cb0:
    // 0x407cb0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x407cb0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_407cb4:
    // 0x407cb4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x407cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_407cb8:
    // 0x407cb8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x407cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_407cbc:
    // 0x407cbc: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x407cbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_407cc0:
    // 0x407cc0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x407cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_407cc4:
    // 0x407cc4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x407cc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_407cc8:
    // 0x407cc8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x407cc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_407ccc:
    // 0x407ccc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x407cccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_407cd0:
    // 0x407cd0: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x407cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_407cd4:
    // 0x407cd4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x407cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_407cd8:
    // 0x407cd8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x407cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_407cdc:
    // 0x407cdc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x407cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_407ce0:
    // 0x407ce0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x407ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_407ce4:
    // 0x407ce4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x407ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_407ce8:
    // 0x407ce8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x407ce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_407cec:
    // 0x407cec: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_407cf0:
    if (ctx->pc == 0x407CF0u) {
        ctx->pc = 0x407CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CECu;
        // 0x407cf0: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407CF4u;
        goto label_407cf4;
    }
    ctx->pc = 0x407CECu;
    {
        const bool branch_taken_0x407cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x407CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407CECu;
        // 0x407cf0: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407cec) {
            ctx->pc = 0x407D1Cu;
            goto label_407d1c;
        }
    }
    ctx->pc = 0x407CF4u;
label_407cf4:
    // 0x407cf4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x407cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_407cf8:
    // 0x407cf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x407cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_407cfc:
    // 0x407cfc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x407cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_407d00:
    // 0x407d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x407d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_407d04:
    // 0x407d04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x407d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_407d08:
    // 0x407d08: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x407d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_407d0c:
    // 0x407d0c: 0xc0e858c  jal         func_3A1630
label_407d10:
    if (ctx->pc == 0x407D10u) {
        ctx->pc = 0x407D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D0Cu;
        // 0x407d10: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407D14u;
        goto label_407d14;
    }
    ctx->pc = 0x407D0Cu;
    SET_GPR_U32(ctx, 31, 0x407D14u);
    ctx->pc = 0x407D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407D0Cu;
    // 0x407d10: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x407D0Cu, 0x407D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407D14u;
label_407d14:
    // 0x407d14: 0x10000005  b           . + 4 + (0x5 << 2)
label_407d18:
    if (ctx->pc == 0x407D18u) {
        ctx->pc = 0x407D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D14u;
        // 0x407d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407D1Cu;
        goto label_407d1c;
    }
    ctx->pc = 0x407D14u;
    {
        const bool branch_taken_0x407d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D14u;
        // 0x407d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407d14) {
            ctx->pc = 0x407D2Cu;
            goto label_407d2c;
        }
    }
    ctx->pc = 0x407D1Cu;
label_407d1c:
    // 0x407d1c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x407d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_407d20:
    // 0x407d20: 0xc0e858c  jal         func_3A1630
label_407d24:
    if (ctx->pc == 0x407D24u) {
        ctx->pc = 0x407D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D20u;
        // 0x407d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407D28u;
        goto label_407d28;
    }
    ctx->pc = 0x407D20u;
    SET_GPR_U32(ctx, 31, 0x407D28u);
    ctx->pc = 0x407D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407D20u;
    // 0x407d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x407D20u, 0x407D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407D28u;
label_407d28:
    // 0x407d28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x407d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407d2c:
    // 0x407d2c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x407d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_407d30:
    // 0x407d30: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x407d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_407d34:
    // 0x407d34: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x407d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_407d38:
    // 0x407d38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x407d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_407d3c:
    // 0x407d3c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x407d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_407d40:
    // 0x407d40: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x407d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_407d44:
    // 0x407d44: 0x3e00008  jr          $ra
label_407d48:
    if (ctx->pc == 0x407D48u) {
        ctx->pc = 0x407D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D44u;
        // 0x407d48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407D4Cu;
        goto label_407d4c;
    }
    ctx->pc = 0x407D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407D44u;
        // 0x407d48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407D4Cu;
label_407d4c:
    // 0x407d4c: 0x0  nop
    ctx->pc = 0x407d4cu;
    // NOP
    ctx->pc = 0x407d50u;
}
