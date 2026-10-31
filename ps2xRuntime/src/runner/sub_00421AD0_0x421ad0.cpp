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

// Function: sub_00421AD0
// Address: 0x421ad0 - 0x421d98
void sub_00421AD0_0x421ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421AD0_0x421ad0");
#endif

    switch (ctx->pc) {
        case 0x421ad0u: goto label_421ad0;
        case 0x421ad4u: goto label_421ad4;
        case 0x421ad8u: goto label_421ad8;
        case 0x421adcu: goto label_421adc;
        case 0x421ae0u: goto label_421ae0;
        case 0x421ae4u: goto label_421ae4;
        case 0x421ae8u: goto label_421ae8;
        case 0x421aecu: goto label_421aec;
        case 0x421af0u: goto label_421af0;
        case 0x421af4u: goto label_421af4;
        case 0x421af8u: goto label_421af8;
        case 0x421afcu: goto label_421afc;
        case 0x421b00u: goto label_421b00;
        case 0x421b04u: goto label_421b04;
        case 0x421b08u: goto label_421b08;
        case 0x421b0cu: goto label_421b0c;
        case 0x421b10u: goto label_421b10;
        case 0x421b14u: goto label_421b14;
        case 0x421b18u: goto label_421b18;
        case 0x421b1cu: goto label_421b1c;
        case 0x421b20u: goto label_421b20;
        case 0x421b24u: goto label_421b24;
        case 0x421b28u: goto label_421b28;
        case 0x421b2cu: goto label_421b2c;
        case 0x421b30u: goto label_421b30;
        case 0x421b34u: goto label_421b34;
        case 0x421b38u: goto label_421b38;
        case 0x421b3cu: goto label_421b3c;
        case 0x421b40u: goto label_421b40;
        case 0x421b44u: goto label_421b44;
        case 0x421b48u: goto label_421b48;
        case 0x421b4cu: goto label_421b4c;
        case 0x421b50u: goto label_421b50;
        case 0x421b54u: goto label_421b54;
        case 0x421b58u: goto label_421b58;
        case 0x421b5cu: goto label_421b5c;
        case 0x421b60u: goto label_421b60;
        case 0x421b64u: goto label_421b64;
        case 0x421b68u: goto label_421b68;
        case 0x421b6cu: goto label_421b6c;
        case 0x421b70u: goto label_421b70;
        case 0x421b74u: goto label_421b74;
        case 0x421b78u: goto label_421b78;
        case 0x421b7cu: goto label_421b7c;
        case 0x421b80u: goto label_421b80;
        case 0x421b84u: goto label_421b84;
        case 0x421b88u: goto label_421b88;
        case 0x421b8cu: goto label_421b8c;
        case 0x421b90u: goto label_421b90;
        case 0x421b94u: goto label_421b94;
        case 0x421b98u: goto label_421b98;
        case 0x421b9cu: goto label_421b9c;
        case 0x421ba0u: goto label_421ba0;
        case 0x421ba4u: goto label_421ba4;
        case 0x421ba8u: goto label_421ba8;
        case 0x421bacu: goto label_421bac;
        case 0x421bb0u: goto label_421bb0;
        case 0x421bb4u: goto label_421bb4;
        case 0x421bb8u: goto label_421bb8;
        case 0x421bbcu: goto label_421bbc;
        case 0x421bc0u: goto label_421bc0;
        case 0x421bc4u: goto label_421bc4;
        case 0x421bc8u: goto label_421bc8;
        case 0x421bccu: goto label_421bcc;
        case 0x421bd0u: goto label_421bd0;
        case 0x421bd4u: goto label_421bd4;
        case 0x421bd8u: goto label_421bd8;
        case 0x421bdcu: goto label_421bdc;
        case 0x421be0u: goto label_421be0;
        case 0x421be4u: goto label_421be4;
        case 0x421be8u: goto label_421be8;
        case 0x421becu: goto label_421bec;
        case 0x421bf0u: goto label_421bf0;
        case 0x421bf4u: goto label_421bf4;
        case 0x421bf8u: goto label_421bf8;
        case 0x421bfcu: goto label_421bfc;
        case 0x421c00u: goto label_421c00;
        case 0x421c04u: goto label_421c04;
        case 0x421c08u: goto label_421c08;
        case 0x421c0cu: goto label_421c0c;
        case 0x421c10u: goto label_421c10;
        case 0x421c14u: goto label_421c14;
        case 0x421c18u: goto label_421c18;
        case 0x421c1cu: goto label_421c1c;
        case 0x421c20u: goto label_421c20;
        case 0x421c24u: goto label_421c24;
        case 0x421c28u: goto label_421c28;
        case 0x421c2cu: goto label_421c2c;
        case 0x421c30u: goto label_421c30;
        case 0x421c34u: goto label_421c34;
        case 0x421c38u: goto label_421c38;
        case 0x421c3cu: goto label_421c3c;
        case 0x421c40u: goto label_421c40;
        case 0x421c44u: goto label_421c44;
        case 0x421c48u: goto label_421c48;
        case 0x421c4cu: goto label_421c4c;
        case 0x421c50u: goto label_421c50;
        case 0x421c54u: goto label_421c54;
        case 0x421c58u: goto label_421c58;
        case 0x421c5cu: goto label_421c5c;
        case 0x421c60u: goto label_421c60;
        case 0x421c64u: goto label_421c64;
        case 0x421c68u: goto label_421c68;
        case 0x421c6cu: goto label_421c6c;
        case 0x421c70u: goto label_421c70;
        case 0x421c74u: goto label_421c74;
        case 0x421c78u: goto label_421c78;
        case 0x421c7cu: goto label_421c7c;
        case 0x421c80u: goto label_421c80;
        case 0x421c84u: goto label_421c84;
        case 0x421c88u: goto label_421c88;
        case 0x421c8cu: goto label_421c8c;
        case 0x421c90u: goto label_421c90;
        case 0x421c94u: goto label_421c94;
        case 0x421c98u: goto label_421c98;
        case 0x421c9cu: goto label_421c9c;
        case 0x421ca0u: goto label_421ca0;
        case 0x421ca4u: goto label_421ca4;
        case 0x421ca8u: goto label_421ca8;
        case 0x421cacu: goto label_421cac;
        case 0x421cb0u: goto label_421cb0;
        case 0x421cb4u: goto label_421cb4;
        case 0x421cb8u: goto label_421cb8;
        case 0x421cbcu: goto label_421cbc;
        case 0x421cc0u: goto label_421cc0;
        case 0x421cc4u: goto label_421cc4;
        case 0x421cc8u: goto label_421cc8;
        case 0x421cccu: goto label_421ccc;
        case 0x421cd0u: goto label_421cd0;
        case 0x421cd4u: goto label_421cd4;
        case 0x421cd8u: goto label_421cd8;
        case 0x421cdcu: goto label_421cdc;
        case 0x421ce0u: goto label_421ce0;
        case 0x421ce4u: goto label_421ce4;
        case 0x421ce8u: goto label_421ce8;
        case 0x421cecu: goto label_421cec;
        case 0x421cf0u: goto label_421cf0;
        case 0x421cf4u: goto label_421cf4;
        case 0x421cf8u: goto label_421cf8;
        case 0x421cfcu: goto label_421cfc;
        case 0x421d00u: goto label_421d00;
        case 0x421d04u: goto label_421d04;
        case 0x421d08u: goto label_421d08;
        case 0x421d0cu: goto label_421d0c;
        case 0x421d10u: goto label_421d10;
        case 0x421d14u: goto label_421d14;
        case 0x421d18u: goto label_421d18;
        case 0x421d1cu: goto label_421d1c;
        case 0x421d20u: goto label_421d20;
        case 0x421d24u: goto label_421d24;
        case 0x421d28u: goto label_421d28;
        case 0x421d2cu: goto label_421d2c;
        case 0x421d30u: goto label_421d30;
        case 0x421d34u: goto label_421d34;
        case 0x421d38u: goto label_421d38;
        case 0x421d3cu: goto label_421d3c;
        case 0x421d40u: goto label_421d40;
        case 0x421d44u: goto label_421d44;
        case 0x421d48u: goto label_421d48;
        case 0x421d4cu: goto label_421d4c;
        case 0x421d50u: goto label_421d50;
        case 0x421d54u: goto label_421d54;
        case 0x421d58u: goto label_421d58;
        case 0x421d5cu: goto label_421d5c;
        case 0x421d60u: goto label_421d60;
        case 0x421d64u: goto label_421d64;
        case 0x421d68u: goto label_421d68;
        case 0x421d6cu: goto label_421d6c;
        case 0x421d70u: goto label_421d70;
        case 0x421d74u: goto label_421d74;
        case 0x421d78u: goto label_421d78;
        case 0x421d7cu: goto label_421d7c;
        case 0x421d80u: goto label_421d80;
        case 0x421d84u: goto label_421d84;
        case 0x421d88u: goto label_421d88;
        case 0x421d8cu: goto label_421d8c;
        case 0x421d90u: goto label_421d90;
        case 0x421d94u: goto label_421d94;
        default: break;
    }

    ctx->pc = 0x421ad0u;

label_421ad0:
    // 0x421ad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x421ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_421ad4:
    // 0x421ad4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x421ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_421ad8:
    // 0x421ad8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x421ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_421adc:
    // 0x421adc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x421adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_421ae0:
    // 0x421ae0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x421ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_421ae4:
    // 0x421ae4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x421ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_421ae8:
    // 0x421ae8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x421ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_421aec:
    // 0x421aec: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x421aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_421af0:
    // 0x421af0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x421af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421af4:
    // 0x421af4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x421af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_421af8:
    // 0x421af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x421af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_421afc:
    // 0x421afc: 0xc108674  jal         func_4219D0
label_421b00:
    if (ctx->pc == 0x421B00u) {
        ctx->pc = 0x421B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421AFCu;
        // 0x421b00: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B04u;
        goto label_421b04;
    }
    ctx->pc = 0x421AFCu;
    SET_GPR_U32(ctx, 31, 0x421B04u);
    ctx->pc = 0x421B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421AFCu;
    // 0x421b00: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4219D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4219D0u, 0x421AFCu, 0x421B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421B04u;
label_421b04:
    // 0x421b04: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x421b04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_421b08:
    // 0x421b08: 0xc108ca0  jal         func_423280
label_421b0c:
    if (ctx->pc == 0x421B0Cu) {
        ctx->pc = 0x421B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B08u;
        // 0x421b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B10u;
        goto label_421b10;
    }
    ctx->pc = 0x421B08u;
    SET_GPR_U32(ctx, 31, 0x421B10u);
    ctx->pc = 0x421B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421B08u;
    // 0x421b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423280u, 0x421B08u, 0x421B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421B10u;
label_421b10:
    // 0x421b10: 0xc1092e4  jal         func_424B90
label_421b14:
    if (ctx->pc == 0x421B14u) {
        ctx->pc = 0x421B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B10u;
        // 0x421b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B18u;
        goto label_421b18;
    }
    ctx->pc = 0x421B10u;
    SET_GPR_U32(ctx, 31, 0x421B18u);
    ctx->pc = 0x421B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421B10u;
    // 0x421b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424B90u, 0x421B10u, 0x421B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421B18u;
label_421b18:
    // 0x421b18: 0xc080c10  jal         func_203040
label_421b1c:
    if (ctx->pc == 0x421B1Cu) {
        ctx->pc = 0x421B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B18u;
        // 0x421b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B20u;
        goto label_421b20;
    }
    ctx->pc = 0x421B18u;
    SET_GPR_U32(ctx, 31, 0x421B20u);
    ctx->pc = 0x421B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421B18u;
    // 0x421b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203040u, 0x421B18u, 0x421B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421B20u;
label_421b20:
    // 0x421b20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421b24:
    // 0x421b24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x421b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421b28:
    // 0x421b28: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421b2c:
    // 0x421b2c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421b30:
    // 0x421b30: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421b34:
    // 0x421b34: 0x40f809  jalr        $v0
label_421b38:
    if (ctx->pc == 0x421B38u) {
        ctx->pc = 0x421B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B34u;
        // 0x421b38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B3Cu;
        goto label_421b3c;
    }
    ctx->pc = 0x421B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421B3Cu);
        ctx->pc = 0x421B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B34u;
        // 0x421b38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421B34u, 0x421B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421B3Cu;
label_421b3c:
    // 0x421b3c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x421b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_421b40:
    // 0x421b40: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x421b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_421b44:
    // 0x421b44: 0xc1078ec  jal         func_41E3B0
label_421b48:
    if (ctx->pc == 0x421B48u) {
        ctx->pc = 0x421B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B44u;
        // 0x421b48: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B4Cu;
        goto label_421b4c;
    }
    ctx->pc = 0x421B44u;
    SET_GPR_U32(ctx, 31, 0x421B4Cu);
    ctx->pc = 0x421B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421B44u;
    // 0x421b48: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3B0u, 0x421B44u, 0x421B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421B4Cu;
label_421b4c:
    // 0x421b4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x421b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421b50:
    // 0x421b50: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x421b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_421b54:
    // 0x421b54: 0x8e05489c  lw          $a1, 0x489C($s0)
    ctx->pc = 0x421b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_421b58:
    // 0x421b58: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x421b58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_421b5c:
    // 0x421b5c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x421b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_421b60:
    // 0x421b60: 0x24a557a0  addiu       $a1, $a1, 0x57A0
    ctx->pc = 0x421b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22432));
label_421b64:
    // 0x421b64: 0x60f809  jalr        $v1
label_421b68:
    if (ctx->pc == 0x421B68u) {
        ctx->pc = 0x421B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B64u;
        // 0x421b68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B6Cu;
        goto label_421b6c;
    }
    ctx->pc = 0x421B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421B6Cu);
        ctx->pc = 0x421B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B64u;
        // 0x421b68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421B64u, 0x421B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421B6Cu;
label_421b6c:
    // 0x421b6c: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x421b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_421b70:
    // 0x421b70: 0xc06d20e  jal         func_1B4838
label_421b74:
    if (ctx->pc == 0x421B74u) {
        ctx->pc = 0x421B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B70u;
        // 0x421b74: 0x904457a4  lbu         $a0, 0x57A4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B78u;
        goto label_421b78;
    }
    ctx->pc = 0x421B70u;
    SET_GPR_U32(ctx, 31, 0x421B78u);
    ctx->pc = 0x421B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421B70u;
    // 0x421b74: 0x904457a4  lbu         $a0, 0x57A4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4838u, 0x421B70u, 0x421B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421B78u;
label_421b78:
    // 0x421b78: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x421b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_421b7c:
    // 0x421b7c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x421b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_421b80:
    // 0x421b80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421b84:
    // 0x421b84: 0x0  nop
    ctx->pc = 0x421b84u;
    // NOP
label_421b88:
    // 0x421b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x421b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_421b8c:
    // 0x421b8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421b90:
    // 0x421b90: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421b94:
    // 0x421b94: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421b98:
    // 0x421b98: 0x40f809  jalr        $v0
label_421b9c:
    if (ctx->pc == 0x421B9Cu) {
        ctx->pc = 0x421B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B98u;
        // 0x421b9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421BA0u;
        goto label_421ba0;
    }
    ctx->pc = 0x421B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421BA0u);
        ctx->pc = 0x421B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B98u;
        // 0x421b9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421B98u, 0x421BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421BA0u;
label_421ba0:
    // 0x421ba0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x421ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_421ba4:
    // 0x421ba4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x421ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_421ba8:
    // 0x421ba8: 0xc1062a2  jal         func_418A88
label_421bac:
    if (ctx->pc == 0x421BACu) {
        ctx->pc = 0x421BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421BA8u;
        // 0x421bac: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421BB0u;
        goto label_421bb0;
    }
    ctx->pc = 0x421BA8u;
    SET_GPR_U32(ctx, 31, 0x421BB0u);
    ctx->pc = 0x421BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421BA8u;
    // 0x421bac: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418A88u, 0x421BA8u, 0x421BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421BB0u;
label_421bb0:
    // 0x421bb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421bb4:
    // 0x421bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x421bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_421bb8:
    // 0x421bb8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421bbc:
    // 0x421bbc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421bc0:
    // 0x421bc0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421bc4:
    // 0x421bc4: 0x40f809  jalr        $v0
label_421bc8:
    if (ctx->pc == 0x421BC8u) {
        ctx->pc = 0x421BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421BC4u;
        // 0x421bc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421BCCu;
        goto label_421bcc;
    }
    ctx->pc = 0x421BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421BCCu);
        ctx->pc = 0x421BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421BC4u;
        // 0x421bc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421BC4u, 0x421BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421BCCu;
label_421bcc:
    // 0x421bcc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x421bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_421bd0:
    // 0x421bd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x421bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_421bd4:
    // 0x421bd4: 0xc1062aa  jal         func_418AA8
label_421bd8:
    if (ctx->pc == 0x421BD8u) {
        ctx->pc = 0x421BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421BD4u;
        // 0x421bd8: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421BDCu;
        goto label_421bdc;
    }
    ctx->pc = 0x421BD4u;
    SET_GPR_U32(ctx, 31, 0x421BDCu);
    ctx->pc = 0x421BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421BD4u;
    // 0x421bd8: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AA8u, 0x421BD4u, 0x421BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421BDCu;
label_421bdc:
    // 0x421bdc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421be0:
    // 0x421be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x421be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_421be4:
    // 0x421be4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421be8:
    // 0x421be8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421bec:
    // 0x421bec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421bf0:
    // 0x421bf0: 0x40f809  jalr        $v0
label_421bf4:
    if (ctx->pc == 0x421BF4u) {
        ctx->pc = 0x421BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421BF0u;
        // 0x421bf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421BF8u;
        goto label_421bf8;
    }
    ctx->pc = 0x421BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421BF8u);
        ctx->pc = 0x421BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421BF0u;
        // 0x421bf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421BF0u, 0x421BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421BF8u;
label_421bf8:
    // 0x421bf8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x421bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_421bfc:
    // 0x421bfc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x421bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_421c00:
    // 0x421c00: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x421c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_421c04:
    // 0x421c04: 0xc106904  jal         func_41A410
label_421c08:
    if (ctx->pc == 0x421C08u) {
        ctx->pc = 0x421C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C04u;
        // 0x421c08: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421C0Cu;
        goto label_421c0c;
    }
    ctx->pc = 0x421C04u;
    SET_GPR_U32(ctx, 31, 0x421C0Cu);
    ctx->pc = 0x421C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421C04u;
    // 0x421c08: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A410u, 0x421C04u, 0x421C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421C0Cu;
label_421c0c:
    // 0x421c0c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x421c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_421c10:
    // 0x421c10: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_421c14:
    if (ctx->pc == 0x421C14u) {
        ctx->pc = 0x421C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C10u;
        // 0x421c14: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421C18u;
        goto label_421c18;
    }
    ctx->pc = 0x421C10u;
    {
        const bool branch_taken_0x421c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C10u;
        // 0x421c14: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421c10) {
            ctx->pc = 0x421B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421b88;
        }
    }
    ctx->pc = 0x421C18u;
label_421c18:
    // 0x421c18: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421c1c:
    // 0x421c1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x421c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_421c20:
    // 0x421c20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x421c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421c24:
    // 0x421c24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421c28:
    // 0x421c28: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421c2c:
    // 0x421c2c: 0x40f809  jalr        $v0
label_421c30:
    if (ctx->pc == 0x421C30u) {
        ctx->pc = 0x421C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C2Cu;
        // 0x421c30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421C34u;
        goto label_421c34;
    }
    ctx->pc = 0x421C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421C34u);
        ctx->pc = 0x421C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C2Cu;
        // 0x421c30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421C2Cu, 0x421C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421C34u;
label_421c34:
    // 0x421c34: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x421c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_421c38:
    // 0x421c38: 0xc1062b2  jal         func_418AC8
label_421c3c:
    if (ctx->pc == 0x421C3Cu) {
        ctx->pc = 0x421C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C38u;
        // 0x421c3c: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421C40u;
        goto label_421c40;
    }
    ctx->pc = 0x421C38u;
    SET_GPR_U32(ctx, 31, 0x421C40u);
    ctx->pc = 0x421C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421C38u;
    // 0x421c3c: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AC8u, 0x421C38u, 0x421C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421C40u;
label_421c40:
    // 0x421c40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421c44:
    // 0x421c44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x421c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_421c48:
    // 0x421c48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421c4c:
    // 0x421c4c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421c50:
    // 0x421c50: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421c54:
    // 0x421c54: 0x40f809  jalr        $v0
label_421c58:
    if (ctx->pc == 0x421C58u) {
        ctx->pc = 0x421C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C54u;
        // 0x421c58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421C5Cu;
        goto label_421c5c;
    }
    ctx->pc = 0x421C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421C5Cu);
        ctx->pc = 0x421C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C54u;
        // 0x421c58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421C54u, 0x421C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421C5Cu;
label_421c5c:
    // 0x421c5c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x421c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_421c60:
    // 0x421c60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x421c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_421c64:
    // 0x421c64: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x421c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_421c68:
    // 0x421c68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421c6c:
    // 0x421c6c: 0xac640438  sw          $a0, 0x438($v1)
    ctx->pc = 0x421c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1080), GPR_U32(ctx, 4));
label_421c70:
    // 0x421c70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x421c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421c74:
    // 0x421c74: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x421c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_421c78:
    // 0x421c78: 0x8c470054  lw          $a3, 0x54($v0)
    ctx->pc = 0x421c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_421c7c:
    // 0x421c7c: 0xe0f809  jalr        $a3
label_421c80:
    if (ctx->pc == 0x421C80u) {
        ctx->pc = 0x421C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C7Cu;
        // 0x421c80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421C84u;
        goto label_421c84;
    }
    ctx->pc = 0x421C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x421C84u);
        ctx->pc = 0x421C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C7Cu;
        // 0x421c80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421C7Cu, 0x421C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421C84u;
label_421c84:
    // 0x421c84: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x421c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_421c88:
    // 0x421c88: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x421c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_421c8c:
    // 0x421c8c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x421c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_421c90:
    // 0x421c90: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x421c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_421c94:
    // 0x421c94: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x421c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_421c98:
    // 0x421c98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x421c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_421c9c:
    // 0x421c9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x421c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_421ca0:
    // 0x421ca0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421ca4:
    // 0x421ca4: 0xac837aa8  sw          $v1, 0x7AA8($a0)
    ctx->pc = 0x421ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31400), GPR_U32(ctx, 3));
label_421ca8:
    // 0x421ca8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x421ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421cac:
    // 0x421cac: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x421cacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_421cb0:
    // 0x421cb0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x421cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_421cb4:
    // 0x421cb4: 0x60f809  jalr        $v1
label_421cb8:
    if (ctx->pc == 0x421CB8u) {
        ctx->pc = 0x421CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CB4u;
        // 0x421cb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CBCu;
        goto label_421cbc;
    }
    ctx->pc = 0x421CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421CBCu);
        ctx->pc = 0x421CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CB4u;
        // 0x421cb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421CB4u, 0x421CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421CBCu;
label_421cbc:
    // 0x421cbc: 0xc080ff2  jal         func_203FC8
label_421cc0:
    if (ctx->pc == 0x421CC0u) {
        ctx->pc = 0x421CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CBCu;
        // 0x421cc0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CC4u;
        goto label_421cc4;
    }
    ctx->pc = 0x421CBCu;
    SET_GPR_U32(ctx, 31, 0x421CC4u);
    ctx->pc = 0x421CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421CBCu;
    // 0x421cc0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FC8u, 0x421CBCu, 0x421CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421CC4u;
label_421cc4:
    // 0x421cc4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421cc8:
    // 0x421cc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x421cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421ccc:
    // 0x421ccc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421cd0:
    // 0x421cd0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421cd4:
    // 0x421cd4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421cd8:
    // 0x421cd8: 0x40f809  jalr        $v0
label_421cdc:
    if (ctx->pc == 0x421CDCu) {
        ctx->pc = 0x421CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CD8u;
        // 0x421cdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CE0u;
        goto label_421ce0;
    }
    ctx->pc = 0x421CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421CE0u);
        ctx->pc = 0x421CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CD8u;
        // 0x421cdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421CD8u, 0x421CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421CE0u;
label_421ce0:
    // 0x421ce0: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x421ce0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_421ce4:
    // 0x421ce4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421ce8:
    // 0x421ce8: 0x8ea2489c  lw          $v0, 0x489C($s5)
    ctx->pc = 0x421ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_421cec:
    // 0x421cec: 0xa044043c  sb          $a0, 0x43C($v0)
    ctx->pc = 0x421cecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1084), (uint8_t)GPR_U32(ctx, 4));
label_421cf0:
    // 0x421cf0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421cf4:
    // 0x421cf4: 0x8ea5489c  lw          $a1, 0x489C($s5)
    ctx->pc = 0x421cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_421cf8:
    // 0x421cf8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421cfc:
    // 0x421cfc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421d00:
    // 0x421d00: 0x40f809  jalr        $v0
label_421d04:
    if (ctx->pc == 0x421D04u) {
        ctx->pc = 0x421D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421D00u;
        // 0x421d04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421D08u;
        goto label_421d08;
    }
    ctx->pc = 0x421D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421D08u);
        ctx->pc = 0x421D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421D00u;
        // 0x421d04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421D00u, 0x421D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421D08u;
label_421d08:
    // 0x421d08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421d0c:
    // 0x421d0c: 0x0  nop
    ctx->pc = 0x421d0cu;
    // NOP
label_421d10:
    // 0x421d10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x421d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421d14:
    // 0x421d14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x421d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421d18:
    // 0x421d18: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421d1c:
    // 0x421d1c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x421d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421d20:
    // 0x421d20: 0x40f809  jalr        $v0
label_421d24:
    if (ctx->pc == 0x421D24u) {
        ctx->pc = 0x421D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421D20u;
        // 0x421d24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421D28u;
        goto label_421d28;
    }
    ctx->pc = 0x421D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421D28u);
        ctx->pc = 0x421D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421D20u;
        // 0x421d24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421D20u, 0x421D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421D28u;
label_421d28:
    // 0x421d28: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x421d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_421d2c:
    // 0x421d2c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x421d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_421d30:
    // 0x421d30: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x421d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_421d34:
    // 0x421d34: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x421d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_421d38:
    // 0x421d38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x421d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_421d3c:
    // 0x421d3c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x421d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_421d40:
    // 0x421d40: 0xac64572c  sw          $a0, 0x572C($v1)
    ctx->pc = 0x421d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22316), GPR_U32(ctx, 4));
label_421d44:
    // 0x421d44: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x421d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_421d48:
    // 0x421d48: 0x0  nop
    ctx->pc = 0x421d48u;
    // NOP
label_421d4c:
    // 0x421d4c: 0x0  nop
    ctx->pc = 0x421d4cu;
    // NOP
label_421d50:
    // 0x421d50: 0x0  nop
    ctx->pc = 0x421d50u;
    // NOP
label_421d54:
    // 0x421d54: 0x0  nop
    ctx->pc = 0x421d54u;
    // NOP
label_421d58:
    // 0x421d58: 0x4a3fffb  bgezl       $a1, . + 4 + (-0x5 << 2)
label_421d5c:
    if (ctx->pc == 0x421D5Cu) {
        ctx->pc = 0x421D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421D58u;
        // 0x421d5c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421D60u;
        goto label_421d60;
    }
    ctx->pc = 0x421D58u;
    {
        const bool branch_taken_0x421d58 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x421d58) {
            ctx->pc = 0x421D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421D58u;
            // 0x421d5c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421d48;
        }
    }
    ctx->pc = 0x421D60u;
label_421d60:
    // 0x421d60: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x421d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_421d64:
    // 0x421d64: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x421d64u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_421d68:
    // 0x421d68: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x421d68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_421d6c:
    // 0x421d6c: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
label_421d70:
    if (ctx->pc == 0x421D70u) {
        ctx->pc = 0x421D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421D6Cu;
        // 0x421d70: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421D74u;
        goto label_421d74;
    }
    ctx->pc = 0x421D6Cu;
    {
        const bool branch_taken_0x421d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x421d6c) {
            ctx->pc = 0x421D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421D6Cu;
            // 0x421d70: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421d10;
        }
    }
    ctx->pc = 0x421D74u;
label_421d74:
    // 0x421d74: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x421d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_421d78:
    // 0x421d78: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x421d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_421d7c:
    // 0x421d7c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x421d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_421d80:
    // 0x421d80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x421d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_421d84:
    // 0x421d84: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x421d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_421d88:
    // 0x421d88: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x421d88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_421d8c:
    // 0x421d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x421d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_421d90:
    // 0x421d90: 0x3e00008  jr          $ra
label_421d94:
    if (ctx->pc == 0x421D94u) {
        ctx->pc = 0x421D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421D90u;
        // 0x421d94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421D98u;
        goto label_fallthrough_0x421d90;
    }
    ctx->pc = 0x421D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421D90u;
        // 0x421d94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x421d90:
    ctx->pc = 0x421D98u;
}
