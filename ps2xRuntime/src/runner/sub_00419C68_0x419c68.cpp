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

// Function: sub_00419C68
// Address: 0x419c68 - 0x419da0
void sub_00419C68_0x419c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419C68_0x419c68");
#endif

    switch (ctx->pc) {
        case 0x419cc8u: goto label_419cc8;
        case 0x419ce4u: goto label_419ce4;
        case 0x419d18u: goto label_419d18;
        case 0x419d3cu: goto label_419d3c;
        case 0x419d74u: goto label_419d74;
        default: break;
    }

    ctx->pc = 0x419c68u;

    // 0x419c68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x419c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x419c6c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x419c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x419c70: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x419c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x419c74: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x419c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x419c78: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x419c78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419c7c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x419c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x419c80: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x419c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x419c84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x419c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x419c88: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x419c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x419c8c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x419c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x419c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419c94: 0x86a20224  lh          $v0, 0x224($s5)
    ctx->pc = 0x419c94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 548)));
    // 0x419c98: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x419C98u;
    {
        const bool branch_taken_0x419c98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x419C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419C98u;
        // 0x419c9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419c98) {
            ctx->pc = 0x419D74u;
            goto label_419d74;
        }
    }
    ctx->pc = 0x419CA0u;
    // 0x419ca0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x419ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x419ca4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x419CA4u;
    {
        const bool branch_taken_0x419ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419CA4u;
        // 0x419ca8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419ca4) {
            ctx->pc = 0x419D74u;
            goto label_419d74;
        }
    }
    ctx->pc = 0x419CACu;
    // 0x419cac: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x419cacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x419cb0: 0x55b021  addu        $s6, $v0, $s5
    ctx->pc = 0x419cb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x419cb4: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x419cb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419cb8: 0x24420228  addiu       $v0, $v0, 0x228
    ctx->pc = 0x419cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
    // 0x419cbc: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x419cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x419cc0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x419CC0u;
    SET_GPR_U32(ctx, 31, 0x419CC8u);
    ctx->pc = 0x419CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419CC0u;
    // 0x419cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x419CC0u, 0x419CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419CC8u;
label_419cc8:
    // 0x419cc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x419cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x419ccc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x419cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419cd0: 0xa04301b0  sb          $v1, 0x1B0($v0)
    ctx->pc = 0x419cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 432), (uint8_t)GPR_U32(ctx, 3));
    // 0x419cd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x419cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419cd8: 0x8e02bd30  lw          $v0, -0x42D0($s0)
    ctx->pc = 0x419cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
    // 0x419cdc: 0xc106ad8  jal         func_41AB60
    ctx->pc = 0x419CDCu;
    SET_GPR_U32(ctx, 31, 0x419CE4u);
    ctx->pc = 0x419CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419CDCu;
    // 0x419ce0: 0xaec20228  sw          $v0, 0x228($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB60u, 0x419CDCu, 0x419CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419CE4u;
label_419ce4:
    // 0x419ce4: 0x96a20224  lhu         $v0, 0x224($s5)
    ctx->pc = 0x419ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 548)));
    // 0x419ce8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x419ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x419cec: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x419cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x419cf0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x419cf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x419cf4: 0x1223001f  beq         $s1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x419CF4u;
    {
        const bool branch_taken_0x419cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x419CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419CF4u;
        // 0x419cf8: 0xa6a20224  sh          $v0, 0x224($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419cf4) {
            ctx->pc = 0x419D74u;
            goto label_419d74;
        }
    }
    ctx->pc = 0x419CFCu;
    // 0x419cfc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x419cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419d00: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x419d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x419d04: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x419D04u;
    {
        const bool branch_taken_0x419d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419D04u;
        // 0x419d08: 0x26620220  addiu       $v0, $s3, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419d04) {
            ctx->pc = 0x419D54u;
            goto label_419d54;
        }
    }
    ctx->pc = 0x419D0Cu;
    // 0x419d0c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x419d0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419d10: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x419d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x419d14: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x419d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_419d18:
    // 0x419d18: 0x8e22022c  lw          $v0, 0x22C($s1)
    ctx->pc = 0x419d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x419d1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x419d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419d20: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x419d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x419d24: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x419d24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x419d28: 0xae220228  sw          $v0, 0x228($s1)
    ctx->pc = 0x419d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 2));
    // 0x419d2c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x419d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x419d30: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x419d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x419d34: 0xc0e409a  jal         func_390268
    ctx->pc = 0x419D34u;
    SET_GPR_U32(ctx, 31, 0x419D3Cu);
    ctx->pc = 0x419D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419D34u;
    // 0x419d38: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x419D34u, 0x419D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419D3Cu;
label_419d3c:
    // 0x419d3c: 0xa05301b0  sb          $s3, 0x1B0($v0)
    ctx->pc = 0x419d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 432), (uint8_t)GPR_U32(ctx, 19));
    // 0x419d40: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x419d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419d44: 0x86a20224  lh          $v0, 0x224($s5)
    ctx->pc = 0x419d44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 548)));
    // 0x419d48: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x419d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x419d4c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x419D4Cu;
    {
        const bool branch_taken_0x419d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x419D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419D4Cu;
        // 0x419d50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419d4c) {
            ctx->pc = 0x419D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419d18;
        }
    }
    ctx->pc = 0x419D54u;
label_419d54:
    // 0x419d54: 0x86a20224  lh          $v0, 0x224($s5)
    ctx->pc = 0x419d54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 548)));
    // 0x419d58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x419d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419d5c: 0x8ee3bd30  lw          $v1, -0x42D0($s7)
    ctx->pc = 0x419d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
    // 0x419d60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x419d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x419d64: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x419d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x419d68: 0xac430228  sw          $v1, 0x228($v0)
    ctx->pc = 0x419d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 3));
    // 0x419d6c: 0xc106ad8  jal         func_41AB60
    ctx->pc = 0x419D6Cu;
    SET_GPR_U32(ctx, 31, 0x419D74u);
    ctx->pc = 0x419D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419D6Cu;
    // 0x419d70: 0x84850224  lh          $a1, 0x224($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB60u, 0x419D6Cu, 0x419D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419D74u;
label_419d74:
    // 0x419d74: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x419d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x419d78: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x419d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x419d7c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x419d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x419d80: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x419d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x419d84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x419d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x419d88: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x419d88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x419d8c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x419d8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419d90: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x419d90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419d98: 0x3e00008  jr          $ra
    ctx->pc = 0x419D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419D98u;
        // 0x419d9c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419DA0u;
}
