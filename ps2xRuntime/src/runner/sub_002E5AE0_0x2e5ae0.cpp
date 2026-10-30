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

// Function: sub_002E5AE0
// Address: 0x2e5ae0 - 0x2e5bf0
void sub_002E5AE0_0x2e5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5AE0_0x2e5ae0");
#endif

    switch (ctx->pc) {
        case 0x2e5ae0u: goto label_2e5ae0;
        case 0x2e5ae4u: goto label_2e5ae4;
        case 0x2e5ae8u: goto label_2e5ae8;
        case 0x2e5aecu: goto label_2e5aec;
        case 0x2e5af0u: goto label_2e5af0;
        case 0x2e5af4u: goto label_2e5af4;
        case 0x2e5af8u: goto label_2e5af8;
        case 0x2e5afcu: goto label_2e5afc;
        case 0x2e5b00u: goto label_2e5b00;
        case 0x2e5b04u: goto label_2e5b04;
        case 0x2e5b08u: goto label_2e5b08;
        case 0x2e5b0cu: goto label_2e5b0c;
        case 0x2e5b10u: goto label_2e5b10;
        case 0x2e5b14u: goto label_2e5b14;
        case 0x2e5b18u: goto label_2e5b18;
        case 0x2e5b1cu: goto label_2e5b1c;
        case 0x2e5b20u: goto label_2e5b20;
        case 0x2e5b24u: goto label_2e5b24;
        case 0x2e5b28u: goto label_2e5b28;
        case 0x2e5b2cu: goto label_2e5b2c;
        case 0x2e5b30u: goto label_2e5b30;
        case 0x2e5b34u: goto label_2e5b34;
        case 0x2e5b38u: goto label_2e5b38;
        case 0x2e5b3cu: goto label_2e5b3c;
        case 0x2e5b40u: goto label_2e5b40;
        case 0x2e5b44u: goto label_2e5b44;
        case 0x2e5b48u: goto label_2e5b48;
        case 0x2e5b4cu: goto label_2e5b4c;
        case 0x2e5b50u: goto label_2e5b50;
        case 0x2e5b54u: goto label_2e5b54;
        case 0x2e5b58u: goto label_2e5b58;
        case 0x2e5b5cu: goto label_2e5b5c;
        case 0x2e5b60u: goto label_2e5b60;
        case 0x2e5b64u: goto label_2e5b64;
        case 0x2e5b68u: goto label_2e5b68;
        case 0x2e5b6cu: goto label_2e5b6c;
        case 0x2e5b70u: goto label_2e5b70;
        case 0x2e5b74u: goto label_2e5b74;
        case 0x2e5b78u: goto label_2e5b78;
        case 0x2e5b7cu: goto label_2e5b7c;
        case 0x2e5b80u: goto label_2e5b80;
        case 0x2e5b84u: goto label_2e5b84;
        case 0x2e5b88u: goto label_2e5b88;
        case 0x2e5b8cu: goto label_2e5b8c;
        case 0x2e5b90u: goto label_2e5b90;
        case 0x2e5b94u: goto label_2e5b94;
        case 0x2e5b98u: goto label_2e5b98;
        case 0x2e5b9cu: goto label_2e5b9c;
        case 0x2e5ba0u: goto label_2e5ba0;
        case 0x2e5ba4u: goto label_2e5ba4;
        case 0x2e5ba8u: goto label_2e5ba8;
        case 0x2e5bacu: goto label_2e5bac;
        case 0x2e5bb0u: goto label_2e5bb0;
        case 0x2e5bb4u: goto label_2e5bb4;
        case 0x2e5bb8u: goto label_2e5bb8;
        case 0x2e5bbcu: goto label_2e5bbc;
        case 0x2e5bc0u: goto label_2e5bc0;
        case 0x2e5bc4u: goto label_2e5bc4;
        case 0x2e5bc8u: goto label_2e5bc8;
        case 0x2e5bccu: goto label_2e5bcc;
        case 0x2e5bd0u: goto label_2e5bd0;
        case 0x2e5bd4u: goto label_2e5bd4;
        case 0x2e5bd8u: goto label_2e5bd8;
        case 0x2e5bdcu: goto label_2e5bdc;
        case 0x2e5be0u: goto label_2e5be0;
        case 0x2e5be4u: goto label_2e5be4;
        case 0x2e5be8u: goto label_2e5be8;
        case 0x2e5becu: goto label_2e5bec;
        default: break;
    }

    ctx->pc = 0x2e5ae0u;

label_2e5ae0:
    // 0x2e5ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e5ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e5ae4:
    // 0x2e5ae4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e5ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e5ae8:
    // 0x2e5ae8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e5ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2e5aec:
    // 0x2e5aec: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2e5af0:
    // 0x2e5af0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e5af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e5af4:
    // 0x2e5af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5af8:
    // 0x2e5af8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e5af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2e5afc:
    // 0x2e5afc: 0x246323d0  addiu       $v1, $v1, 0x23D0
    ctx->pc = 0x2e5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9168));
label_2e5b00:
    // 0x2e5b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e5b04:
    // 0x2e5b04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e5b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e5b08:
    // 0x2e5b08: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2e5b0c:
    // 0x2e5b0c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2e5b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2e5b10:
    // 0x2e5b10: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2e5b14:
    // 0x2e5b14: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2e5b14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2e5b18:
    // 0x2e5b18: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e5b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2e5b1c:
    // 0x2e5b1c: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x2e5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_2e5b20:
    // 0x2e5b20: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e5b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2e5b24:
    // 0x2e5b24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e5b28:
    // 0x2e5b28: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e5b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2e5b2c:
    // 0x2e5b2c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2e5b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2e5b30:
    // 0x2e5b30: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2e5b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b34:
    // 0x2e5b34: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2e5b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b38:
    // 0x2e5b38: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2e5b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2e5b3c:
    // 0x2e5b3c: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x2e5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
label_2e5b40:
    // 0x2e5b40: 0xae0a003c  sw          $t2, 0x3C($s0)
    ctx->pc = 0x2e5b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 10));
label_2e5b44:
    // 0x2e5b44: 0xe60c0038  swc1        $f12, 0x38($s0)
    ctx->pc = 0x2e5b44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2e5b48:
    // 0x2e5b48: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2e5b48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_2e5b4c:
    // 0x2e5b4c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e5b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2e5b50:
    // 0x2e5b50: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2e5b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2e5b54:
    // 0x2e5b54: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2e5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2e5b58:
    // 0x2e5b58: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2e5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2e5b5c:
    // 0x2e5b5c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2e5b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2e5b60:
    // 0x2e5b60: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x2e5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e5b64:
    // 0x2e5b64: 0xa2070057  sb          $a3, 0x57($s0)
    ctx->pc = 0x2e5b64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 7));
label_2e5b68:
    // 0x2e5b68: 0xa20b005a  sb          $t3, 0x5A($s0)
    ctx->pc = 0x2e5b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 11));
label_2e5b6c:
    // 0x2e5b6c: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x2e5b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
label_2e5b70:
    // 0x2e5b70: 0xa2000055  sb          $zero, 0x55($s0)
    ctx->pc = 0x2e5b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
label_2e5b74:
    // 0x2e5b74: 0xa2000056  sb          $zero, 0x56($s0)
    ctx->pc = 0x2e5b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 0));
label_2e5b78:
    // 0x2e5b78: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x2e5b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
label_2e5b7c:
    // 0x2e5b7c: 0xa2000059  sb          $zero, 0x59($s0)
    ctx->pc = 0x2e5b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 0));
label_2e5b80:
    // 0x2e5b80: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x2e5b80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
label_2e5b84:
    // 0x2e5b84: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2e5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2e5b88:
    // 0x2e5b88: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2e5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2e5b8c:
    // 0x2e5b8c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2e5b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_2e5b90:
    // 0x2e5b90: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2e5b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2e5b94:
    // 0x2e5b94: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x2e5b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_2e5b98:
    // 0x2e5b98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e5b9c:
    // 0x2e5b9c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2e5b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2e5ba0:
    // 0x2e5ba0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2e5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2e5ba4:
    // 0x2e5ba4: 0x40f809  jalr        $v0
label_2e5ba8:
    if (ctx->pc == 0x2E5BA8u) {
        ctx->pc = 0x2E5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BA4u;
        // 0x2e5ba8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5BACu;
        goto label_2e5bac;
    }
    ctx->pc = 0x2E5BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5BACu);
        ctx->pc = 0x2E5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BA4u;
        // 0x2e5ba8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5BA4u, 0x2E5BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5BACu;
label_2e5bac:
    // 0x2e5bac: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2e5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2e5bb0:
    // 0x2e5bb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e5bb4:
    // 0x2e5bb4: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x2e5bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_2e5bb8:
    // 0x2e5bb8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e5bbc:
    // 0x2e5bbc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2e5bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2e5bc0:
    // 0x2e5bc0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2e5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2e5bc4:
    // 0x2e5bc4: 0x40f809  jalr        $v0
label_2e5bc8:
    if (ctx->pc == 0x2E5BC8u) {
        ctx->pc = 0x2E5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BC4u;
        // 0x2e5bc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5BCCu;
        goto label_2e5bcc;
    }
    ctx->pc = 0x2E5BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5BCCu);
        ctx->pc = 0x2E5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BC4u;
        // 0x2e5bc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5BC4u, 0x2E5BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5BCCu;
label_2e5bcc:
    // 0x2e5bcc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2e5bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_2e5bd0:
    // 0x2e5bd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e5bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5bd4:
    // 0x2e5bd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e5bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5bd8:
    // 0x2e5bd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e5bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e5bdc:
    // 0x2e5bdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e5bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5be0:
    // 0x2e5be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5be4:
    // 0x2e5be4: 0x3e00008  jr          $ra
label_2e5be8:
    if (ctx->pc == 0x2E5BE8u) {
        ctx->pc = 0x2E5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BE4u;
        // 0x2e5be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5BECu;
        goto label_2e5bec;
    }
    ctx->pc = 0x2E5BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BE4u;
        // 0x2e5be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5BECu;
label_2e5bec:
    // 0x2e5bec: 0x0  nop
    ctx->pc = 0x2e5becu;
    // NOP
    ctx->pc = 0x2e5bf0u;
}
