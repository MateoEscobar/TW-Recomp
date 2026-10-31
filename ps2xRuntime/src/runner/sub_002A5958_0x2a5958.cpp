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

// Function: sub_002A5958
// Address: 0x2a5958 - 0x2a5a90
void sub_002A5958_0x2a5958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5958_0x2a5958");
#endif

    switch (ctx->pc) {
        case 0x2a5958u: goto label_2a5958;
        case 0x2a595cu: goto label_2a595c;
        case 0x2a5960u: goto label_2a5960;
        case 0x2a5964u: goto label_2a5964;
        case 0x2a5968u: goto label_2a5968;
        case 0x2a596cu: goto label_2a596c;
        case 0x2a5970u: goto label_2a5970;
        case 0x2a5974u: goto label_2a5974;
        case 0x2a5978u: goto label_2a5978;
        case 0x2a597cu: goto label_2a597c;
        case 0x2a5980u: goto label_2a5980;
        case 0x2a5984u: goto label_2a5984;
        case 0x2a5988u: goto label_2a5988;
        case 0x2a598cu: goto label_2a598c;
        case 0x2a5990u: goto label_2a5990;
        case 0x2a5994u: goto label_2a5994;
        case 0x2a5998u: goto label_2a5998;
        case 0x2a599cu: goto label_2a599c;
        case 0x2a59a0u: goto label_2a59a0;
        case 0x2a59a4u: goto label_2a59a4;
        case 0x2a59a8u: goto label_2a59a8;
        case 0x2a59acu: goto label_2a59ac;
        case 0x2a59b0u: goto label_2a59b0;
        case 0x2a59b4u: goto label_2a59b4;
        case 0x2a59b8u: goto label_2a59b8;
        case 0x2a59bcu: goto label_2a59bc;
        case 0x2a59c0u: goto label_2a59c0;
        case 0x2a59c4u: goto label_2a59c4;
        case 0x2a59c8u: goto label_2a59c8;
        case 0x2a59ccu: goto label_2a59cc;
        case 0x2a59d0u: goto label_2a59d0;
        case 0x2a59d4u: goto label_2a59d4;
        case 0x2a59d8u: goto label_2a59d8;
        case 0x2a59dcu: goto label_2a59dc;
        case 0x2a59e0u: goto label_2a59e0;
        case 0x2a59e4u: goto label_2a59e4;
        case 0x2a59e8u: goto label_2a59e8;
        case 0x2a59ecu: goto label_2a59ec;
        case 0x2a59f0u: goto label_2a59f0;
        case 0x2a59f4u: goto label_2a59f4;
        case 0x2a59f8u: goto label_2a59f8;
        case 0x2a59fcu: goto label_2a59fc;
        case 0x2a5a00u: goto label_2a5a00;
        case 0x2a5a04u: goto label_2a5a04;
        case 0x2a5a08u: goto label_2a5a08;
        case 0x2a5a0cu: goto label_2a5a0c;
        case 0x2a5a10u: goto label_2a5a10;
        case 0x2a5a14u: goto label_2a5a14;
        case 0x2a5a18u: goto label_2a5a18;
        case 0x2a5a1cu: goto label_2a5a1c;
        case 0x2a5a20u: goto label_2a5a20;
        case 0x2a5a24u: goto label_2a5a24;
        case 0x2a5a28u: goto label_2a5a28;
        case 0x2a5a2cu: goto label_2a5a2c;
        case 0x2a5a30u: goto label_2a5a30;
        case 0x2a5a34u: goto label_2a5a34;
        case 0x2a5a38u: goto label_2a5a38;
        case 0x2a5a3cu: goto label_2a5a3c;
        case 0x2a5a40u: goto label_2a5a40;
        case 0x2a5a44u: goto label_2a5a44;
        case 0x2a5a48u: goto label_2a5a48;
        case 0x2a5a4cu: goto label_2a5a4c;
        case 0x2a5a50u: goto label_2a5a50;
        case 0x2a5a54u: goto label_2a5a54;
        case 0x2a5a58u: goto label_2a5a58;
        case 0x2a5a5cu: goto label_2a5a5c;
        case 0x2a5a60u: goto label_2a5a60;
        case 0x2a5a64u: goto label_2a5a64;
        case 0x2a5a68u: goto label_2a5a68;
        case 0x2a5a6cu: goto label_2a5a6c;
        case 0x2a5a70u: goto label_2a5a70;
        case 0x2a5a74u: goto label_2a5a74;
        case 0x2a5a78u: goto label_2a5a78;
        case 0x2a5a7cu: goto label_2a5a7c;
        case 0x2a5a80u: goto label_2a5a80;
        case 0x2a5a84u: goto label_2a5a84;
        case 0x2a5a88u: goto label_2a5a88;
        case 0x2a5a8cu: goto label_2a5a8c;
        default: break;
    }

    ctx->pc = 0x2a5958u;

label_2a5958:
    // 0x2a5958: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a5958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a595c:
    // 0x2a595c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x2a595cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_2a5960:
    // 0x2a5960: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a5960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a5964:
    // 0x2a5964: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x2a5964u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
label_2a5968:
    // 0x2a5968: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2a596c:
    // 0x2a596c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a596cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5970:
    // 0x2a5970: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a5970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2a5974:
    // 0x2a5974: 0x1294818  mult        $t1, $t1, $t1
    ctx->pc = 0x2a5974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2a5978:
    // 0x2a5978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a597c:
    // 0x2a597c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a597cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a5980:
    // 0x2a5980: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2a5980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
label_2a5984:
    // 0x2a5984: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2a5984u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_2a5988:
    // 0x2a5988: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2a5988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
label_2a598c:
    // 0x2a598c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2a598cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2a5990:
    // 0x2a5990: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a5990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2a5994:
    // 0x2a5994: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a5994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2a5998:
    // 0x2a5998: 0x8c862b04  lw          $a2, 0x2B04($a0)
    ctx->pc = 0x2a5998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11012)));
label_2a599c:
    // 0x2a599c: 0x2463f9d0  addiu       $v1, $v1, -0x630
    ctx->pc = 0x2a599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965712));
label_2a59a0:
    // 0x2a59a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a59a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a59a4:
    // 0x2a59a4: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x2a59a4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
label_2a59a8:
    // 0x2a59a8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2a59a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_2a59ac:
    // 0x2a59ac: 0x78400  sll         $s0, $a3, 16
    ctx->pc = 0x2a59acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2a59b0:
    // 0x2a59b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2a59b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2a59b4:
    // 0x2a59b4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x2a59b4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_2a59b8:
    // 0x2a59b8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2a59b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_2a59bc:
    // 0x2a59bc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2a59bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a59c0:
    // 0x2a59c0: 0xae28001c  sw          $t0, 0x1C($s1)
    ctx->pc = 0x2a59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 8));
label_2a59c4:
    // 0x2a59c4: 0xa6290020  sh          $t1, 0x20($s1)
    ctx->pc = 0x2a59c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 9));
label_2a59c8:
    // 0x2a59c8: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x2a59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
label_2a59cc:
    // 0x2a59cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a59d0:
    // 0x2a59d0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2a59d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2a59d4:
    // 0x2a59d4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2a59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2a59d8:
    // 0x2a59d8: 0x40f809  jalr        $v0
label_2a59dc:
    if (ctx->pc == 0x2A59DCu) {
        ctx->pc = 0x2A59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59D8u;
        // 0x2a59dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A59E0u;
        goto label_2a59e0;
    }
    ctx->pc = 0x2A59D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A59E0u);
        ctx->pc = 0x2A59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59D8u;
        // 0x2a59dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A59D8u, 0x2A59E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A59E0u;
label_2a59e0:
    // 0x2a59e0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2a59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a59e4:
    // 0x2a59e4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2a59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2a59e8:
    // 0x2a59e8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2a59ec:
    if (ctx->pc == 0x2A59ECu) {
        ctx->pc = 0x2A59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59E8u;
        // 0x2a59ec: 0xa630001a  sh          $s0, 0x1A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A59F0u;
        goto label_2a59f0;
    }
    ctx->pc = 0x2A59E8u;
    {
        const bool branch_taken_0x2a59e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59E8u;
        // 0x2a59ec: 0xa630001a  sh          $s0, 0x1A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a59e8) {
            ctx->pc = 0x2A5A0Cu;
            goto label_2a5a0c;
        }
    }
    ctx->pc = 0x2A59F0u;
label_2a59f0:
    // 0x2a59f0: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2a59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a59f4:
    // 0x2a59f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a59f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a59f8:
    // 0x2a59f8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2a59f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2a59fc:
    // 0x2a59fc: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a5a00:
    // 0x2a5a00: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a5a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a5a04:
    // 0x2a5a04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a5a08:
    // 0x2a5a08: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2a5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2a5a0c:
    // 0x2a5a0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5a10:
    // 0x2a5a10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a5a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5a14:
    // 0x2a5a14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a5a18:
    // 0x2a5a18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5a18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5a1c:
    // 0x2a5a1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5a20:
    // 0x2a5a20: 0x40f809  jalr        $v0
label_2a5a24:
    if (ctx->pc == 0x2A5A24u) {
        ctx->pc = 0x2A5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A20u;
        // 0x2a5a24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5A28u;
        goto label_2a5a28;
    }
    ctx->pc = 0x2A5A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5A28u);
        ctx->pc = 0x2A5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A20u;
        // 0x2a5a24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5A20u, 0x2A5A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5A28u;
label_2a5a28:
    // 0x2a5a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a2c:
    // 0x2a5a2c: 0xc0a49d6  jal         func_292758
label_2a5a30:
    if (ctx->pc == 0x2A5A30u) {
        ctx->pc = 0x2A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A2Cu;
        // 0x2a5a30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5A34u;
        goto label_2a5a34;
    }
    ctx->pc = 0x2A5A2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5A34u);
    ctx->pc = 0x2A5A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A2Cu;
    // 0x2a5a30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A5A2Cu, 0x2A5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A34u;
label_2a5a34:
    // 0x2a5a34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5a38:
    // 0x2a5a38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a5a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5a3c:
    // 0x2a5a3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a5a40:
    // 0x2a5a40: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a5a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a5a44:
    // 0x2a5a44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a5a48:
    // 0x2a5a48: 0x40f809  jalr        $v0
label_2a5a4c:
    if (ctx->pc == 0x2A5A4Cu) {
        ctx->pc = 0x2A5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A48u;
        // 0x2a5a4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5A50u;
        goto label_2a5a50;
    }
    ctx->pc = 0x2A5A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5A50u);
        ctx->pc = 0x2A5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A48u;
        // 0x2a5a4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5A48u, 0x2A5A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5A50u;
label_2a5a50:
    // 0x2a5a50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a54:
    // 0x2a5a54: 0xc0a49c2  jal         func_292708
label_2a5a58:
    if (ctx->pc == 0x2A5A58u) {
        ctx->pc = 0x2A5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A54u;
        // 0x2a5a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5A5Cu;
        goto label_2a5a5c;
    }
    ctx->pc = 0x2A5A54u;
    SET_GPR_U32(ctx, 31, 0x2A5A5Cu);
    ctx->pc = 0x2A5A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A54u;
    // 0x2a5a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A5A54u, 0x2A5A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A5Cu;
label_2a5a5c:
    // 0x2a5a5c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2a5a60:
    if (ctx->pc == 0x2A5A60u) {
        ctx->pc = 0x2A5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A5Cu;
        // 0x2a5a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5A64u;
        goto label_2a5a64;
    }
    ctx->pc = 0x2A5A5Cu;
    {
        const bool branch_taken_0x2a5a5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A5Cu;
        // 0x2a5a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a5c) {
            ctx->pc = 0x2A5A6Cu;
            goto label_2a5a6c;
        }
    }
    ctx->pc = 0x2A5A64u;
label_2a5a64:
    // 0x2a5a64: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a5a68:
    if (ctx->pc == 0x2A5A68u) {
        ctx->pc = 0x2A5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A64u;
        // 0x2a5a68: 0xa6200018  sh          $zero, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5A6Cu;
        goto label_2a5a6c;
    }
    ctx->pc = 0x2A5A64u;
    {
        const bool branch_taken_0x2a5a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A64u;
        // 0x2a5a68: 0xa6200018  sh          $zero, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a64) {
            ctx->pc = 0x2A5A70u;
            goto label_2a5a70;
        }
    }
    ctx->pc = 0x2A5A6Cu;
label_2a5a6c:
    // 0x2a5a6c: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x2a5a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
label_2a5a70:
    // 0x2a5a70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a5a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a74:
    // 0x2a5a74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a5a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a5a78:
    // 0x2a5a78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a5a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a5a7c:
    // 0x2a5a7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a5a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5a80:
    // 0x2a5a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5a84:
    // 0x2a5a84: 0x3e00008  jr          $ra
label_2a5a88:
    if (ctx->pc == 0x2A5A88u) {
        ctx->pc = 0x2A5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A84u;
        // 0x2a5a88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5A8Cu;
        goto label_2a5a8c;
    }
    ctx->pc = 0x2A5A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A84u;
        // 0x2a5a88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5A8Cu;
label_2a5a8c:
    // 0x2a5a8c: 0x0  nop
    ctx->pc = 0x2a5a8cu;
    // NOP
    ctx->pc = 0x2a5a90u;
}
