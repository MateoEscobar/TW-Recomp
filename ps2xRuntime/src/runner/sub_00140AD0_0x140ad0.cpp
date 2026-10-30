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

// Function: sub_00140AD0
// Address: 0x140ad0 - 0x140d68
void sub_00140AD0_0x140ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140AD0_0x140ad0");
#endif

    switch (ctx->pc) {
        case 0x140ad0u: goto label_140ad0;
        case 0x140ad4u: goto label_140ad4;
        case 0x140ad8u: goto label_140ad8;
        case 0x140adcu: goto label_140adc;
        case 0x140ae0u: goto label_140ae0;
        case 0x140ae4u: goto label_140ae4;
        case 0x140ae8u: goto label_140ae8;
        case 0x140aecu: goto label_140aec;
        case 0x140af0u: goto label_140af0;
        case 0x140af4u: goto label_140af4;
        case 0x140af8u: goto label_140af8;
        case 0x140afcu: goto label_140afc;
        case 0x140b00u: goto label_140b00;
        case 0x140b04u: goto label_140b04;
        case 0x140b08u: goto label_140b08;
        case 0x140b0cu: goto label_140b0c;
        case 0x140b10u: goto label_140b10;
        case 0x140b14u: goto label_140b14;
        case 0x140b18u: goto label_140b18;
        case 0x140b1cu: goto label_140b1c;
        case 0x140b20u: goto label_140b20;
        case 0x140b24u: goto label_140b24;
        case 0x140b28u: goto label_140b28;
        case 0x140b2cu: goto label_140b2c;
        case 0x140b30u: goto label_140b30;
        case 0x140b34u: goto label_140b34;
        case 0x140b38u: goto label_140b38;
        case 0x140b3cu: goto label_140b3c;
        case 0x140b40u: goto label_140b40;
        case 0x140b44u: goto label_140b44;
        case 0x140b48u: goto label_140b48;
        case 0x140b4cu: goto label_140b4c;
        case 0x140b50u: goto label_140b50;
        case 0x140b54u: goto label_140b54;
        case 0x140b58u: goto label_140b58;
        case 0x140b5cu: goto label_140b5c;
        case 0x140b60u: goto label_140b60;
        case 0x140b64u: goto label_140b64;
        case 0x140b68u: goto label_140b68;
        case 0x140b6cu: goto label_140b6c;
        case 0x140b70u: goto label_140b70;
        case 0x140b74u: goto label_140b74;
        case 0x140b78u: goto label_140b78;
        case 0x140b7cu: goto label_140b7c;
        case 0x140b80u: goto label_140b80;
        case 0x140b84u: goto label_140b84;
        case 0x140b88u: goto label_140b88;
        case 0x140b8cu: goto label_140b8c;
        case 0x140b90u: goto label_140b90;
        case 0x140b94u: goto label_140b94;
        case 0x140b98u: goto label_140b98;
        case 0x140b9cu: goto label_140b9c;
        case 0x140ba0u: goto label_140ba0;
        case 0x140ba4u: goto label_140ba4;
        case 0x140ba8u: goto label_140ba8;
        case 0x140bacu: goto label_140bac;
        case 0x140bb0u: goto label_140bb0;
        case 0x140bb4u: goto label_140bb4;
        case 0x140bb8u: goto label_140bb8;
        case 0x140bbcu: goto label_140bbc;
        case 0x140bc0u: goto label_140bc0;
        case 0x140bc4u: goto label_140bc4;
        case 0x140bc8u: goto label_140bc8;
        case 0x140bccu: goto label_140bcc;
        case 0x140bd0u: goto label_140bd0;
        case 0x140bd4u: goto label_140bd4;
        case 0x140bd8u: goto label_140bd8;
        case 0x140bdcu: goto label_140bdc;
        case 0x140be0u: goto label_140be0;
        case 0x140be4u: goto label_140be4;
        case 0x140be8u: goto label_140be8;
        case 0x140becu: goto label_140bec;
        case 0x140bf0u: goto label_140bf0;
        case 0x140bf4u: goto label_140bf4;
        case 0x140bf8u: goto label_140bf8;
        case 0x140bfcu: goto label_140bfc;
        case 0x140c00u: goto label_140c00;
        case 0x140c04u: goto label_140c04;
        case 0x140c08u: goto label_140c08;
        case 0x140c0cu: goto label_140c0c;
        case 0x140c10u: goto label_140c10;
        case 0x140c14u: goto label_140c14;
        case 0x140c18u: goto label_140c18;
        case 0x140c1cu: goto label_140c1c;
        case 0x140c20u: goto label_140c20;
        case 0x140c24u: goto label_140c24;
        case 0x140c28u: goto label_140c28;
        case 0x140c2cu: goto label_140c2c;
        case 0x140c30u: goto label_140c30;
        case 0x140c34u: goto label_140c34;
        case 0x140c38u: goto label_140c38;
        case 0x140c3cu: goto label_140c3c;
        case 0x140c40u: goto label_140c40;
        case 0x140c44u: goto label_140c44;
        case 0x140c48u: goto label_140c48;
        case 0x140c4cu: goto label_140c4c;
        case 0x140c50u: goto label_140c50;
        case 0x140c54u: goto label_140c54;
        case 0x140c58u: goto label_140c58;
        case 0x140c5cu: goto label_140c5c;
        case 0x140c60u: goto label_140c60;
        case 0x140c64u: goto label_140c64;
        case 0x140c68u: goto label_140c68;
        case 0x140c6cu: goto label_140c6c;
        case 0x140c70u: goto label_140c70;
        case 0x140c74u: goto label_140c74;
        case 0x140c78u: goto label_140c78;
        case 0x140c7cu: goto label_140c7c;
        case 0x140c80u: goto label_140c80;
        case 0x140c84u: goto label_140c84;
        case 0x140c88u: goto label_140c88;
        case 0x140c8cu: goto label_140c8c;
        case 0x140c90u: goto label_140c90;
        case 0x140c94u: goto label_140c94;
        case 0x140c98u: goto label_140c98;
        case 0x140c9cu: goto label_140c9c;
        case 0x140ca0u: goto label_140ca0;
        case 0x140ca4u: goto label_140ca4;
        case 0x140ca8u: goto label_140ca8;
        case 0x140cacu: goto label_140cac;
        case 0x140cb0u: goto label_140cb0;
        case 0x140cb4u: goto label_140cb4;
        case 0x140cb8u: goto label_140cb8;
        case 0x140cbcu: goto label_140cbc;
        case 0x140cc0u: goto label_140cc0;
        case 0x140cc4u: goto label_140cc4;
        case 0x140cc8u: goto label_140cc8;
        case 0x140cccu: goto label_140ccc;
        case 0x140cd0u: goto label_140cd0;
        case 0x140cd4u: goto label_140cd4;
        case 0x140cd8u: goto label_140cd8;
        case 0x140cdcu: goto label_140cdc;
        case 0x140ce0u: goto label_140ce0;
        case 0x140ce4u: goto label_140ce4;
        case 0x140ce8u: goto label_140ce8;
        case 0x140cecu: goto label_140cec;
        case 0x140cf0u: goto label_140cf0;
        case 0x140cf4u: goto label_140cf4;
        case 0x140cf8u: goto label_140cf8;
        case 0x140cfcu: goto label_140cfc;
        case 0x140d00u: goto label_140d00;
        case 0x140d04u: goto label_140d04;
        case 0x140d08u: goto label_140d08;
        case 0x140d0cu: goto label_140d0c;
        case 0x140d10u: goto label_140d10;
        case 0x140d14u: goto label_140d14;
        case 0x140d18u: goto label_140d18;
        case 0x140d1cu: goto label_140d1c;
        case 0x140d20u: goto label_140d20;
        case 0x140d24u: goto label_140d24;
        case 0x140d28u: goto label_140d28;
        case 0x140d2cu: goto label_140d2c;
        case 0x140d30u: goto label_140d30;
        case 0x140d34u: goto label_140d34;
        case 0x140d38u: goto label_140d38;
        case 0x140d3cu: goto label_140d3c;
        case 0x140d40u: goto label_140d40;
        case 0x140d44u: goto label_140d44;
        case 0x140d48u: goto label_140d48;
        case 0x140d4cu: goto label_140d4c;
        case 0x140d50u: goto label_140d50;
        case 0x140d54u: goto label_140d54;
        case 0x140d58u: goto label_140d58;
        case 0x140d5cu: goto label_140d5c;
        case 0x140d60u: goto label_140d60;
        case 0x140d64u: goto label_140d64;
        default: break;
    }

    ctx->pc = 0x140ad0u;

label_140ad0:
    // 0x140ad0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x140ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_140ad4:
    // 0x140ad4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x140ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_140ad8:
    // 0x140ad8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x140ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_140adc:
    // 0x140adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x140adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140ae0:
    // 0x140ae0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x140ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_140ae4:
    // 0x140ae4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x140ae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140ae8:
    // 0x140ae8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x140ae8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_140aec:
    // 0x140aec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x140aecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_140af0:
    // 0x140af0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x140af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_140af4:
    // 0x140af4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x140af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_140af8:
    // 0x140af8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x140af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_140afc:
    // 0x140afc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x140afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_140b00:
    // 0x140b00: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x140b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_140b04:
    // 0x140b04: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x140b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_140b08:
    // 0x140b08: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_140b0c:
    if (ctx->pc == 0x140B0Cu) {
        ctx->pc = 0x140B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B08u;
        // 0x140b0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B10u;
        goto label_140b10;
    }
    ctx->pc = 0x140B08u;
    {
        const bool branch_taken_0x140b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B08u;
        // 0x140b0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b08) {
            ctx->pc = 0x140D38u;
            goto label_140d38;
        }
    }
    ctx->pc = 0x140B10u;
label_140b10:
    // 0x140b10: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x140b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_140b14:
    // 0x140b14: 0x12000088  beqz        $s0, . + 4 + (0x88 << 2)
label_140b18:
    if (ctx->pc == 0x140B18u) {
        ctx->pc = 0x140B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B14u;
        // 0x140b18: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B1Cu;
        goto label_140b1c;
    }
    ctx->pc = 0x140B14u;
    {
        const bool branch_taken_0x140b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B14u;
        // 0x140b18: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b14) {
            ctx->pc = 0x140D38u;
            goto label_140d38;
        }
    }
    ctx->pc = 0x140B1Cu;
label_140b1c:
    // 0x140b1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x140b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140b20:
    // 0x140b20: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x140b20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_140b24:
    // 0x140b24: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_140b28:
    // 0x140b28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x140b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_140b2c:
    // 0x140b2c: 0x26260320  addiu       $a2, $s1, 0x320
    ctx->pc = 0x140b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_140b30:
    // 0x140b30: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x140b30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_140b34:
    // 0x140b34: 0xc136b18  jal         func_4DAC60
label_140b38:
    if (ctx->pc == 0x140B38u) {
        ctx->pc = 0x140B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B34u;
        // 0x140b38: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B3Cu;
        goto label_140b3c;
    }
    ctx->pc = 0x140B34u;
    SET_GPR_U32(ctx, 31, 0x140B3Cu);
    ctx->pc = 0x140B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B34u;
    // 0x140b38: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x140B34u, 0x140B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B3Cu;
label_140b3c:
    // 0x140b3c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x140b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_140b40:
    // 0x140b40: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x140b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_140b44:
    // 0x140b44: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_140b48:
    if (ctx->pc == 0x140B48u) {
        ctx->pc = 0x140B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B44u;
        // 0x140b48: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B4Cu;
        goto label_140b4c;
    }
    ctx->pc = 0x140B44u;
    {
        const bool branch_taken_0x140b44 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B44u;
        // 0x140b48: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b44) {
            ctx->pc = 0x140B80u;
            goto label_140b80;
        }
    }
    ctx->pc = 0x140B4Cu;
label_140b4c:
    // 0x140b4c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x140b4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_140b50:
    // 0x140b50: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x140b50u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_140b54:
    // 0x140b54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_140b58:
    if (ctx->pc == 0x140B58u) {
        ctx->pc = 0x140B5Cu;
        goto label_140b5c;
    }
    ctx->pc = 0x140B54u;
    {
        const bool branch_taken_0x140b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140b54) {
            ctx->pc = 0x140B74u;
            goto label_140b74;
        }
    }
    ctx->pc = 0x140B5Cu;
label_140b5c:
    // 0x140b5c: 0xc087408  jal         func_21D020
label_140b60:
    if (ctx->pc == 0x140B60u) {
        ctx->pc = 0x140B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B5Cu;
        // 0x140b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B64u;
        goto label_140b64;
    }
    ctx->pc = 0x140B5Cu;
    SET_GPR_U32(ctx, 31, 0x140B64u);
    ctx->pc = 0x140B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B5Cu;
    // 0x140b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x140B5Cu, 0x140B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B64u;
label_140b64:
    // 0x140b64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x140b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_140b68:
    // 0x140b68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x140b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140b6c:
    // 0x140b6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_140b70:
    if (ctx->pc == 0x140B70u) {
        ctx->pc = 0x140B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B6Cu;
        // 0x140b70: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B74u;
        goto label_140b74;
    }
    ctx->pc = 0x140B6Cu;
    {
        const bool branch_taken_0x140b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B6Cu;
        // 0x140b70: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b6c) {
            ctx->pc = 0x140B80u;
            goto label_140b80;
        }
    }
    ctx->pc = 0x140B74u;
label_140b74:
    // 0x140b74: 0xc086618  jal         func_219860
label_140b78:
    if (ctx->pc == 0x140B78u) {
        ctx->pc = 0x140B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B74u;
        // 0x140b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B7Cu;
        goto label_140b7c;
    }
    ctx->pc = 0x140B74u;
    SET_GPR_U32(ctx, 31, 0x140B7Cu);
    ctx->pc = 0x140B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B74u;
    // 0x140b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x140B74u, 0x140B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B7Cu;
label_140b7c:
    // 0x140b7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x140b7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_140b80:
    // 0x140b80: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x140b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_140b84:
    // 0x140b84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x140b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140b88:
    // 0x140b88: 0x244692d0  addiu       $a2, $v0, -0x6D30
    ctx->pc = 0x140b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
label_140b8c:
    // 0x140b8c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x140b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_140b90:
    // 0x140b90: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x140b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_140b94:
    // 0x140b94: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x140b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_140b98:
    // 0x140b98: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x140b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_140b9c:
    // 0x140b9c: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x140b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_140ba0:
    // 0x140ba0: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x140ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_140ba4:
    // 0x140ba4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x140ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_140ba8:
    // 0x140ba8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x140ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140bac:
    // 0x140bac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x140bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_140bb0:
    // 0x140bb0: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x140bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_140bb4:
    // 0x140bb4: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x140bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_140bb8:
    // 0x140bb8: 0x40f809  jalr        $v0
label_140bbc:
    if (ctx->pc == 0x140BBCu) {
        ctx->pc = 0x140BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BB8u;
        // 0x140bbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BC0u;
        goto label_140bc0;
    }
    ctx->pc = 0x140BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140BC0u);
        ctx->pc = 0x140BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BB8u;
        // 0x140bbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140BB8u, 0x140BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140BC0u;
label_140bc0:
    // 0x140bc0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x140bc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_140bc4:
    // 0x140bc4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x140bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_140bc8:
    // 0x140bc8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x140bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_140bcc:
    // 0x140bcc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140bccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140bd0:
    // 0x140bd0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x140bd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_140bd4:
    // 0x140bd4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x140bd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140bd8:
    // 0x140bd8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x140bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140bdc:
    // 0x140bdc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x140bdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140be0:
    // 0x140be0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x140be0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_140be4:
    // 0x140be4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x140be4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140be8:
    // 0x140be8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x140be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140bec:
    // 0x140bec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140becu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_140bf0:
    // 0x140bf0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x140bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140bf4:
    // 0x140bf4: 0x0  nop
    ctx->pc = 0x140bf4u;
    // NOP
label_140bf8:
    // 0x140bf8: 0x45010050  bc1t        . + 4 + (0x50 << 2)
label_140bfc:
    if (ctx->pc == 0x140BFCu) {
        ctx->pc = 0x140BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BF8u;
        // 0x140bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C00u;
        goto label_140c00;
    }
    ctx->pc = 0x140BF8u;
    {
        const bool branch_taken_0x140bf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x140BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BF8u;
        // 0x140bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bf8) {
            ctx->pc = 0x140D3Cu;
            goto label_140d3c;
        }
    }
    ctx->pc = 0x140C00u;
label_140c00:
    // 0x140c00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x140c00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_140c04:
    // 0x140c04: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x140c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_140c08:
    // 0x140c08: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_140c0c:
    if (ctx->pc == 0x140C0Cu) {
        ctx->pc = 0x140C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C08u;
        // 0x140c0c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C10u;
        goto label_140c10;
    }
    ctx->pc = 0x140C08u;
    {
        const bool branch_taken_0x140c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C08u;
        // 0x140c0c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c08) {
            ctx->pc = 0x140BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140ba8;
        }
    }
    ctx->pc = 0x140C10u;
label_140c10:
    // 0x140c10: 0x922203e6  lbu         $v0, 0x3E6($s1)
    ctx->pc = 0x140c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 998)));
label_140c14:
    // 0x140c14: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
label_140c18:
    if (ctx->pc == 0x140C18u) {
        ctx->pc = 0x140C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C14u;
        // 0x140c18: 0x8e220348  lw          $v0, 0x348($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C1Cu;
        goto label_140c1c;
    }
    ctx->pc = 0x140C14u;
    {
        const bool branch_taken_0x140c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c14) {
            ctx->pc = 0x140C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140C14u;
            // 0x140c18: 0x8e220348  lw          $v0, 0x348($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140D1Cu;
            goto label_140d1c;
        }
    }
    ctx->pc = 0x140C1Cu;
label_140c1c:
    // 0x140c1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x140c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140c20:
    // 0x140c20: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x140c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_140c24:
    // 0x140c24: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x140c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_140c28:
    // 0x140c28: 0x40f809  jalr        $v0
label_140c2c:
    if (ctx->pc == 0x140C2Cu) {
        ctx->pc = 0x140C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C28u;
        // 0x140c2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C30u;
        goto label_140c30;
    }
    ctx->pc = 0x140C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140C30u);
        ctx->pc = 0x140C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C28u;
        // 0x140c2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140C28u, 0x140C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140C30u;
label_140c30:
    // 0x140c30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x140c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_140c34:
    // 0x140c34: 0xc0cd8ec  jal         func_3363B0
label_140c38:
    if (ctx->pc == 0x140C38u) {
        ctx->pc = 0x140C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C34u;
        // 0x140c38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C3Cu;
        goto label_140c3c;
    }
    ctx->pc = 0x140C34u;
    SET_GPR_U32(ctx, 31, 0x140C3Cu);
    ctx->pc = 0x140C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C34u;
    // 0x140c38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x140C34u, 0x140C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C3Cu;
label_140c3c:
    // 0x140c3c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x140c3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_140c40:
    // 0x140c40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x140c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140c44:
    // 0x140c44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140c48:
    // 0x140c48: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x140c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_140c4c:
    // 0x140c4c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x140c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_140c50:
    // 0x140c50: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x140c50u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_140c54:
    // 0x140c54: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x140c54u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_140c58:
    // 0x140c58: 0x4a0003bf  vwaitq
    ctx->pc = 0x140c58u;
    // VWAITQ (Q already resolved in this runtime)
label_140c5c:
    // 0x140c5c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x140c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_140c60:
    // 0x140c60: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x140c60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_140c64:
    // 0x140c64: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x140c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_140c68:
    // 0x140c68: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x140c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_140c6c:
    // 0x140c6c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x140c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_140c70:
    // 0x140c70: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x140c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_140c74:
    // 0x140c74: 0x40f809  jalr        $v0
label_140c78:
    if (ctx->pc == 0x140C78u) {
        ctx->pc = 0x140C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C74u;
        // 0x140c78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C7Cu;
        goto label_140c7c;
    }
    ctx->pc = 0x140C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140C7Cu);
        ctx->pc = 0x140C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C74u;
        // 0x140c78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140C74u, 0x140C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140C7Cu;
label_140c7c:
    // 0x140c7c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x140c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_140c80:
    // 0x140c80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x140c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_140c84:
    // 0x140c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140c88:
    // 0x140c88: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x140c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_140c8c:
    // 0x140c8c: 0xc136b24  jal         func_4DAC90
label_140c90:
    if (ctx->pc == 0x140C90u) {
        ctx->pc = 0x140C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C8Cu;
        // 0x140c90: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C94u;
        goto label_140c94;
    }
    ctx->pc = 0x140C8Cu;
    SET_GPR_U32(ctx, 31, 0x140C94u);
    ctx->pc = 0x140C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C8Cu;
    // 0x140c90: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x140C8Cu, 0x140C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C94u;
label_140c94:
    // 0x140c94: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x140c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_140c98:
    // 0x140c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140c9c:
    // 0x140c9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x140c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_140ca0:
    // 0x140ca0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_140ca4:
    // 0x140ca4: 0xc136b18  jal         func_4DAC60
label_140ca8:
    if (ctx->pc == 0x140CA8u) {
        ctx->pc = 0x140CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CA4u;
        // 0x140ca8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CACu;
        goto label_140cac;
    }
    ctx->pc = 0x140CA4u;
    SET_GPR_U32(ctx, 31, 0x140CACu);
    ctx->pc = 0x140CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CA4u;
    // 0x140ca8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x140CA4u, 0x140CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CACu;
label_140cac:
    // 0x140cac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x140cacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_140cb0:
    // 0x140cb0: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x140cb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_140cb4:
    // 0x140cb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140cb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140cb8:
    // 0x140cb8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x140cb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_140cbc:
    // 0x140cbc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x140cbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140cc0:
    // 0x140cc0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x140cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140cc4:
    // 0x140cc4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x140cc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140cc8:
    // 0x140cc8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x140cc8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_140ccc:
    // 0x140ccc: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x140cccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_140cd0:
    // 0x140cd0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x140cd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140cd4:
    // 0x140cd4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x140cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_140cd8:
    // 0x140cd8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x140cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_140cdc:
    // 0x140cdc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x140cdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_140ce0:
    // 0x140ce0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x140ce0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_140ce4:
    // 0x140ce4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x140ce4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140ce8:
    // 0x140ce8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x140ce8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140cec:
    // 0x140cec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x140cecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140cf0:
    // 0x140cf0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x140cf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140cf4:
    // 0x140cf4: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x140cf4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_140cf8:
    // 0x140cf8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x140cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_140cfc:
    // 0x140cfc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x140cfcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140d00:
    // 0x140d00: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x140d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140d04:
    // 0x140d04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140d04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_140d08:
    // 0x140d08: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x140d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140d0c:
    // 0x140d0c: 0x0  nop
    ctx->pc = 0x140d0cu;
    // NOP
label_140d10:
    // 0x140d10: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_140d14:
    if (ctx->pc == 0x140D14u) {
        ctx->pc = 0x140D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D10u;
        // 0x140d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D18u;
        goto label_140d18;
    }
    ctx->pc = 0x140D10u;
    {
        const bool branch_taken_0x140d10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x140D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D10u;
        // 0x140d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d10) {
            ctx->pc = 0x140D3Cu;
            goto label_140d3c;
        }
    }
    ctx->pc = 0x140D18u;
label_140d18:
    // 0x140d18: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x140d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_140d1c:
    // 0x140d1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x140d1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_140d20:
    // 0x140d20: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x140d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_140d24:
    // 0x140d24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_140d28:
    if (ctx->pc == 0x140D28u) {
        ctx->pc = 0x140D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D24u;
        // 0x140d28: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D2Cu;
        goto label_140d2c;
    }
    ctx->pc = 0x140D24u;
    {
        const bool branch_taken_0x140d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D24u;
        // 0x140d28: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d24) {
            ctx->pc = 0x140D38u;
            goto label_140d38;
        }
    }
    ctx->pc = 0x140D2Cu;
label_140d2c:
    // 0x140d2c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x140d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_140d30:
    // 0x140d30: 0x5600ff7d  bnel        $s0, $zero, . + 4 + (-0x83 << 2)
label_140d34:
    if (ctx->pc == 0x140D34u) {
        ctx->pc = 0x140D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D30u;
        // 0x140d34: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D38u;
        goto label_140d38;
    }
    ctx->pc = 0x140D30u;
    {
        const bool branch_taken_0x140d30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x140d30) {
            ctx->pc = 0x140D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140D30u;
            // 0x140d34: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140b28;
        }
    }
    ctx->pc = 0x140D38u;
label_140d38:
    // 0x140d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140d3c:
    // 0x140d3c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x140d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_140d40:
    // 0x140d40: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x140d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_140d44:
    // 0x140d44: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x140d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_140d48:
    // 0x140d48: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x140d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_140d4c:
    // 0x140d4c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x140d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_140d50:
    // 0x140d50: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x140d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_140d54:
    // 0x140d54: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x140d54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_140d58:
    // 0x140d58: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x140d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_140d5c:
    // 0x140d5c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x140d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_140d60:
    // 0x140d60: 0x3e00008  jr          $ra
label_140d64:
    if (ctx->pc == 0x140D64u) {
        ctx->pc = 0x140D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D60u;
        // 0x140d64: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D68u;
        goto label_fallthrough_0x140d60;
    }
    ctx->pc = 0x140D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D60u;
        // 0x140d64: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140d60:
    ctx->pc = 0x140D68u;
}
