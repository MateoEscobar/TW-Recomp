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

// Function: sub_0049F428
// Address: 0x49f428 - 0x49f520
void sub_0049F428_0x49f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F428_0x49f428");
#endif

    ctx->pc = 0x49f428u;

    // 0x49f428: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x49f428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f42c: 0x30c60f00  andi        $a2, $a2, 0xF00
    ctx->pc = 0x49f42cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x49f430: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x49f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x49f434: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x49F434u;
    {
        const bool branch_taken_0x49f434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F434u;
        // 0x49f438: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f434) {
            ctx->pc = 0x49F470u;
            goto label_49f470;
        }
    }
    ctx->pc = 0x49F43Cu;
    // 0x49f43c: 0x28c20101  slti        $v0, $a2, 0x101
    ctx->pc = 0x49f43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x49f440: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F440u;
    {
        const bool branch_taken_0x49f440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F440u;
        // 0x49f444: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f440) {
            ctx->pc = 0x49F458u;
            goto label_49f458;
        }
    }
    ctx->pc = 0x49F448u;
    // 0x49f448: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x49F448u;
    {
        const bool branch_taken_0x49f448 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F448u;
        // 0x49f44c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f448) {
            ctx->pc = 0x49F470u;
            goto label_49f470;
        }
    }
    ctx->pc = 0x49F450u;
    // 0x49f450: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x49F450u;
    {
        const bool branch_taken_0x49f450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f450) {
            ctx->pc = 0x49F514u;
            goto label_49f514;
        }
    }
    ctx->pc = 0x49F458u;
label_49f458:
    // 0x49f458: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x49F458u;
    {
        const bool branch_taken_0x49f458 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F458u;
        // 0x49f45c: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f458) {
            ctx->pc = 0x49F4A8u;
            goto label_49f4a8;
        }
    }
    ctx->pc = 0x49F460u;
    // 0x49f460: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x49F460u;
    {
        const bool branch_taken_0x49f460 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F460u;
        // 0x49f464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f460) {
            ctx->pc = 0x49F4E8u;
            goto label_49f4e8;
        }
    }
    ctx->pc = 0x49F468u;
    // 0x49f468: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x49F468u;
    {
        const bool branch_taken_0x49f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f468) {
            ctx->pc = 0x49F514u;
            goto label_49f514;
        }
    }
    ctx->pc = 0x49F470u;
label_49f470:
    // 0x49f470: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x49f470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x49f474: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x49f474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x49f478: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x49f478u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x49f47c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x49f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x49f480: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x49f480u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49f484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49f488: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x49f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49f48c: 0x306303e0  andi        $v1, $v1, 0x3E0
    ctx->pc = 0x49f48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)992);
    // 0x49f490: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49f490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49f494: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x49f494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x49f498: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x49f498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x49f49c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49f49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49f4a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x49F4A0u;
    {
        const bool branch_taken_0x49f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4A0u;
        // 0x49f4a4: 0x30a58000  andi        $a1, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4a0) {
            ctx->pc = 0x49F4DCu;
            goto label_49f4dc;
        }
    }
    ctx->pc = 0x49F4A8u;
label_49f4a8:
    // 0x49f4a8: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x49f4a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x49f4ac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x49f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x49f4b0: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x49f4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
    // 0x49f4b4: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x49f4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x49f4b8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x49f4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49f4bc: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x49f4bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x49f4c0: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x49f4c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f4c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f4c8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x49f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x49f4cc: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x49f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x49f4d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49f4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49f4d4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49f4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49f4d8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x49f4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_49f4dc:
    // 0x49f4dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49f4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49f4e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x49F4E0u;
    {
        const bool branch_taken_0x49f4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F4E0u;
        // 0x49f4e4: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4e0) {
            ctx->pc = 0x49F510u;
            goto label_49f510;
        }
    }
    ctx->pc = 0x49F4E8u;
label_49f4e8:
    // 0x49f4e8: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x49f4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x49f4ec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x49f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x49f4f0: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x49f4f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x49f4f4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49f4f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49f4f8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x49f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x49f4fc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49f4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49f500: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x49f500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x49f504: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49f504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49f508: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49f508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49f50c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x49f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_49f510:
    // 0x49f510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f514:
    // 0x49f514: 0x3e00008  jr          $ra
    ctx->pc = 0x49F514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F51Cu;
    // 0x49f51c: 0x0  nop
    ctx->pc = 0x49f51cu;
    // NOP
    ctx->pc = 0x49f520u;
}
