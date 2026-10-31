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

// Function: sub_004E18A8
// Address: 0x4e18a8 - 0x4e1a58
void sub_004E18A8_0x4e18a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E18A8_0x4e18a8");
#endif

    switch (ctx->pc) {
        case 0x4e18fcu: goto label_4e18fc;
        case 0x4e1930u: goto label_4e1930;
        case 0x4e1988u: goto label_4e1988;
        case 0x4e19b8u: goto label_4e19b8;
        case 0x4e1a14u: goto label_4e1a14;
        case 0x4e1a28u: goto label_4e1a28;
        case 0x4e1a38u: goto label_4e1a38;
        default: break;
    }

    ctx->pc = 0x4e18a8u;

    // 0x4e18a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e18a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e18ac: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e18acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e18b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e18b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e18b4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e18b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e18b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e18bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e18c0: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e18c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e18c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e18c8: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E18C8u;
    {
        const bool branch_taken_0x4e18c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E18C8u;
        // 0x4e18cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e18c8) {
            ctx->pc = 0x4E1904u;
            goto label_4e1904;
        }
    }
    ctx->pc = 0x4E18D0u;
    // 0x4e18d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e18d4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E18D4u;
    {
        const bool branch_taken_0x4e18d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e18d4) {
            ctx->pc = 0x4E18D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E18D4u;
            // 0x4e18d8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E18F4u;
            goto label_4e18f4;
        }
    }
    ctx->pc = 0x4E18DCu;
    // 0x4e18dc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e18e0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e18e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e18e4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e18e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e18e8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E18E8u;
    {
        const bool branch_taken_0x4e18e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e18e8) {
            ctx->pc = 0x4E1A20u;
            goto label_4e1a20;
        }
    }
    ctx->pc = 0x4E18F0u;
    // 0x4e18f0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e18f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e18f4:
    // 0x4e18f4: 0xc1385d4  jal         func_4E1750
    ctx->pc = 0x4E18F4u;
    SET_GPR_U32(ctx, 31, 0x4E18FCu);
    ctx->pc = 0x4E18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E18F4u;
    // 0x4e18f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1750u, 0x4E18F4u, 0x4E18FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E18FCu;
label_4e18fc:
    // 0x4e18fc: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E18FCu;
    {
        const bool branch_taken_0x4e18fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E18FCu;
        // 0x4e1900: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e18fc) {
            ctx->pc = 0x4E1A3Cu;
            goto label_4e1a3c;
        }
    }
    ctx->pc = 0x4E1904u;
label_4e1904:
    // 0x4e1904: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E1904u;
    {
        const bool branch_taken_0x4e1904 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e1904) {
            ctx->pc = 0x4E1908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1904u;
            // 0x4e1908: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1938u;
            goto label_4e1938;
        }
    }
    ctx->pc = 0x4E190Cu;
    // 0x4e190c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e190cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e1910: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e1910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e1914: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e1914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e1918: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e1918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e191c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E191Cu;
    {
        const bool branch_taken_0x4e191c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E191Cu;
        // 0x4e1920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e191c) {
            ctx->pc = 0x4E1A0Cu;
            goto label_4e1a0c;
        }
    }
    ctx->pc = 0x4E1924u;
    // 0x4e1924: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e1924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1928: 0xc1385d4  jal         func_4E1750
    ctx->pc = 0x4E1928u;
    SET_GPR_U32(ctx, 31, 0x4E1930u);
    ctx->pc = 0x4E192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1928u;
    // 0x4e192c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1750u, 0x4E1928u, 0x4E1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1930u;
label_4e1930:
    // 0x4e1930: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E1930u;
    {
        const bool branch_taken_0x4e1930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1930u;
        // 0x4e1934: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1930) {
            ctx->pc = 0x4E1A3Cu;
            goto label_4e1a3c;
        }
    }
    ctx->pc = 0x4E1938u;
label_4e1938:
    // 0x4e1938: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e1938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e193c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E193Cu;
    {
        const bool branch_taken_0x4e193c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E193Cu;
        // 0x4e1940: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e193c) {
            ctx->pc = 0x4E1960u;
            goto label_4e1960;
        }
    }
    ctx->pc = 0x4E1944u;
    // 0x4e1944: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e1944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e1948: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e1948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e194c: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E194Cu;
    {
        const bool branch_taken_0x4e194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e194c) {
            ctx->pc = 0x4E1950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E194Cu;
            // 0x4e1950: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1964u;
            goto label_4e1964;
        }
    }
    ctx->pc = 0x4E1954u;
    // 0x4e1954: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e1954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e1958: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E1958u;
    {
        const bool branch_taken_0x4e1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1958u;
        // 0x4e195c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1958) {
            ctx->pc = 0x4E19D0u;
            goto label_4e19d0;
        }
    }
    ctx->pc = 0x4E1960u;
label_4e1960:
    // 0x4e1960: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e1960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e1964:
    // 0x4e1964: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e1964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e1968: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E1968u;
    {
        const bool branch_taken_0x4e1968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1968) {
            ctx->pc = 0x4E196Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1968u;
            // 0x4e196c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E19A8u;
            goto label_4e19a8;
        }
    }
    ctx->pc = 0x4E1970u;
    // 0x4e1970: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e1970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1974: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e1978: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E1978u;
    {
        const bool branch_taken_0x4e1978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1978) {
            ctx->pc = 0x4E197Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1978u;
            // 0x4e197c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E19D0u;
            goto label_4e19d0;
        }
    }
    ctx->pc = 0x4E1980u;
    // 0x4e1980: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e1980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e1984: 0x0  nop
    ctx->pc = 0x4e1984u;
    // NOP
label_4e1988:
    // 0x4e1988: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e198c: 0x0  nop
    ctx->pc = 0x4e198cu;
    // NOP
    // 0x4e1990: 0x0  nop
    ctx->pc = 0x4e1990u;
    // NOP
    // 0x4e1994: 0x0  nop
    ctx->pc = 0x4e1994u;
    // NOP
    // 0x4e1998: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E1998u;
    {
        const bool branch_taken_0x4e1998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1998) {
            ctx->pc = 0x4E199Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1998u;
            // 0x4e199c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1988;
        }
    }
    ctx->pc = 0x4E19A0u;
    // 0x4e19a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E19A0u;
    {
        const bool branch_taken_0x4e19a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E19A0u;
        // 0x4e19a4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e19a0) {
            ctx->pc = 0x4E19D0u;
            goto label_4e19d0;
        }
    }
    ctx->pc = 0x4E19A8u;
label_4e19a8:
    // 0x4e19a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e19a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e19ac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E19ACu;
    {
        const bool branch_taken_0x4e19ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E19ACu;
        // 0x4e19b0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e19ac) {
            ctx->pc = 0x4E19D0u;
            goto label_4e19d0;
        }
    }
    ctx->pc = 0x4E19B4u;
    // 0x4e19b4: 0x0  nop
    ctx->pc = 0x4e19b4u;
    // NOP
label_4e19b8:
    // 0x4e19b8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e19bc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e19bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e19c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e19c4: 0x0  nop
    ctx->pc = 0x4e19c4u;
    // NOP
    // 0x4e19c8: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E19C8u;
    {
        const bool branch_taken_0x4e19c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E19C8u;
        // 0x4e19cc: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e19c8) {
            ctx->pc = 0x4E19B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e19b8;
        }
    }
    ctx->pc = 0x4E19D0u;
label_4e19d0:
    // 0x4e19d0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e19d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e19d4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e19d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e19d8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e19dc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e19dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e19e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E19E0u;
    {
        const bool branch_taken_0x4e19e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E19E0u;
        // 0x4e19e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e19e0) {
            ctx->pc = 0x4E19F4u;
            goto label_4e19f4;
        }
    }
    ctx->pc = 0x4E19E8u;
    // 0x4e19e8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e19ec: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e19f0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e19f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e19f4:
    // 0x4e19f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E19F4u;
    {
        const bool branch_taken_0x4e19f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E19F4u;
        // 0x4e19f8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e19f4) {
            ctx->pc = 0x4E1A30u;
            goto label_4e1a30;
        }
    }
    ctx->pc = 0x4E19FCu;
    // 0x4e19fc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e1a00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E1A00u;
    {
        const bool branch_taken_0x4e1a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1a00) {
            ctx->pc = 0x4E1A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1A00u;
            // 0x4e1a04: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1A1Cu;
            goto label_4e1a1c;
        }
    }
    ctx->pc = 0x4E1A08u;
    // 0x4e1a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e1a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e1a0c:
    // 0x4e1a0c: 0xc1384e0  jal         func_4E1380
    ctx->pc = 0x4E1A0Cu;
    SET_GPR_U32(ctx, 31, 0x4E1A14u);
    ctx->pc = 0x4E1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1A0Cu;
    // 0x4e1a10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1380u, 0x4E1A0Cu, 0x4E1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1A14u;
label_4e1a14:
    // 0x4e1a14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E1A14u;
    {
        const bool branch_taken_0x4e1a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1A14u;
        // 0x4e1a18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1a14) {
            ctx->pc = 0x4E1A44u;
            goto label_4e1a44;
        }
    }
    ctx->pc = 0x4E1A1Cu;
label_4e1a1c:
    // 0x4e1a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e1a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e1a20:
    // 0x4e1a20: 0xc1384e0  jal         func_4E1380
    ctx->pc = 0x4E1A20u;
    SET_GPR_U32(ctx, 31, 0x4E1A28u);
    ctx->pc = 0x4E1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1A20u;
    // 0x4e1a24: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1380u, 0x4E1A20u, 0x4E1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1A28u;
label_4e1a28:
    // 0x4e1a28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E1A28u;
    {
        const bool branch_taken_0x4e1a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1A28u;
        // 0x4e1a2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1a28) {
            ctx->pc = 0x4E1A44u;
            goto label_4e1a44;
        }
    }
    ctx->pc = 0x4E1A30u;
label_4e1a30:
    // 0x4e1a30: 0xc1385d4  jal         func_4E1750
    ctx->pc = 0x4E1A30u;
    SET_GPR_U32(ctx, 31, 0x4E1A38u);
    ctx->pc = 0x4E1A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1A30u;
    // 0x4e1a34: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1750u, 0x4E1A30u, 0x4E1A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1A38u;
label_4e1a38:
    // 0x4e1a38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1a3c:
    // 0x4e1a3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e1a40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e1a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e1a44:
    // 0x4e1a44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e1a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e1a48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e1a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1A4Cu;
        // 0x4e1a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E1A54u;
    // 0x4e1a54: 0x0  nop
    ctx->pc = 0x4e1a54u;
    // NOP
    ctx->pc = 0x4e1a58u;
}
